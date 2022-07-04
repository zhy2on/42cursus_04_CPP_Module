/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:36:05 by jihoh             #+#    #+#             */
/*   Updated: 2022/07/04 16:32:05 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
typename T::iterator easyfind(T &container, int goal)
{
	typename T::iterator it = std::find(container.begin(), container.end(), goal);
	return it;
}

#endif