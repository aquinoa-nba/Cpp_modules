#include "Character.hpp"

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = nullptr;
}

Character::Character(Character const &other) { *this = other; }

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
}

std::string const & Character::getName() const { return _name; }

void	Character::equip(AMateria *materia)
{
	if (materia == nullptr)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == nullptr)
		{
			_materia[i] = materia;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _materia[idx] != nullptr)
		_materia[idx] = nullptr;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _materia[idx] != nullptr)
		_materia[idx]->use(target);
}

Character&	Character::operator = (Character const &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			delete _materia[i];
			_materia[i] = nullptr;
			if (other._materia[i] != nullptr)
				_materia[i] = other._materia[i]->clone();
		}
	}
	return *this;
}
