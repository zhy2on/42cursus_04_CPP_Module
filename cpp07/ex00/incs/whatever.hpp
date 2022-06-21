/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:18:39 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/21 17:46:37 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_CLASS_H
# define WHATEVER_CLASS_H

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T &min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
const T &max(T &a, T &b)
{
	return (a > b ? a : b);
}

#endif