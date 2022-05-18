/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 07:56:41 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/18 07:40:32 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	no_name;
	Zombie	hector("Hector");
	Zombie	*silvy = new Zombie("Silvy");
	Zombie	*natasha = newZombie("Natasha");

	randomChump("Silvio");
	no_name.annonce();
	hector.annonce();
	silvy->annonce();
	natasha->natasha();
	destroy natasha;
	destroy silvy;
}
