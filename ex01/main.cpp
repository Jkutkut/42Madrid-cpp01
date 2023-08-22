/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:56:55 by jre-gonz          #+#    #+#             */
/*   Updated: 2023/08/22 22:03:39 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void) {
	Zombie	*horde;

	horde = zombieHorde(10, "Generic Zombie");
	for (int i = 0; i < 10; i++) {
		std::cout << i << ": ";
		horde[i].announce();
	}
	delete [] horde;
	return 0;
}
