/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:12:29 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/13 18:20:06 by dacortes         ###   ########.fr       */
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

int	main(void)
{
	Sample sim(3.14);

	sim.bar();
	return (0);
}
