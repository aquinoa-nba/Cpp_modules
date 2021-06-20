#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _materia[i];
}

MateriaSource::MateriaSource(MateriaSource const &other) { *this = other; }

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] == nullptr)
		{
			_materia[i] = materia;
			return ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i] != nullptr && _materia[i]->getType().compare(type) == 0)
			return _materia[i]->clone();
	}
	return nullptr;
}

MateriaSource&	MateriaSource::operator = (MateriaSource const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete _materia[i];
			if (other._materia[i] != nullptr)
				_materia[i] = other._materia[i]->clone();
		}
	}
	return *this;
}
