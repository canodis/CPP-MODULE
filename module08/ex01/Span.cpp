#include "Span.h"
#include <math.h>

Span::Span() {
}

Span::~Span() {
}

Span::Span(unsigned int lenght) {
	_array.reserve(lenght);
}

Span::Span(const Span &cpy) {
	_array = cpy.getArray();
}

Span &Span::operator=(const Span &src) {
	if (this == &src)
		return (*this);
	_array = src.getArray();
	return (*this);
}

void Span::addNumber(int number) {
	if (_array.size() <= _array.capacity())
		_array.push_back(number);
	else
		throw NoPlaceLeft();
}

int	Span::longestSpan() const {
	if (_array.size() < 2)
		throw NotEnoughElement();
	int longest;
	std::vector<int> tmp = getArray();
	std::vector<int>::iterator _iter1 = tmp.begin();
	std::vector<int>::iterator _iter2 = tmp.begin();
	longest = INT_MIN;
	while (_iter1 != tmp.end())
	{
		_iter2 = tmp.begin();
		if (_iter1 == _iter2)
				_iter2++;
		if (_iter2 == tmp.end())
				break;
		while (_iter2 != tmp.end())
		{
			if (longest < abs(*_iter1 - *_iter2))
				longest = abs(*_iter1 - *_iter2);
			_iter2++;
		}
		_iter1++;
	}
	return (longest);
}

int	Span::shortestSpan() const {
	if (_array.size() < 2)
		throw NotEnoughElement();
	std::vector<int> tmp = getArray();
	int shortest;
	std::vector<int>::iterator _iter1 = tmp.begin();
	std::vector<int>::iterator _iter2 = tmp.begin();
	shortest = INT_MAX;
	while (_iter1 != tmp.end())
	{
		_iter2 = tmp.begin();
		while (_iter2 != tmp.end())
		{
			if (_iter1 == _iter2)
				_iter2++;
			if (_iter2 == tmp.end())
				break;
			if (shortest > abs(*_iter1 - *_iter2))
				shortest = abs(*_iter1 - *_iter2);
			_iter2++;
		}
		_iter1++;
	}
	return (shortest);
}

std::vector<int> Span::getArray() const {
	return _array;
}