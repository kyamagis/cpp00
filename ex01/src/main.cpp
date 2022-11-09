/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamagis <kyamagis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:54:32 by kyamagis          #+#    #+#             */
/*   Updated: 2022/11/08 16:11:01 by kyamagis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void	set_data_member(std::string	str, int idx, void (*f)(std::string, int))
{
	std::string	input_str;

	std::cout << str; std::cin >> input_str;
	if (std::cin.eof())
		exit(EXIT_FAILURE);
	f(input_str, idx);
}

static void add(PhoneBook *phonebook)
{
	
	set_data_member("    first name>> ", idx, phonebook->set_first_name);
	set_data_member("     last name>> ", idx, phonebook->set_last_name);
	set_data_member("      nickname>> ", idx, phonebook->set_nickname);
	set_data_member("  phone number>> ", idx, phonebook->set_phone_number);
	set_data_member("darkest secret>> ", idx, phonebook->set_darkest_secret);
}

static void	put_cont(int space_num, std::string str)
{
	std::cout << std::setw(space_num) << str.substr(0, 9);
	if (10 < str.length())
		std::cout<< ".|";
	else
		std::cout<< " |";
}

static void	search(PhoneBook *phonebook)
{
	std::cout << " index | first name | last name |  nickname |" << "\n";
	for(int i = 0; i < 8; i++)
	{
		std::cout << std::setw(6) << phonebook->get_index(i) << " |";
		put_cont(11, phonebook->get_first_name(i));
		put_cont(10, phonebook->get_last_name(i));
		put_cont(10, phonebook->get_nickname(i)); 
		std::cout << "\n";
	}
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	inputed_str;

	for(;;)
	{
		std::cout << "accept only ADD, SEARCH or EXIT>> ";
		std::cin >> inputed_str;
		if (std::cin.eof() || inputed_str == "EXIT")
			return (0);
		if (inputed_str == "ADD")
			add(&phonebook);
		else if (inputed_str == "SEARCH")
			search(&phonebook);
		else
			std::cout << "Invalid input " << "\n";
	}
	return (0);
}