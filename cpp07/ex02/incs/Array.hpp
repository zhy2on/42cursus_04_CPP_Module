/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 18:14:05 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/21 20:24:38 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
	T *array;
	int arraySize;

public:
	Array(void) : array(NULL), arraySize(0) {}
	Array(const unsigned int n) : arraySize(n) { this->array = new T[n]; }
	Array(const Array &rhs) : arraySize(rhs.arraySize)
	{
		this->array = new T[rhs.arraySize];
		for (int i = 0; i < rhs.arraySize; i++)
			this->array[i] = rhs.array[i];
	}
	~Array(void) { delete[] this->array; }

	Array &operator=(const Array &rhs)
	{
		if (this->array)
			delete[] this->array;
		this->array = new T[rhs.arraySize];
		this->arraySize = rhs.arraySize;
		for (int i = 0; i < rhs.arraySize; i++)
			this->array[i] = rhs.array[i];
		return *this;
	}
	T &operator[](const int idx) const
	{
		if (idx >= this->arraySize || idx < 0)
			throw std::overflow_error("Index out of bounds");
		return this->array[idx];
	}

	int size(void) const { return this->arraySize; }
};

#endif