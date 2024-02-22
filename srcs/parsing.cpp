/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:54:11 by tmalless          #+#    #+#             */
/*   Updated: 2024/02/22 14:24:12 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Server.hpp"
#include <string.h>

int	checkName(std::string serverName)
{
	if (strcmp(serverName, "./ircserv") != 0)
		return (1);
	return (0);
}

int checkPort(int port)
{

}

int checkPsw(std::string psw)
{
	
}

int	checkElt(std::string serverName, int port, std::string psw)
{
	if (!checkName(serverName))
		return (1);
	if (!checkPort(port))
		return (1);
	if (!checkPsw(psw))
		return (1);
	return (0);
}
