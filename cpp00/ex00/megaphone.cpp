/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 20:36:25 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/24 19:39:51 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	char	*s;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
		return (0);
	}
	av++;
	while (*av)
	{
		s = *av;
		while (*s)
		{
			*s = std::toupper(*s);
			s++;
		}
		std::cout << *av++ << " ";
	}
	std::cout << std::endl;
	return (0);
}