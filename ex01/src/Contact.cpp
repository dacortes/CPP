/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:54 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/18 12:27:27 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

Contact::Contact(void)
{
}

bool	Contact::set_first_name(std::string first_name)
{
	if (!first_name[0])
		return (true);
	_first_name = first_name;
	return (false);
}

bool	Contact::set_last_name(std::string last_name)
{
	if (!last_name[0])
		return  (true);
	_last_name = last_name;
	return (false);
}

bool	Contact::set_phone_number(std::string phone_number)
{
	if (!phone_number[0])
		return (true);
	for (unsigned int i = 0; i < phone_number.length(); i++)
	{
		if (!std::isdigit(phone_number[0]))
			return (true);
	}
	_phone_number = phone_number;
	return (false);
}

bool	Contact::set_darkest_secret(std::string darkest_secret)
{
	if (!darkest_secret[0])
		return (true);
	_darkest_secret = darkest_secret;
	return (false);
}

std::string	Contact::get_first_name(void)
{
	return (_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (_last_name);
}

std::string Contact::get_phone_number(void)
{
	return (_phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (_darkest_secret);
}

Contact::~Contact(void)
{
}
