/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:49:59 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/24 11:24:25 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

static bool	new_contact(PhoneBook &p_book, int &index)
{
	Contact	_new;
	int		stt;

	stt = 0;
	if (get_line("  first name:\n", _new, M_GNM) == -2
			|| get_line("  last name:\n", _new, M_GLM) == -2)
		return (true);
	while (true)
	{
		stt = get_line("  phone number:\n", _new, M_GPN);
		if (stt == -2)
			return (true);
		else if (!stt)
			break ;
		errors(E_INP);
	}
	if (get_line("  darkest secret:\n", _new, M_GDS) == -2)
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
				show_contacts(p_book, false);
				show_contacts(p_book, true);
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
