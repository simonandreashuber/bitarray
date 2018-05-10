#include <iostream>
#include "bitarray.h"

int main()
{
	bitarray reileen(30);

	for (size_t i = 0; i < 30; i++)
	{
		reileen.set(i, 1);
	}

	for (size_t i = 0; i < 30; i++)
	{
		std::cout << reileen.get(i);
	}

	std::cout << reileen.size_byte();

	system("pause");
}