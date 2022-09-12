#include <iostream>

template<typename Type>
void	iter(Type *array, size_t len, void(*f)(Type const &value))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

void	print(const int &n)
{
	std::cout << n << " ";
}

void	print2(const std::string &s)
{
	std::cout << s + " ";
}

int main()
{
	int array[5] = {1, 3, 2, 7, 8};
	iter(array, 5, print);
	std::cout << std::endl;
	std::string arr[6] = {"a", "b", "c", "d", "e", "f"};
	iter(arr, 6, print2);
}