/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:56:32 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/19 10:24:55 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"
#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_size = 0;
}

void	PhoneBook::add_Contact(Contact contact, int index)
{
	if (index >= 8)
	{
		contacts[8] = contact;
		return ;
	}
	contacts[index] = contact;
	_size++;
	if (_size >= 8)
		_size = 8;
}

Contact	PhoneBook::search_contact(int index)
{
	return (contacts[index]);
}

int	PhoneBook::get_size(void)
{
	return (_size);
}

PhoneBook::~PhoneBook(void)
{
}
