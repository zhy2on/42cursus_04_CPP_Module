/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:32:14 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/11 16:43:30 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

# include <iostream>
# include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain(void);
	Brain(const Brain &rhs);
	~Brain(void);

	Brain &operator=(const Brain &rhs);

	const std::string &getIdea(int idx) const;
	void setIdea(int idx, std::string idea);
};

#endif