/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacortes </var/mail/dacortes>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:45:21 by dacortes          #+#    #+#             */
/*   Updated: 2024/01/24 11:23:41 by dacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_H
# define PHONEBOOK_H

/* ************************************************************************** */
/*	Includes																  */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include "Contact.hpp"
#include "PhoneBook.hpp"

/* ************************************************************************** */
/*	Macros																  	  */
/* ************************************************************************** */

#define	ERROR	-1
#define	SUCCESS	0
/*
 * Methods:
 M_GNM = get_name(), M_GLM = last_name()
 M_GPN = get_phone_number();
 M_DST = get_darkest_secret();
*/
#define M_GNM	1
#define M_GLM	2
#define M_GPN	3
#define M_GDS	4

//Errors
#define	E_NUM	1
#define E_PRM	2
#define	E_SET	3
#define E_CTD	4
#define E_INP	5
#define E_EMP	6

/******************************************************************************/
/*	Funtions																  */
/******************************************************************************/

/*	src/utils.cpp	*/
void	menu(void);
int		errors(int _error);
void	show_contacts(PhoneBook p_book, bool is);
void	indent(bool type, std::string str, int space, int index);
int		get_line(std::string str, Contact &_new, short method);

#endif
