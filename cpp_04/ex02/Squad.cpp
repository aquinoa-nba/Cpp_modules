#include "Squad.hpp"

Squad::Squad() : _count(0), _marineArr(nullptr) {}

Squad::Squad(Squad const &other) { *this = other; }

Squad::~Squad()
{
	if (_marineArr != nullptr)
	{
		for (int i = 0; i < _count; i++)
			delete _marineArr[i];
		delete[] _marineArr;
	}
}

int	Squad::getCount() const { return _count; }

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n >= _count)
		return nullptr;
	return _marineArr[n];
}

int	Squad::push(ISpaceMarine *marine)
{
	if (marine != nullptr)
	{
		for (int i = 0; i < _count; i++)
		{
			if (_marineArr[i] == marine)
				return _count ;
		}
		ISpaceMarine **newSquad = new ISpaceMarine*[_count + 1];
		if (_marineArr != nullptr)
		{
			for (int i = 0; i < _count; i++)
				newSquad[i] = _marineArr[i];
			delete[] _marineArr;
		}
		newSquad[_count] = marine;
		_marineArr = newSquad;
		_count++;
	}
	return _count;
}

Squad&	Squad::operator = (Squad const &other)
{
	if (this != &other)
	{
		if (_marineArr != nullptr)
		{
			for (int i = 0; i < _count; i++)
				delete _marineArr[i];
			delete[] _marineArr;
		}
		_count = other._count;
		_marineArr = new ISpaceMarine*[_count];
		for (int i = 0; i < _count; i++)
			_marineArr[i] = other._marineArr[i]->clone();
	}
	return *this;
}
