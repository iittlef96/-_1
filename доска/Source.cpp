#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "  a   b   c   d   e   f   g   h" << std::endl;
	for (int i = 8; i >= 1; --i) {
		std::cout << i;
		for (char j = 'a'; j <= 'h'; ++j) {
			std::cout << " " << j << i << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "  a   b   c   d   e   f   g   h" << std::endl;
	





	return 0;
}