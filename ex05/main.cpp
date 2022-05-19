/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:06:59 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/19 07:10:37 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {

	Harl harl;

	if (argc != 2){
		std::cout << "Usage : ./ex05 [DEBUG/INFO/WARNING/ERROR]\n";
		exit(0);
	}
	harl.complain(argv[1]);
}
