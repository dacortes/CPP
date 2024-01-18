/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:56:32 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/18 12:47:14 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"
#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

bool	PhoneBook::add_Contact(Contact contact, int index)
{
	if (index >= 8)
	{
		contacts[8] = contact;
		return (true);
	}
	std::cout << "add object from add_contact\n";
	contacts[index] = contact;
	return (false);
}

Contact	PhoneBook::search_contact(int index)
{
	return (contacts[index]);
}

PhoneBook::~PhoneBook(void)
{
}
