#include "Contact.hpp"

void	print_header()
{
	std::cout << "\033[0;33m ------------------------------------------- \033[0m" << std::endl;
	std::cout	<< "\033[0;33m|\033[0m" << std::setw(10) << "INDEX" \
				<< "\033[0;33m|\033[0m" << std::setw(10) << "FIRST NAME" \
				<< "\033[0;33m|\033[0m" << std::setw(10) << "LAST NAME" \
				<< "\033[0;33m|\033[0m" << std::setw(10) << "NICKNAME" \
				<< "\033[0;33m| \033[0m" << std::endl;
	std::cout << "\033[0;33m ------------------------------------------- \033[0m" << std::endl;
}

int		is_digit_str(std::string str)
{
	std::string::const_iterator i = str.begin();

	while (i != str.end())
	{
		if (std::isdigit(*i))
			i++;
		else
			return (1);
	}
	return (0);
}

void	what_index(Contact contact[], int index)
{
	std::string 	str;
	int				id;

	std::cout << "\033[1;32mEnter contact index\033[0m --> ";
	if (!std::getline (std::cin, str))
		exit(0);
	if (str.empty() != 1)
	{
		if (str.length() <= 10 && is_digit_str(str) != 1)
		{
			id = std::stoll(str, nullptr, 10);
			if (id < INT_MAX && id > 0 && id <= index)
			{
				contact[id - 1].print_full_info();
				return ((void)0);
			}
		}
	}
	std::cout << std::endl << "\033[1;31mWrong index! Try again.\033[0m" << std::endl;
	search_contact(contact, index);
}

void	search_contact(Contact contact[], int index)
{
	print_header();
	for (int i = 0; i < index; i++)
		contact[i].print_basic_info();
	std::cout << std::endl;
	what_index(contact, index);
}
