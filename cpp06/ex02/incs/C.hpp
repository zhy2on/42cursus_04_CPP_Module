/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:46:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/21 17:07:48 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_CLASS_H
# define C_CLASS_H

# include "Base.hpp"

class C : public Base
{
private:

public:
	C(void) {}
	C(const A &rhs) { (void)rhs; }
	~C(void) {}

	C &operator=(const C &rhs) { (void)rhs; return *this; }
};

#endif