// Copyright René Ferdinand Rivera Morell 2025

#include <iostream>

#include "fun_a.hpp"

int main()
{
	int numbers[] = { 1, 5, 9, 13, -7 };
	for (int n : numbers)
	{
		std::cout << "a(" << n << ") ==> " << a(n) << "\n";
	}
}
