#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.h"
#include <iomanip>

class Phonebook
{
public:
	Contact	persons[8];
	int		last;
	int		idx;
	void	add();
	void	search();
	void	print_index(int i);
};

#endif