/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:44:13 by jihoh             #+#    #+#             */
/*   Updated: 2022/07/02 13:40:16 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_CLASS_H
# define ITER_CLASS_H

template <typename T>
void iter(T *array, size_t arraySize, void (*f)(const T &))
{
	for (size_t i = 0; i < arraySize; i++)
		f(array[i]);
}

#endif