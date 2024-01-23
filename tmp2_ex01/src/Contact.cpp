/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:52:41 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/21 17:10:39 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

Contact::Contact(void)
{
}

int	Contact::set_first_name(char *first_name)
{
	if (!first_name)
		return (ERROR);
	_first_name = first_name;	
	return (SUCCESS);
}

int	Contact::set_last_name(char *last_name)
{
	if (!last_name)
		return (ERROR);
	_last_name = last_name;
	return (SUCCESS);
}

int	Contact::set_phone_number(char *phone_number)
{
	if (!phone_number)
		return (ERROR);
	_phone_number = phone_number;
	for (unsigned int i = 0; i < _phone_number.length(); i++)
	{
		if (!std::isdigit(_phone_number[0]))
			return (E_NUM);
	}
	return (SUCCESS);
}

int	Contact::set_darkest_secret(char *darkest_secret)
{
	if (!darkest_secret)
		return (ERROR);
	_darkest_secret = darkest_secret;
	return (SUCCESS);
}

std::string Contact::get_first_name(void)
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
