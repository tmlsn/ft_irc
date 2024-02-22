/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:29:36 by tmalless          #+#    #+#             */
/*   Updated: 2024/02/22 15:22:57 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP

# define SERVER_HPP

# include <string>
# include <sys/socket.h> // For socket functions
# include <netinet/in.h> // For sockaddr_in
# include <cstdlib> // For exit() and EXIT_FAILURE
# include <iostream> // For cout
# include <unistd.h> // For read
# include <string.h> // For read
# include <poll.h>

class Server
{
private:
	unsigned int	_port;
	std::string		_password;
	sockaddr_in		_sockAddr;
	int				_sockfd;
	Server();
	
public:
	Server(unsigned int port, std::string password);
	~Server();

	int		initServer(int port);
	void	serverLoop();
};

int	checkElt(char *serverName, int portDigit, std::string psw);


#endif