/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdi-russ <rdi-russ@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:41:18 by rdi-russ          #+#    #+#             */
/*   Updated: 2023/03/31 19:55:50 by rdi-russ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	std::ifstream input(argv[1]);
	if (input.fail()) {
		std::cout << "Error: could not read input file." << std::endl;
		return 1;
	}
	std::map<std::string, float> data = convertMap("./data.csv");
	BitcoinExchange bitcoinEX(data);
	std::string txt_line;
	while (std::getline(input, txt_line))
	{
		bitcoinEX.calcRate(txt_line);
	}
	return(0);
}
