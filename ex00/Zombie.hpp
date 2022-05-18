/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 07:43:53 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/18 07:37:55 by bguyot           ###   ########.fr       */
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

	void	annonce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
