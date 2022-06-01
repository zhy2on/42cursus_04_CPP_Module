/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:42:36 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/01 16:47:56 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceStr.hpp"

int	main(int ac, char **av)
{
	ReplaceStr	rs;

	if (ac != 4)
	{
		std::cout << "Please input [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	rs.replaceStr(av[1], av[2], av[3]);
	return (0);
}