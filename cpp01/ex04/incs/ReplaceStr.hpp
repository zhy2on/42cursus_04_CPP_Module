/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:45:23 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/01 17:03:29 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACESTR_CLASS_H
# define REPLACESTR_CLASS_H

# include <iostream>
# include <fstream>
# include <string>

class ReplaceStr
{
private:
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		s1;
	std::string		s2;

public:
	ReplaceStr();
	~ReplaceStr();
	bool	openFile( std::string f );
	void	replaceStr( std::string f, std::string s1, std::string s2 );
};

#endif