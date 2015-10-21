#include "consts.h"
#include <iostream>


STATE mainMenu()
{
	system("cls");
	std::cout << "Welcome to the main menu!" << std::endl;
	std::cout << "1: Start The Hunt" << std::endl;
	std::cout << "2: Splash Screen" << std::endl;
	std::cout << "3: Exit Game" << std::endl;

	switch (getNumValid(1, 3))
	{
	case 1: return PLAY; //return will break the state.
	case 2: return INIT;
	case 3: return EXIT;
	}
}


void splash()
{
	system("cls");
	std::cout << "Welcome to the Hunt" << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "                  ########  #   #  #####                " << std::endl;
	std::cout << "                      #     #   #  #        			 " << std::endl;
	std::cout << "                      #     #####  ####				 " << std::endl;
	std::cout << "                      #     #   #  #    				 " << std::endl;
	std::cout << "                      #     #   #  #####				 " << std::endl;

	std::cout << "              #   #  #    #   ##   #  ########		 " << std::endl;
	std::cout << "              #   #  #    #   # #  #     #			 " << std::endl;
	std::cout << "              #####  #    #   #  # #     #			 " << std::endl;
	std::cout << "              #   #  ##  ##   #   ##     #			 " << std::endl;
	std::cout << "              #   #   ####    #    #     #			 " << std::endl;
	std::cout << std::endl;
	std::cout << "Created by Izaac Knien, Izaac.Knien@students.aie.edu.au" << std::endl;
	std::cout << std::endl;
	system("pause");


}

void exit()
{
	system("cls");
	std::cout << "Thanks for playing" << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "                  ########  #   #  #####                " << std::endl;
	std::cout << "                      #     #   #  #        			 " << std::endl;
	std::cout << "                      #     #####  ####				 " << std::endl;
	std::cout << "                      #     #   #  #    				 " << std::endl;
	std::cout << "                      #     #   #  #####				 " << std::endl;

	std::cout << "              #   #  #    #   ##   #  ########		 " << std::endl;
	std::cout << "              #   #  #    #   # #  #     #			 " << std::endl;
	std::cout << "              #####  #    #   #  # #     #			 " << std::endl;
	std::cout << "              #   #  ##  ##   #   ##     #			 " << std::endl;
	std::cout << "              #   #   ####    #    #     #			 " << std::endl;
	std::cout << std::endl;
	std::cout << "Created by Izaac Knien, Izaac.Knien@students.aie.edu.au" << std::endl;
	std::cout << std::endl;
	system("pause");



}





int getNumValid(int min, int max)
{
	int select;

	do
	{
		std::cout << "Enter a valid number (" << min << "-" << max << "): ";
		std::cin >> select;

		if (std::cin.fail() || select < min || select > max)
		{
			std::cin.clear();			//clears the input buffer
			std::cin.ignore(80, '\n');	//resets the input buffer
			std::cout << "Invalid entry." << std::endl;
		}
		else break; //stop looping if the input was valid
	} while (true);

	return select;
}