/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:30:58 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/19 11:34:59 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "phonebook.h"

class	PhoneBook
{
	private:
		Contact	_list[8];
		int		_size;
	public:
		PhoneBook(void);
		/*
			Set atributes
		*/
		int		set_contact(Contact _new, int index);
		/*
			Get atributes
		*/
		int		get_size(void);
		Contact	get_contact(int	index);
		~PhoneBook(void);
};

#endif
