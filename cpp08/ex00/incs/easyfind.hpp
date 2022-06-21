/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:36:05 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/21 21:17:37 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
typename T::iterator easyfind(T &container, int goal)
{
	typename T::iterator it;

	for (it = container.begin(); it != container.end(); ++it)
	{
		if (*it == goal)
			return it;
	}
	return it;
}

#endif