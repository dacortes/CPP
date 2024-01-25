/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:49:59 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/24 19:03:14 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

int	check_input(std::string str, Contact &_new, short method, int _error)
{
	int stt;
	int	num;

	stt = 0;
	num = 0;
	while (true)
	{
		stt = get_line(str, _new, method, num);
		if (stt == -2)
			return (true);
		else if (!stt)
			break ;
		errors(_error);
	}
	return (SUCCESS);
}

static bool	new_contact(PhoneBook &p_book, int &index)
{
	Contact	_new;

	if (check_input("  first name:", _new, M_GFN, E_EMI) == -2
			|| check_input("  last name:", _new, M_GLN, E_EMI) == -2
			|| check_input("  nickname:", _new, M_GNM, E_EMI) == -2
			|| check_input("  phone number:", _new, M_GPN, E_INP) == -2
			|| check_input("  darkest secret:", _new, M_GDS, E_EMI) == -2)
		return (true);
	p_book.set_contact(_new, index);
	index++;
	return (false);
}

static int	run(std::string input, PhoneBook &p_book, char *check, int &index)
{
	while (true)
	{
		menu();
		std::getline(std::cin, input);
		check = (char *)input.c_str();
		if (!check || std::cin.eof())
			return (errors(E_CTD));
		if (!input.compare("ADD"))
		{
			if (new_contact(p_book, index))
				return (ERROR);
		}
		else if (!input.compare("SEARCH"))
		{
			if (!p_book.get_size())
				errors(E_EMP);
			else
			{
				std::string	_num;
				Contact tmp;
				int	num;
				int stt;

				stt = 0;
				num = 0;
				show_contacts(p_book, false, 0);
				for (int i = 0; i < p_book.get_size(); i++)
					show_contacts(p_book, true, i);
				stt = get_line("Select index:", tmp, M_SCH, num) == -2;
				if (stt  == -2)
					return (errors(E_EMP));
				if (!num || num > p_book.get_size())
					errors(E_IID);
				else
				{	
					std::cout << "First name: " 
						<< p_book.get_contact((num - 1)).get_first_name() << "\n";
					std::cout << "Last name: " 
						<< p_book.get_contact((num - 1)).get_last_name() << "\n";
					std::cout << "Nick name: " 
						<< p_book.get_contact((num - 1)).get_nickname() << "\n";
					std::cout << "Phone number: " 
						<< p_book.get_contact((num - 1)).get_phone_number() << "\n";
					std::cout << "Darkest secret: " 
						<< p_book.get_contact((num - 1)).get_darkest_secret() << "\n";
				}

			}
		}
		else if (!input.compare("EXIT"))
			return (SUCCESS);
		else
			errors(E_PRM);
	}
	return (SUCCESS);
}

int	main(void)
{
	std::string	input;
	PhoneBook	p_book;
	int			index;
	char		*check;

	index = 0;
	check = (char *)"42";
	return (run(input, p_book, check, index));
}
