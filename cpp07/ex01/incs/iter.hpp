/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:44:13 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/21 17:49:51 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_CLASS_H
# define ITER_CLASS_H

template <typename T>

void iter(T *array, int arraySize, void (*f)(const T &))
{
	for (int i = 0; i < arraySize; i++)
		f(array[i]);
}

#endif