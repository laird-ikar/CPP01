/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:11:41 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/19 07:12:09 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string	name;
	Weapon		*weapon;

public:
	HumanA (std::string name, Weapon &weapon);
	~HumanA ();
	void	attack(void);
};

#endif
