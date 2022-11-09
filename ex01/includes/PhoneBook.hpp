/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:35:39 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/09 21:59:44 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Contact.hpp"

class	PhoneBook
{
	private:
		int		contact_idx;
		Contact contact[8];
	
	public :
		PhoneBook();
		void		set_first_name(std::string first, int idx);
		void		set_last_name(std::string last, int idx);
		void		set_nickname(std::string nick, int idx);
		void		set_phone_number(std::string phone, int idx);
		void		set_darkest_secret(std::string secret, int idx);
		int			get_index(int idx);
		std::string	get_first_name(int idx);
		std::string	get_last_name(int idx);
		std::string	get_nickname(int idx);

		void		set_contact_idx(int idx);
		int			get_contact_idx(int idx);
		Contact		get_contact(int idx);

};

#endif