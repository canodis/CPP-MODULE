#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
# include <iterator>


class NoPlaceLeft : public std::exception
{
public:
	const char *what() const throw() {
		return ("No place left on the array !");
	}
};

class NotEnoughElement : public std::exception
{
public:
	const char *what() const throw() {
		return ("Not enough elements !");
	}
};

class Span
{
private:
	std::vector<int> _array;
public:
	Span();
	Span(unsigned int lenght);
	Span(const Span &cpy);
	Span &operator=(const Span &src);
	void addNumber(int number);
	int shortestSpan() const;
	int longestSpan() const;
	std::vector<int> getArray() const;
	~Span();
};

#endif