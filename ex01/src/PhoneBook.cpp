/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:42:36 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/09 22:00:03 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    contact_idx = 0;
    for (int i = 0; i < 8; i++)
        contact[i].init_member(i);
}

void	PhoneBook::set_first_name(std::string first, int idx)
{
	contact[idx].set_first_name(first);
}

void	PhoneBook::set_last_name(std::string last, int idx)
{
	contact[idx].set_last_name(last);
}
		
void	PhoneBook::set_nickname(std::string nick, int idx)
{
	contact[idx].set_nickname(nick);
}

void	PhoneBook::set_phone_number(std::string phone, int idx)
{
	contact[idx].set_phone_number(phone);
}

void	PhoneBook::set_darkest_secret(std::string secret, int idx)
{
	contact[idx].set_darkest_secret(secret);
}

int	PhoneBook::get_index(int idx)
{
	return (contact[idx].get_index());
}

std::string	PhoneBook::get_first_name(int idx)
{
	return (contact[idx].get_first_name());
}

std::string	PhoneBook::get_last_name(int idx)
{
	return (contact[idx].get_last_name());
}

std::string	PhoneBook::get_nickname(int idx)
{
	return (contact[idx].get_nickname());
}

void	PhoneBook::set_contact_idx(int idx)
{
	contact_idx = idx;
}

int	PhoneBook::get_contact_idx(int idx)
{
	return (contact_idx);
}

Contact	PhoneBook::get_contact(int idx)
{
    return (contact[idx]);
}
