#include "iter.h"

int main()
{
	int array[5] = {1, 3, 2, 7, 8};
	iter(array, 5, print);
	std::cout << std::endl;
	std::string arr[6] = {"a", "b", "c", "d", "e", "f"};
	iter(arr, 6, print2);
}