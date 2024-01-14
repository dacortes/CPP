/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:12:29 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/14 16:01:43 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

class	Sample
{
	public:
		float const pi;
		int					qd;
		Sample(float const f);
		~Sample(void);
		void bar(void) const;
};

Sample::Sample(float const f): pi(f), qd(42)
{
	std::cout << "Llamado al constructor\n";
	return ;
}

Sample::~Sample(void)
{
	std::cout << "Soy el unico destructor\n";
	return ;
}

void	Sample::bar(void) const
{
	std::cout << "soy pi: " << this->pi << "\n";
	std::cout << "soy qd: " << this->qd << "\n";
	//this->qd = 0;
	return ;
}

/*
int	main(void)
{

	std::string input;
	std::string	read;
	int	i = 0;

	std::cout << "Bienvenido a la agenda\n";
	while (std::cin >> input  && i < 3)
	{
		read += input + ' ';
		++i;
	}
	std::cout << read << "\n";
	return (0);
}
*/
#include <stdio.h>
int	main(void)
{
	std::string	name;
	std::cout << "Please enter your full name.\n";
	std::getline(std::cin, name);
	if (!name[0])
		std::cout << "soy null jajajjajajaja\n";
	std::cout << "your name is: " << name << "\n";
	return (0);
}
