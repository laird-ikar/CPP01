/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:56:27 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/18 08:44:26 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string	name;

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	set_name(std::string name);

	void	annonce(void);
};

Zombie*	zombieHorde(int n, std::string name);

#endif
