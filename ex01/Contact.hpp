#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite_meal;
	std::string	underwear_color;
	std::string	darkest_secret;
	std::string	index;
public:
	void	add_contact(int id);
	int		check_data();
	void	print_basic_info();
	void	print_full_info();
};

void	search_contact(Contact contact[], int index);

#endif
