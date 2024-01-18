/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:54 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/18 15:30:26 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

Contact::Contact(void)
{
}

int	Contact::set_first_name(std::string first_name)
{
	const char	*stt;

	stt =  first_name.c_str();
	if (!stt || !*stt)
		return (ERROR);
	_first_name = first_name;
	return (SUCCESS);
}

int	Contact::set_last_name(std::string last_name)
{
	const char	*stt;

	stt =  last_name.c_str();
	if (!stt || !*stt)
		return (ERROR);
	_last_name = last_name;
	return (SUCCESS);
}

int	Contact::set_phone_number(std::string phone_number)
{
	const char	*stt;

	stt =  phone_number.c_str();
	if (!stt || !*stt)
		return (ERROR);
	for (unsigned int i = 0; i < phone_number.length(); i++)
	{
		if (!std::isdigit(phone_number[0]))
			return (E_NUM);
	}
	_phone_number = phone_number;
	return (SUCCESS);
}

int	Contact::set_darkest_secret(std::string darkest_secret)
{
	const char	*stt;

	stt =  darkest_secret.c_str();
	if (!stt || !*stt)
		return (ERROR);
	_darkest_secret = darkest_secret;
	return (SUCCESS);
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
