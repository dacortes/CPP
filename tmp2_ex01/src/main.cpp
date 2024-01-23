/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:33:01 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/21 17:38:57 by dacortes         ###   ########.fr       */
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
		std::cout << "|\n";
	}
	else
	{
		std::cout << "|";
		indent(false, "", 10, p_book.get_size());
		std::cout << "|";
		indent(true, p_book.get_contact(1).get_first_name(), 10, 0);
		std::cout << "|";
		indent(true, p_book.get_contact(1).get_last_name(), 10, 0);
		std::cout << "|\n";
	}
}

bool	errors(int type)
{
	if (type == E_PRM)
		std::cout << "Invalid option\n";
	if (type == E_SET)
		std::cout << "Error set paramts\n";
	if (type == E_CTD)
		std::cout << "Close ctr + d\n";
	if (type == E_INP)
		std::cout << "   Invalid input, the field 'phone number'"
			<< " only accepts digits\n";
	if (type == E_EMP)
		std::cout << " PhoneBook empty\n";
	return (true);
}

bool	new_contact(std::string input, PhoneBook& p_book, int& index)
{
	Contact	_new;
	int		stt;

	stt = 0;
	std::cout << "  first name:\n";
	std::getline(std::cin, input);
	stt += _new.set_first_name((char *)input.c_str());
	std::cout << "  last name:\n";
	std::getline(std::cin, input);
	stt += _new.set_last_name((char *)input.c_str());
	std::cout << "  phone number:\n";
	std::getline(std::cin, input);
	while (_new.set_phone_number((char *)input.c_str()))
	{
		stt += _new.set_phone_number((char *)input.c_str());
		errors(E_INP);
		std::getline(std::cin, input);
	}
	std::cout << "  darkest secret:\n";
	std::getline(std::cin, input);
	stt += _new.set_darkest_secret((char *)input.c_str());
	if (stt < SUCCESS)
		return (true);
	p_book.set_contact(_new, index);
	index++;
	if (index >= 8)
		index = 8;
	std::cout << "->" << index << "\n";
	return (false);
}

bool	run(std::string input, PhoneBook& p_book)
{
	char	*check;
	int		index;

	index = 0;
	check = (char *)"a";
	while (check)
	{
		menu();
		std::getline(std::cin, input);
		check = (char *)input.c_str();
		std::cout << check << "<----\n";
		if (!check)
			return (errors(E_CTD));
		if (std::cin.eof())
			return (errors(E_CTD));
		if (!input.compare("ADD"))
		{
			if (new_contact(input, p_book, index))
				return (errors(E_SET));
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
			return (false);
		else
			errors(E_PRM);
	}	
	return (false);
}

int	main(void)
{
	std::string	input;
	PhoneBook	p_book;

	return (run(input, p_book));
}
