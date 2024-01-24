/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:38:04 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/24 14:09:14 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

Contact::Contact(void)
{
}

/*	set atributes	*/
bool	Contact::set_first_name(char *first_name)
{
	if (!first_name || !*first_name)
		return (true);
	_first_name = first_name;
	return (false);
}

bool	Contact::set_last_name(char *last_name)
{
	if (!last_name || !*last_name)
		return (true);
	_last_name = last_name;
	return (false);
}

bool	Contact::set_phone_number(char *phone_number)
{
	if (!phone_number || !*phone_number)
		return (true);
	_phone_number = phone_number;
	for (unsigned int i = 0; i < _phone_number.length(); i++)
	{
		if (!std::isdigit(_phone_number[0]))
			return (true);
	}
	return (false);
}

bool	Contact::set_darkest_secret(char *darkest_secret)
{
	if (!darkest_secret || !*darkest_secret)
		return (true);
	_darkest_secret = darkest_secret;
	return (false);
}

/*	get atributes	*/
std::string	Contact::get_first_name(void)
{
	return (_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (_last_name);
}

std::string	Contact::get_phone_number(void)
{
	return (_phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (_darkest_secret);
}

Contact::~Contact(void)
{
}
