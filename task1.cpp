#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::ofstream out_statement;
	std::string enter;

	out_statement.open("statement.txt", std::ios::app);


	std::string completing_an_input_operation;
	do {
		
		std::cout << "Sequentially enter the first name, last name, recipient of funds and date in the format DD:MM:YY, and amount of payment\n";
		std::getline(std::cin, enter);
		out_statement << enter << std::endl;

		
		std::cout << "Enter \"yes\" to continue entering data, enter \"no\" to complete the operation.";
		std::cin >> completing_an_input_operation;

		std::cin.ignore();

	} while (completing_an_input_operation == "yes" || completing_an_input_operation == "yes");
	
		
	out_statement.close();
}