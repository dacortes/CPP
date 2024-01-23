/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:38:04 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/21 17:27:55 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

PhoneBook::PhoneBook(void)
{
	_size = 0;	
}

int	PhoneBook::set_contact(Contact _new, int index)
{
	if (index >= 8)
	{
		_list[8] = _new;
		_size = 8;
		return (SUCCESS);
	}
	_size++;
	std::cout << "size: " << _size << "\n";
	_list[index] = _new;
	return (SUCCESS);
}

int	PhoneBook::get_size(void)
{
	return (_size);
}

Contact PhoneBook::get_contact(int index)
{
	return (_list[index]);
}

PhoneBook::~PhoneBook(void)
{
}
