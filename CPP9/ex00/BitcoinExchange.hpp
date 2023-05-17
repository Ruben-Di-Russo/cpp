/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 15:04:06 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/03/31 19:56:15 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <map>
#include <fstream>
#include <iostream>
#include <sstream>

typedef std::map<std::string, float>	BEdata;

class BitcoinExchange
{
private:
	BEdata	_data;
	BitcoinExchange(BitcoinExchange const &);
	BitcoinExchange		&operator=(BitcoinExchange const &);

	bool	_validateLine(std::string line);
	bool	_validateKey(std::string year, std::string month, std::string day);
	bool	_validateValue(std::string value);

public:
	BitcoinExchange(BEdata data);
	~BitcoinExchange();

	void	calcRate(std::string line);
};

BEdata	convertMap(std::string path);

#endif
