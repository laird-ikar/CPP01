/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:12:16 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/19 07:12:18 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	this->type = "";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon(void)
{
}

std::string Weapon::getType()
{
	const std::string &res = this->type;
	return res;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
