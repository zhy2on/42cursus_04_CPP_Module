/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:46:43 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/21 17:07:31 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_CLASS_H
# define B_CLASS_H

# include "Base.hpp"

class B : public Base
{
private:

public:
	B(void) {}
	B(const B &rhs) { (void)rhs; }
	~B(void) {}

	B &operator=(const B &rhs) { (void)rhs; return *this;}
};

#endif