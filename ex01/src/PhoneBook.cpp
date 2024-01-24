/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:31:59 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/24 16:34:13 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

PhoneBook::PhoneBook(void)
{
	_size = 0;
}

/*	set atributes	*/
void	PhoneBook::set_contact(Contact _new, int &index)
{
	if (index > 7)
		index = 0;
	_list[index] = _new;
	if (_size < 8)
		_size++;
}

int	PhoneBook::get_size(void)
{
	return (_size);
}

Contact	PhoneBook::get_contact(int index)
{
	return (_list[index]);
}

/*	get	atributes	*/
PhoneBook::~PhoneBook(void)
{
}
