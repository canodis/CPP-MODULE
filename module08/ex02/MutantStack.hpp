#pragma once
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T, std::vector<T> > {
	public:
		MutantStack() {};
		MutantStack(MutantStack const & other):std::stack<T, std::vector<T> >(other) {};
		~MutantStack() {
			this->c.clear();
		};

		MutantStack & operator=(MutantStack const & obj) {
			if (obj != *this) {
				this->c = obj.c;
			}
			return *this;
		};


		typedef typename std::vector<T>::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};
