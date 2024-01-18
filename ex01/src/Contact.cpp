/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:54 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/18 12:12:52 by dacortes         ###   ########.fr       */
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
			return (false);
	}
	return (false);
}

Contact::~Contact(void)
{
}
