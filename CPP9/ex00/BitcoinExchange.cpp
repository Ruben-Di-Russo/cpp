/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:05:20 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/03/31 19:48:55 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(BEdata	data) {
	_data = data;
}

BitcoinExchange::~BitcoinExchange() {}

bool	BitcoinExchange::_validateLine(std::string line) {
	if (line.size() < 13)
		return false;
	for (int i = 0; i < 13; i++) {
		if (!std::isdigit(line[i]) && (i < 4 || i == 5 || i == 6 || i == 8 || i == 9))
			return false;
		if (line[i] != '-' && (i == 4 || i == 7))
			return false;
		if (line[i] != ' ' && (i == 10 || i == 12))
			return false;
		if (line[i] != '|' && i == 11)
			return false;
	}
	return true;
}

bool	BitcoinExchange::_validateKey(std::string y, std::string m, std::string d) {
	int year;
	std::istringstream(y) >> year;
	int month;
	std::istringstream(m) >> month;
	int day;
	std::istringstream(d) >> day;

	if (year < 2009 || 2022 < year || month < 1 || 12 < month || day < 1 || 31 < day)
		return false;
	if (month == 2 && day > 29)
		return false;
	if (month == 2 && day == 29 && year % 4 != 0)
		return false;
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return false;
	return true;
}

bool	BitcoinExchange::_validateValue(std::string value) {
	int dot = 0;
	for (size_t i = 0; i < value.size(); i++) {
		if (!std::isdigit(value[i]) && value[i] != '.')
			return false;
		if (value[i] == '.')
			dot++;
		if (dot > 1)
			return false;
	}
	return true;
}

void	BitcoinExchange::calcRate(std::string line) {
	if (line == "date | value")
		return;
	if (!_validateLine(line)) {
		std::cout << "Error: bad input => " << line << std::endl;
		return;
	}
	std::string year = line.substr(0, 4);
	std::string month = line.substr(5, 2);
	std::string day = line.substr(8, 2);
	if (!_validateKey(year, month, day)) {
		std::cout << "Error: bad input => " << line << std::endl;
		return;
	}
	std::string date = line.substr(0, 10);
	std::string strValue = line.substr(13, line.size() - 13);
	if (strValue.empty()) {
		std::cout << "Error: bad input => " << line << std::endl;
		return;
	}
	if (!_validateValue(strValue)) {
		std::cout << "Error: not a positive number." << std::endl;
		return;
	}
	float value;
	std::istringstream(strValue) >> value;
	if (value > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		return;
	}
	BEdata::iterator	rating = _data.upper_bound(date);
	if (rating != _data.begin())
		rating--;
	std::cout << date << " => " << value << " = " << rating->second * value << std::endl;
}

std::map<std::string, float>	convertMap(std::string path) {
	std::ifstream dataCsv(path);
	if (dataCsv.fail()) {
		std::cout << "Error: could not read `data.csv`." << std::endl;
		std::exit(1);
	}
	std::map<std::string, float>	ret;
	std::string line;
	while (std::getline(dataCsv, line)) {
		if (line == "date,exchange_rate")
			continue;
		size_t comma = line.find(",");
		size_t comma2 = line.find(",", comma + 1);
		if (line.size() < 12 || comma == std::string::npos || comma2 != std::string::npos) {
			std::cout << "Error: invalid `data.csv`." << std::endl;
			std::exit(1);
		}
		std::string key = line.substr(0, comma);
		std::string value = line.substr(comma + 1, line.size() - comma - 1);
		std::istringstream(value) >> ret[key];
	}
	if (ret.size() == 0) {
		std::cout << "Error: invalid `data.csv`." << std::endl;
		std::exit(1);
	}
	return ret;
}