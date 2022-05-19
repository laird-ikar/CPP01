/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:12:23 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/19 07:12:25 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
	std::string	type;

public:
	Weapon(void);
	Weapon(std::string name);
	~Weapon(void);
	void		setType(std::string type);
	std::string	getType(void);
};

Weapon &getType(void);
void setType(std::string type);

#endif
