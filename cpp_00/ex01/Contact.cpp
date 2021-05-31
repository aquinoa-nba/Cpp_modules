#include "Contact.hpp"

void	Contact::add_contact(int id)
{
	std::string		str;

	index = std::to_string(id);
	std::cout << "\033[1;32mEnter first name\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	first_name = str;

	std::cout << "\033[1;32mEnter last name\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	last_name = str;

	std::cout << "\033[1;32mEnter nickname\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	nickname = str;

	std::cout << "\033[1;32mEnter login\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	login = str;

	std::cout << "\033[1;32mEnter postal address\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	postal_address = str;

	std::cout << "\033[1;32mEnter email address\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	email_address = str;

	std::cout << "\033[1;32mEnter phone number\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	phone_number = str;

	std::cout << "\033[1;32mEnter birthday date\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	birthday_date = str;

	std::cout << "\033[1;32mEnter favorite meal\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	favorite_meal = str;

	std::cout << "\033[1;32mEnter underwear color\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	underwear_color = str;

	std::cout << "\033[1;32mEnter darkest secret\033[0m -> ";
	if (!std::getline(std::cin, str))
		exit(1);
	darkest_secret = str;
}

void	Contact::print_basic_info()
{
	std::cout << "\033[0;33m|\033[0m";

	if (index.length() <= 10)
		std::cout << std::setw(10) << index;
	else
		std::cout << index.substr(0, 9) << ".";

	std::cout << "\033[0;33m|\033[0m";

	if (first_name.length() <= 10)
		std::cout << std::setw(10) << first_name;
	else
		std::cout << first_name.substr(0, 9) << ".";

	std::cout << "\033[0;33m|\033[0m";

	if (last_name.length() <= 10)
		std::cout << std::setw(10) << last_name;
	else
		std::cout << last_name.substr(0, 9) << ".";

	std::cout << "\033[0;33m|\033[0m";

	if (nickname.length() <= 10)
		std::cout << std::setw(10) << nickname;
	else
		std::cout << nickname.substr(0, 9) << ".";

	std::cout << "\033[0;33m|\033[0m" << std::endl;

	std::cout << "\033[0;33m ------------------------------------------- \033[0m" << std::endl;
}

void	Contact::print_full_info()
{
	std::cout << std::endl;
	std::cout << "\033[1;35mInfo about contact with index \033[0m" << index << std::endl;
	std::cout << "\033[1;36mfirst name\033[0m" << std::setw(10) << " --> " << first_name << std::endl;
	std::cout << "\033[1;36mlast name\033[0m" << std::setw(11) << " --> " << last_name << std::endl;
	std::cout << "\033[1;36mnickname\033[0m" << std::setw(12) << " --> " << nickname << std::endl;
	std::cout << "\033[1;36mlogin\033[0m" << std::setw(15) << " --> " << login << std::endl;
	std::cout << "\033[1;36mpostal address\033[0m" << std::setw(6) << " --> " << postal_address << std::endl;
	std::cout << "\033[1;36memail address\033[0m" << std::setw(7) << " --> " << email_address << std::endl;
	std::cout << "\033[1;36mphone number\033[0m" << std::setw(8) << " --> " << phone_number << std::endl;
	std::cout << "\033[1;36mbirthday date\033[0m" << std::setw(7) << " --> " << birthday_date << std::endl;
	std::cout << "\033[1;36mfavorite meal\033[0m" << std::setw(7) << " --> " << favorite_meal << std::endl;
	std::cout << "\033[1;36munderwear color\033[0m" << " --> " << underwear_color << std::endl;
	std::cout << "\033[1;36mdarkest secret\033[0m" << std::setw(6) << " --> " << darkest_secret << std::endl;
}

int		Contact::check_data()
{
	if (first_name.empty() && \
		last_name.empty() && \
		nickname.empty() && \
		login.empty() && \
		postal_address.empty() && \
		email_address.empty() && \
		phone_number.empty() && \
		birthday_date.empty() && \
		favorite_meal.empty() && \
		underwear_color.empty() && \
		darkest_secret.empty())
		return (1);
	return (0);
}
