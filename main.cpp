#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>


using namespace std;

/*
	TEST CASES:
 CASE 1:
 9, -1, 4,
 1, 9,
 1, 2,
 PATH: [2.0 1.5 1.0 0.5 1.0 1.5 1.0 1.5 2.0 1.5 2.0 1.5 1.0 ]
 WINNINGS: $500.00
 2, 10, 4,
 TOTAL: $31100.00
 AVERAGE: $3110.0
 3
 
 CASE 2:
 5, -10, 16,
 2, -1,
 2, 10, 2,
 TOTAL: $141000.00
 AVERAGE: $1410.00
 1, 5,
 PATH: [5.0 4.5 5.0 5.5 6.0 5.5 5.0 5.5 6.0 6.5 7.0 6.5 6.0]
 WINNINGS: $1000.00
 3
 
 
 CASE 3:
 7, 20, -100,
 2, 9, 9,
 2, 152, 0,
 TOTAL: $152600.00
 AVERAGE: $1003.95
 1, 4,
 PATH: [4.0 3.5 4.0 4.5 4.0 3.5 3.0 3.5 3.0 2.5 3.0 2.5 3.0]
 WINNINGS: $0.00
 3
 
 */

double singleDropSimulator(double slot)

//Simulates single drop; displays path and winnings
{
	
	double SLOT_ZERO_BOTTOM = 100.00;
	double SLOT_ONE_BOTTOM = 500.00;
	double SLOT_TWO_BOTTOM = 1000.00;
	double SLOT_THREE_BOTTOM = 0.00;
	double SLOT_FOUR_BOTTOM = 10000.00;
	double SLOT_FIVE_BOTTOM = 0.00;
	double SLOT_SIX_BOTTOM = 1000.00;
	double SLOT_SEVEN_BOTTOM = 500.00;
	double SLOT_EIGHT_BOTTOM = 100.00;
	int PEG_HIT = 1;
	int PEGS = 12;
	double SEPERATOR = 0.50000000000000;
	double hit;
	double CHIP_DECISION = 0.500;
	double earnings;
	
	std::cout << "*** DROPPING CHIP INTO SLOT " << slot << " ***" << endl;
	std::cout << std::fixed << std::setprecision(1) << "PATH: [" << slot << " ";
	
	for (PEG_HIT; PEG_HIT <= PEGS; PEG_HIT++)
	{
		double randomNumber = rand() * 1.0 / RAND_MAX;
		if (randomNumber < SEPERATOR) {
			hit = slot - CHIP_DECISION;
			if (hit < 0) { hit = slot + CHIP_DECISION; }
			if (hit > 8) { hit = slot - CHIP_DECISION; }
			slot = hit;
			std::cout << slot << " ";
		}
		if (randomNumber >= SEPERATOR) {
			hit = slot + CHIP_DECISION;
			if (hit < 0) { hit = slot + CHIP_DECISION; }
			if (hit > 8) { hit = slot - CHIP_DECISION; }
			slot = hit;
			std::cout << slot << " ";
		}
	}
	
	std::cout << "\b]" << endl;
	std::cout << "WINNINGS: ";
	if (slot == 0) { std::cout << std::fixed << std::setprecision(2) << "$" << SLOT_ZERO_BOTTOM << endl << endl; }
	if (slot == 1) { std::cout << std::fixed << std::setprecision(2) << "$" << SLOT_ONE_BOTTOM << endl << endl; }
	if (slot == 2) { std::cout << std::fixed << std::setprecision(2) << "$" << SLOT_TWO_BOTTOM << endl << endl; }
	if (slot == 3) { std::cout << std::fixed << std::setprecision(2) << "$" << SLOT_THREE_BOTTOM << endl << endl; }
	if (slot == 4) { std::cout << std::fixed << std::setprecision(2) << "$" << SLOT_FOUR_BOTTOM << endl << endl; }
	if (slot == 5) { std::cout << std::fixed << std::setprecision(2) << "$" << SLOT_FIVE_BOTTOM << endl << endl; }
	if (slot == 6) { std::cout << std::fixed << std::setprecision(2) << "$" << SLOT_SIX_BOTTOM << endl << endl; }
	if (slot == 7) { std::cout << std::fixed << std::setprecision(2) << "$" << SLOT_SEVEN_BOTTOM << endl << endl; }
	if (slot == 8) { std::cout << std::fixed << std::setprecision(2) << "$" << SLOT_EIGHT_BOTTOM << endl << endl; }
	
	if (slot == 0) { earnings = SLOT_ZERO_BOTTOM; }
	if (slot == 1) { earnings = SLOT_ONE_BOTTOM; }
	if (slot == 2) { earnings = SLOT_TWO_BOTTOM; }
	if (slot == 3) { earnings = SLOT_THREE_BOTTOM; }
	if (slot == 4) { earnings = SLOT_FOUR_BOTTOM; }
	if (slot == 5) { earnings = SLOT_FIVE_BOTTOM; }
	if (slot == 6) { earnings = SLOT_SIX_BOTTOM; }
	if (slot == 7) { earnings = SLOT_SEVEN_BOTTOM; }
	if (slot == 8) { earnings = SLOT_EIGHT_BOTTOM; }
	
	return earnings;
}

double singleDropSimulator_forMultiple (double slot){
	
	//Simulates single drop; does not display path and winnings
	{
		
		double SLOT_ZERO_BOTTOM = 100.00;
		double SLOT_ONE_BOTTOM = 500.00;
		double SLOT_TWO_BOTTOM = 1000.00;
		double SLOT_THREE_BOTTOM = 0.00;
		double SLOT_FOUR_BOTTOM = 10000.00;
		double SLOT_FIVE_BOTTOM = 0.00;
		double SLOT_SIX_BOTTOM = 1000.00;
		double SLOT_SEVEN_BOTTOM = 500.00;
		double SLOT_EIGHT_BOTTOM = 100.00;
		int PEG_HIT = 1;
		int PEGS = 12;
		double SEPERATOR = 5;
		double hit;
		double CHIP_DECISION = 0.500;
		double earnings;
		
		//srand(time(0));
		
		for (PEG_HIT; PEG_HIT <= PEGS; PEG_HIT++)
		{
			int randomNumber = rand() % 10;
			if (randomNumber < SEPERATOR) {
				hit = slot - CHIP_DECISION;
				if (hit < 0) { hit = slot + CHIP_DECISION; }
				if (hit > 8) { hit = slot - CHIP_DECISION; }
				slot = hit;
			}
			if (randomNumber >= SEPERATOR) {
				hit = slot + CHIP_DECISION;
				if (hit < 0) { hit = slot + CHIP_DECISION; }
				if (hit > 8) { hit = slot - CHIP_DECISION; }
				slot = hit;
			}
		}
		
		if (slot == 0) { earnings = SLOT_ZERO_BOTTOM; }
		if (slot == 1) { earnings = SLOT_ONE_BOTTOM; }
		if (slot == 2) { earnings = SLOT_TWO_BOTTOM; }
		if (slot == 3) { earnings = SLOT_THREE_BOTTOM; }
		if (slot == 4) { earnings = SLOT_FOUR_BOTTOM; }
		if (slot == 5) { earnings = SLOT_FIVE_BOTTOM; }
		if (slot == 6) { earnings = SLOT_SIX_BOTTOM; }
		if (slot == 7) { earnings = SLOT_SEVEN_BOTTOM; }
		if (slot == 8) { earnings = SLOT_EIGHT_BOTTOM; }
		
		return earnings;
	}
}


int main()
{
	int userOption;
	int EXIT_PROGRAM = 3;
	srand(time(0));
	
	do
	{
		
		
		int DROP_SINGLE = 1;
		int DROP_MULTIPLE = 2;
		
		int userSingleOption;
		int userMultipleOption;
		
		int ZERO_CHIPS = 0;
		double SLOT_ZERO = 0.0;
		double SLOT_ONE = 1.0;
		double SLOT_TWO = 2.0;
		double SLOT_THREE = 3.0;
		double SLOT_FOUR = 4.0;
		double SLOT_FIVE = 5.0;
		double SLOT_SIX = 6.0;
		double SLOT_SEVEN = 7.0;
		double SLOT_EIGHT = 8.0;
		
		double singleWinnings = 0.0;
		double multipleWinnings = 0.0;
		
		double winningsPerChip;
		int minimumMultipleDrops;
		
		std::cout << "MENU: Please select an option:" << endl;
		std::cout << "1 - Drop a chip into a slot." << endl;
		std::cout << "2 - Drop multiple chips into a slot." << endl;
		std::cout << "3 - End program." << endl;
		std::cout << "Enter your selection here: ";
		
		std::cin >> userOption;
		std::cout << endl;
		
		//Re-display menu if 1, 2, or 3 is not entered.
		if (userOption < DROP_SINGLE || userOption > EXIT_PROGRAM)
		{
			do
			{
				std::cout << "INVALID SELECTION: Please enter 1, 2, or 3" << endl;
				break;
			} while (userOption > EXIT_PROGRAM || userOption < DROP_SINGLE);
		}
		
		//If "1" is entered.
		if (userOption == DROP_SINGLE)
		{
			do
			{
				std::cout << "*** DROP SINGLE CHIP ***" << endl;
				std::cout << "Which slot do you want to drop the chip in (0-8)? ";
				
				std::cin >> userSingleOption;
				std::cout << endl;
				
				//If number entered is between 0 and 8 inclusive.
				if (userSingleOption >= SLOT_ZERO && userSingleOption <= SLOT_EIGHT)
				{
					int slot = userSingleOption;
					singleDropSimulator(slot); //Simulates single drop; displays path and winnings
					break;
				}
				
				//If number entered is less than 0 or greater than 8.
				if (userSingleOption > SLOT_EIGHT || userSingleOption < SLOT_ZERO)
				{
					std::cout << "INVALID SLOT." << endl << endl;
					break;
				}
				std::cout << endl;
				break;
			} while (userOption == 1);
		}
		
		//If "2" is entered.
		if (userOption == DROP_MULTIPLE)
		{
			do
			{
				std::cout << "*** DROP MULTIPLE CHIPS ***" << endl;
				std::cout << "How many chips do you want to drop (>0)? ";
				
				std::cin >> userMultipleOption;
				
				//If a number is entered that is greater than zero.
				if (userMultipleOption > ZERO_CHIPS)
				{
					std::cout << "Which slot do you want to drop the chips in (0-8)? ";
					
					
					cin >> userSingleOption;
					
					//If number entered is between 0 and 8 inclusive.
					if (userSingleOption >= SLOT_ZERO && userSingleOption <= SLOT_EIGHT) {
						
						int slot = userSingleOption;
						multipleWinnings = 0;
						for (minimumMultipleDrops = 1; minimumMultipleDrops <= userMultipleOption; minimumMultipleDrops++)
						{
							double earnings = singleDropSimulator_forMultiple(slot); //Simulates single drop; does not display path and winnings
							multipleWinnings = multipleWinnings + earnings;
						}
						
						winningsPerChip = multipleWinnings / userMultipleOption;
						
						
						std::cout << std::fixed << std::setprecision(2) << "Total winnings on " << userMultipleOption << " chips: $" << multipleWinnings << endl;
						std::cout << std::fixed << std::setprecision(2) << "Average winnings per chip: $" << winningsPerChip << endl << endl;
						
						break;
					}
					
					//If number entered is less than 0 or greater than 8.
					if (userSingleOption > SLOT_EIGHT || userSingleOption < SLOT_ZERO)
					{
						std::cout << "INVALID SLOT." << endl << endl;
						break;
					}
					
					break;
					std::cout << endl;
				}
				
				//If a number is entered that is less than or equal to zero.
				if (userMultipleOption <= ZERO_CHIPS)
				{
					std::cout << "INVALID NUMBER OF CHIPS." << endl << endl;
					break;
				}
				std::cout << endl;
				break;
			} while (userOption == 2);
		}
		
	} while (userOption != 3);
	
	//If "3" is entered.
	if (userOption == EXIT_PROGRAM)
	{
		std::cout << "GOODBYE!" << endl << endl;
		system("pause");
		return 0;
	}
}
