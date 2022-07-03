/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:59:01 by jihoh             #+#    #+#             */
/*   Updated: 2022/07/03 17:50:24 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_H
# define MUTANTSTACK_CLASS_H

# include <stack>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>() {}
	MutantStack(const MutantStack &src) : std::stack<T>(src) {}
	~MutantStack(void) {}

	MutantStack &operator=(const MutantStack &rhs)
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin() { return (std::stack<T>::c.begin()); }
    const_iterator begin() const { return (std::stack<T>::c.begin()); }
    iterator end() { return (std::stack<T>::c.end()); }
    const_iterator end() const { return (std::stack<T>::c.end()); }
};

#endif