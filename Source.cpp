#include "CatHeader.hpp"

int main()
{
	char choice = 'Y';

	Cat cat1;

	std::cout << "Press any key followed by ENTER to begin the program." << std::endl;
	std::cout << "You will be prompted if you would like to run it again." << std::endl;
	std::cin.get();
	std::cin.ignore();

	while (choice == 'Y' || choice == 'y')
	{
		
		for (int i = 0; i < 8; i++)
		{
			std::cout << cat1.getArray(i);
			std::chrono::milliseconds duration(550);
			std::this_thread::sleep_for(duration);
			std::system("CLS");
		}

		for (int i = 7; i >= 0; i--)
		{
			std::cout << cat1.getArray(i);
			std::chrono::milliseconds duration(550);
			std::this_thread::sleep_for(duration);
			std::system("CLS");
		}

		std::cout << "Run again? Y/N ";
		
		std::cin.get(choice);
		std::cin.ignore();
	}

	return 0;
}