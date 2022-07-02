/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:07:34 by jihoh             #+#    #+#             */
/*   Updated: 2022/07/02 15:57:59 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS_H
# define SPAN_CLASS_H

# include <iostream>
# include <vector>

class Span
{
private:
	unsigned int storageSize;
	std::vector<int> storage;

public:
	Span(void);
	Span(unsigned int storageSize);
	Span(const Span &rhs);
	~Span(void);

	Span &operator=(const Span &rhs);

	unsigned int size(void) const;
	void addNumber(int num);
	long longestSpan(void) const;
	long shortestSpan(void) const;
	const std::vector<int> &getStorage(void) const;
	void randomFill(void);
};

#endif