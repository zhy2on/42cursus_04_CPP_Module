/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 20:45:29 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/09 20:27:30 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
# define SCAVTRAP_CLASS_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	ScavTrap(void);

public:
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &rhs);
	~ScavTrap(void);

	ScavTrap &operator=(const ScavTrap &rhs);

	void attack(const std::string &target);
	void guardGate(void);
};

#endif
