/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:22:58 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/18 12:53:38 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "../inc/phonebook.h"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		size;
	public:
		PhoneBook(void);
		bool	add_Contact(Contact contact, int index);
		Contact	search_contact(int	index);
		~PhoneBook(void);
};

#endif
