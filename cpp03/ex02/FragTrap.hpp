/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 15:48:10 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 20:31:10 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap(void);

public:
	FragTrap(const std::string name);
	FragTrap(const FragTrap &rhs);
	~FragTrap(void);

	FragTrap &operator=(const FragTrap &rhs);

	void highFivesGuys(void);
};

#endif