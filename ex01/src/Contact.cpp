/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:52:54 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/16 18:44:55 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/phonebook.h"

Contact::Contact(void)
{
}

bool	get_first_name(std::string str)
{
	if (str != NULL || !str[0])
		return (true);
	this-->first_name = str;
	return (false);
}

bool	get_last_name(std::string str)
{
	if (str != NULL || !str[0]))
		return (true);
	this->last_name = str;
	return (false);
}

Contact::~Contact(void)
{
}
