/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:45:23 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/31 20:57:52 by jihoh            ###   ########.fr       */
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
	std::string	s1;
	std::string	s2;
	std::string	filename;
public:
	ReplaceStr();
	~ReplaceStr();
	ReplaceStr( std::string s1, std::string s2, std::string filename );
	void	setS1( std::string s1 );
	void	setS2( std::string s2 );
	void	setFileName( std::string filename );
	void	replaceStr( void );
};

#endif