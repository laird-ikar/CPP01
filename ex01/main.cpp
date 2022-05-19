/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 07:56:28 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/18 09:30:17 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int		n = 5;
	Zombie	*horde = zombieHorde(n, "Jean");

	while (n--)
	{
		horde[n].annonce();
	}
	delete [] horde;
	return 0;
}
