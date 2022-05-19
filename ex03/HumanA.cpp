/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:11:36 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/19 07:12:07 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA (std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA (void)
{
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacked with " << this->weapon->getType() << '\n';
}
