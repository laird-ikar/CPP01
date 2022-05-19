/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:11:45 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/19 07:12:08 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
	this->name = name;
}

HumanB::~HumanB ()
{
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacked with " << this->weapon->getType() << '\n';
}
void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
