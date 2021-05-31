#include "Contact.hpp"

void	enter_cmd(std::string *str)
{
	std::cout << "\033[1;32mEnter command (ADD, SEARCH or EXIT)\033[0m --> ";
	if (!std::getline(std::cin, *str))
		exit(1);
}

void	cmd_add(Contact contact[], int *index)
{
	std::cout << std::endl;
	if (*index == 8)
		std::cout << "\033[1;31mPhone book is full!\033[0m" << std::endl;
	else
	{
		std::cout << "\033[1;35mAdding a contact to the phone book.\033[0m" << std::endl;
		contact[*index].add_contact(*index + 1);
		if (contact[*index].check_data() != 1)
			*index += 1;
	}
	std::cout << std::endl;
}

void	cmd_search(Contact contact[], int index)
{

	std::cout << std::endl;
	if (index == 0)
		std::cout << "\033[1;31mPhone book is empty!\033[0m" << std::endl;
	else
	{
		std::cout << "\033[1;35mSearch for a contact in the phone book.\033[0m" << std::endl;
		search_contact(contact, index);
	}
	std::cout << std::endl;
}

int		main()
{
	int				index;
	Contact			contact[8];
	std::string		str;

	index = 0;
	while (1)
	{
		enter_cmd(&str);
		if (str.compare("ADD") == 0 || str.compare("add") == 0)
			cmd_add(contact, &index);
		else if (str.compare("SEARCH") == 0 || str.compare("search") == 0)
			cmd_search(contact, index);
		else if (str.compare("EXIT") == 0 || str.compare("exit") == 0)
		{
			std::cout << std::endl << "\033[1;35mPhone book closed!\033[0m" << std::endl << std::endl;
			break ;
		}
	}
	return 0;
}
