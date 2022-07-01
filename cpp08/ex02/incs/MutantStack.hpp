/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:59:01 by jihoh             #+#    #+#             */
/*   Updated: 2022/07/01 18:22:50 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_H
# define MUTANTSTACK_CLASS_H

# include <stack>
# include <iostream>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack<T>(void) { return; }
	MutantStack<T>(const MutantStack<T> &src) { *this = src; }
	~MutantStack<T>(void) { return; }
	MutantStack<T> &operator=(const MutantStack<T> &rhs) {
		(void)rhs;
		return *this;
	}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(void) { return this->c.begin(); }
	iterator end(void) { return this->c.end(); }
};

#endif