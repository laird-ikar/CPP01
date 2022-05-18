/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 13:32:13 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/17 13:43:19 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Zombie	*newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name);

	return (zombie);
}
