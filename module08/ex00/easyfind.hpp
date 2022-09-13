#pragma once
# include <iostream>
# include <iterator>

class NotFound : public std::exception
{
public:
	const char *what() const throw() {
		return ("Value is not in the conteiner !");
	}
};

template<class T>
typename T::iterator	easyfind(T &conteiner, int a) {
	typename T::iterator _iter = conteiner.begin();
	while (_iter != conteiner.end())
	{
		if (*_iter == a)
			break;
		_iter++;
	}
	if (_iter == conteiner.end())
		throw NotFound();
	return (_iter);
}