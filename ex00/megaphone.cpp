/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mg <mg@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:02:47 by mg                #+#    #+#             */
/*   Updated: 2025/09/08 15:52:59 by mg               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>




int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	else
	{
		for (int i =1; i < ac; i++)
		{
			for (int j = 0; av[i][j] != '\0'; j++)
			{
				std::cout << (char)toupper(av[i][j]);
			}
		}
	}
		
}