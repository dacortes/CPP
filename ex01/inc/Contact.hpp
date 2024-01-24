/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:05:34 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/24 17:07:31 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

#include "phonebook.h"

class	Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string	_nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		Contact(void);
		/*
			Set atributes
		*/
		bool	set_first_name(char *first_name);
		bool	set_last_name(char *last_name);
		bool	set_nickname(char *nickname);
		bool	set_phone_number(char *phone_number);
		bool	set_darkest_secret(char *darkest_secret);
		/*
			Get atributes
		*/
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		std::string	get_phone_number(void);
		std::string	get_darkest_secret(void);
		~Contact(void);
};

#endif
