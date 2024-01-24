/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes <dacortes@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:27:04 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/24 09:30:47 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

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
		void	set_contact(Contact _new, int &index);
		/*
		 	Get atributes
		*/
		int		get_size(void);
		Contact	get_contact(int index);
		~PhoneBook(void);
};
#endif
