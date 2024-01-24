/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:49:59 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/24 14:09:10 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

void	indent(bool type, std::string str, int space, int index)
{
	if (!type)
	{
		std::cout << std::setw(space);
		std::cout << str;
	}
	else
	{
		std::cout << std::setw(space);
		std::cout << (index);
	}
}

void	menu(void)
{
	std::cout << "Select any of the allowed options:\n";
	std::cout << "*";
	indent(false, "ADD\n", 5, 0);
	std::cout << "*";
	indent(false, "SEARCH\n", 8, 0);
	std::cout << "*";
	indent(false, "EXIT\n", 6, 0);
}

void	show_contacts(PhoneBook p_book, bool is)
{
	if (!is)
	{
		std::cout << "|";
		indent(false, "Index", 10, 0);
		std::cout << "|";
		indent(false, "First name", 10, 0);
		std::cout << "|";
		indent(false, "Last name", 10, 0);
		std::cout << "|";
	}
	else
	{
		std::cout << "|";
		indent(false, "", 10, 1);
		std::cout << "|";
		indent(true, p_book.get_contact(1).get_first_name(), 10, 0);
		std::cout << "|";
		indent(true, p_book.get_contact(1).get_last_name(), 10, 0);
		std::cout << "|\n";
	}
}

int	errors(int _error)
{
	if (_error == E_PRM)
		std::cout << "Invalid option\n";
	if (_error == E_SET)
		std::cout << "Error: set paramts\n";
	if (_error == E_CTD)
		std::cout << "Close ctr + d\n";
	if (_error == E_INP)
		std::cout << "   Error: invalid input, the field 'phone number'"
			<< " only accepts digits\n";
	if (_error == E_EMP)
		std::cout << " PhoneBook empty\n";
	if (_error == E_EMI)
		std::cout << "  Error: empty entry\n";
	return (ERROR);
}

int	get_line(std::string str, Contact &_new, short method)
{
	std::string	input;

	std::cout << str << " ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ((errors(E_CTD) * 0) + -2);
	if (method == M_GFN && _new.set_first_name((char *)input.c_str()))
		return (ERROR);
	else if (method == M_GLN && _new.set_last_name((char *)input.c_str()))
		return (ERROR);
	else if (method == M_GPN && _new.set_phone_number((char *)input.c_str()))
		return (ERROR);
	else if (method == M_GDS && _new.set_darkest_secret((char *)input.c_str()))
		return (ERROR);
	return (SUCCESS);
}
