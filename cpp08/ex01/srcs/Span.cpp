/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:18:56 by jihoh             #+#    #+#             */
/*   Updated: 2022/07/03 14:28:12 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
	: storageSize(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int storageSize)
	: storageSize(storageSize)
{
	// std::cout << "Parameter constructor called" << std::endl;
}

Span::Span(const Span &rhs)
	: storageSize(rhs.storageSize)
{
	this->storage = rhs.storage;
	// std::cout << "Copy constructor called" << std::endl;
}

Span::~Span(void)
{
	// std::cout << "Default destructaor called" << std::endl;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->storageSize = rhs.storageSize;
		this->storage = rhs.storage;
	}
	return *this;
	// std::cout << "Assignment operator called" << std::endl;
}

unsigned int Span::size(void) const
{
	return (this->storage.end() - this->storage.begin());
}

void Span::addNumber(int num)
{
	if (this->storage.size() == storageSize)
		throw std::out_of_range("Storage is full. Can not add number anymore.");
	this->storage.push_back(num);
}

long Span::longestSpan(void) const
{
	if (this->storage.size() <= 1)
		throw std::logic_error("Not enough numbers stored to provide a span");
	
	std::vector<int> tmp = this->storage;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

long Span::shortestSpan(void) const
{
	if (this->storage.size() <= 1)
		throw std::logic_error("Not enough numbers stored to provide a span");
	
	std::vector<int> tmp = this->storage;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator it;
	int min = INT_MAX;
	for (it = tmp.begin(); it != tmp.end() - 1; ++it)
	{
		if (*(it + 1) - *(it) < min)
			min = *(it + 1) - *(it);
	}
	return  min;
}

const std::vector<int> &Span::getStorage(void) const
{
	return this->storage;
}

void Span::randomFill(void)
{
	unsigned int leftSpace = this->storageSize - this->size();

	srand(time(NULL));
	for (unsigned int i = 0; i < leftSpace; i++)
		addNumber(rand() % 1000);
}