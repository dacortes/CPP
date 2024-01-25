/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:21:46 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/25 08:54:49 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/*	Includes																																	*/
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

/* ************************************************************************** */
/*	Macros																																		*/
/* ************************************************************************** */

#define SUCCESS 0

int main(int ac, char **av)
{
	std::string	str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int word = 1; word < ac; word++)
		{
			if (av[word] && !*av[word])
				word++;
			if (av[word] && *av[word])
			{
				str = av[word];
				for (long unsigned int	c = 0; c < str.length(); c++)
					str[c] = toupper(av[word][c]);
				std::cout << str;
			}
		}
	}
	std::cout << "\n";
	return (SUCCESS);
}
