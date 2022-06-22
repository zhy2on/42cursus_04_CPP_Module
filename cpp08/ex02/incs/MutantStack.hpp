/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:59:01 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/22 21:23:43 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_H
# define MUTANTSTACK_CLASS_H

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack(void) {}
	MutantStack(const MutantStack &rhs) { *this = rhs; }
	~MutantStack(void) {}

	MutantStack &operator=(const MutantStack &rhs) { (void)rhs; return *this; }

	typedef typename std::stack<T>::iterator iterator;
};

#endif