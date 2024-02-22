/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:18:08 by tmalless          #+#    #+#             */
/*   Updated: 2024/02/22 15:15:35 by tmalless         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Server.hpp"

int main(int ac, char **av)
{
	if (ac != 3)
	{
		std::cout << "Error: invalid input.\nMust be: ./ircserv <port> <password>" << std::endl;
		return (1);
	}

	char			*port = av[1];
	std::string		psw = av[2];
	unsigned int	portDigit = atoi(port);

	if (!checkElt(av[0], portDigit, psw))
		return (1);

	Server *server;
	server = new Server(portDigit, psw);
	if (server->initServer(portDigit) != 0)
		exit(EXIT_FAILURE);
	server->serverLoop();

}

int main(int ac, char **av) {

  

  // Read from the connection
  char buffer[100];
  while (1)
  {
    auto bytesRead = read(connection, buffer, 100);
    std::string b(buffer);
    b.append("\n");
    if (b == "EXIT")
    {
      break ;
    }
    std::cout << b << "p" << std::endl;
    b = "0";
    std::cout << "The message was: " << buffer;
    memset(buffer, 0, sizeof(buffer));
  }

  // Send a message to the connection
  std::string response = "Good talking to you\n";
  send(connection, response.c_str(), response.size(), 0);

  // Close the connections
  close(connection);
  close(sockfd);
}