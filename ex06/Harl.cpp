/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:12:35 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/19 07:12:39 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl ()
{
}

Harl::~Harl ()
{
}

void Harl::complain(std::string level)
{
	int stop = -1;

 	std::string message[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

 	for (int i = 0 ; i < 4 ; i++) {
    	if (level == message[i]) {
			stop = i;
			break;
		}
	}
	switch (stop) {
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
	}

}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do!\n";
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for\
 years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}
