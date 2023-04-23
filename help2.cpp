#include <iostream>

int main()
{
	const int lines = 7;
	for (int row = 0; row < lines; row++) {
		for (int spaces = 0; spaces < row; spaces++) {
			std::cout << "  ";
		}
	std::cout << "*\n";
	}
	return 0;
}
