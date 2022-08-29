/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanhuil <chanhuil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:52:12 by chanhuil          #+#    #+#             */
/*   Updated: 2022/08/29 16:10:45 by chanhuil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLINET_HPP
#define CLINET_HPP

#include <iostream>

class Client
{
private:
	/** nickname having a maximum length of nine (9) characters */
	
public:
	std::string _nick;
	std::string	_name;
	int			_fd;
	std::string _mode;
	std::string _temp;
	bool		_regist;

	Client()
		: _nick("Anonymous"), _name("Anonymous"), _fd(-1), _mode(""), _temp(""), _regist(false)
	{}
	Client(int fd)
		: _nick("Anonymous"), _name("Anonymous"), _fd(fd), _mode(""), _temp(""), _regist(false)
	{}
	
	std::string get_prefix()
	{
		return ":" + _nick + "!" + _name + "@localhost";
	}

	bool operator==(const Client& c)
	{
		return (_fd == c._fd);
	}

	bool operator!=(const Client& c)
	{
		return !(*this == c);
	}
};

#endif