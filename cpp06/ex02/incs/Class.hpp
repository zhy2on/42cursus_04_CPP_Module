/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 18:00:48 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/26 18:04:07 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CLASS_H
# define CLASS_CLASS_H

class Base
{
public:
	virtual ~Base(void) {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif