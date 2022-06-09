/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 16:09:20 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 20:32:36 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_H
# define DIAMONDTRAP_CLASS_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;

	DiamondTrap(void);

public:
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &rhs);
	~DiamondTrap(void);

	DiamondTrap &operator=(const DiamondTrap &rhs);

	void attack(const std::string &target);
	void whoAmI(void);
};

#endif