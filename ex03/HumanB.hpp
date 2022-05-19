/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:11:48 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/19 07:12:10 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string	name;
	Weapon		*weapon;

public:
	HumanB (std::string name);
	~HumanB ();
	void	attack(void);
	void	setWeapon(Weapon &weapon);
};

#endif
