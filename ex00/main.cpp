/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <jre-gonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:43:08 by jre-gonz          #+#    #+#             */
/*   Updated: 2023/08/22 19:49:39 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void) {
	Zombie	*zombie;

	zombie = newZombie("Zombie1");
	zombie->announce();
	delete zombie;
	randomChump("Zombie2");
	{
		Zombie	zombie3("Zombie3");
		zombie3.announce();
		{
			Zombie	zombie4 = Zombie("Zombie4");
			zombie4.announce();
		}
	}

	return (0);
}
