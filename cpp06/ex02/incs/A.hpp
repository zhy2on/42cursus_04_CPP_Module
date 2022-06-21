/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:46:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/21 17:07:59 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_CLASS_H
# define A_CLASS_H

# include "Base.hpp"

class A : public Base
{
private:

public:
	A(void) {}
	A(const A &rhs) { (void)rhs; }
	~A(void) {}

	A &operator=(const A &rhs) { (void)rhs; return *this; }
};

#endif