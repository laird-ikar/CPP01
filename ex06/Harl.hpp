/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 07:12:42 by bguyot            #+#    #+#             */
/*   Updated: 2022/05/19 07:12:43 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
private:

public:
	Harl ();
	~Harl ();
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void complain(std::string level);
};

#endif
