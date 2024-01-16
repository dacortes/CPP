/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:27:57 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/16 13:26:04 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include"phonebook.h"

class	Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
	public:
		Contact(void);
		~Contact(void);
};

#endif
