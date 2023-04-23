#include <iostream>

int main()
{
	int amount = 0;
	int total = 0;
	while (amount < 3) {
		std::cin >> amount;
		total += amount;
	}
	std::cout << "total is: " << total << std::endl;
	return 0;
}
