#include <iostream>
#include <string>
#include <fstream>

int main() {

	std::ofstream out_statement;	

	std::string name;
	std::string data;
	std::string sum;
	int validation_day;
	int validation_day_month;
	int validation_day_year;	

	out_statement.open("statement.txt", std::ios::app);

	std::string completing_an_input_operation;
	do {
		
		std::cout << "Enter the recipient's first and last name: \n";
		std::getline(std::cin, name);

		std::cout << "Enter the date of issue of funds in the format DD.MM.YYYY.: \n";
		std::cin >> data;

		validation_day = std::stoi(data.substr(0, 2));
		validation_day_month = std::stoi(data.substr(3, 2));
		validation_day_year = std::stoi(data.substr(6, 4));
		
		while ((validation_day < 1 || validation_day > 31) || (validation_day_month < 1 || validation_day_month > 12) || (validation_day_year < 2000 || validation_day_year > 2023)) {

			std::cout << "Incorrect date!\n";
			std::cout << "Enter the date of issue of funds in the format DD.MM.YYYY.: \n";
			std::cin >> data;

			validation_day = std::stoi(data.substr(0, 2));
			validation_day_month = std::stoi(data.substr(3, 2));
			validation_day_year = std::stoi(data.substr(6, 4));

 		}

		std::cout << "Enter payout amount: \n";
		std::cin >> sum;

		out_statement << name << " " << data << " " << sum << std::endl;
		
		std::cout << "Enter \"yes\" to continue entering data, enter \"no\" to complete the operation.";
		std::cin >> completing_an_input_operation;

		std::cin.ignore();

	} while (completing_an_input_operation == "yes" || completing_an_input_operation == "Yes");	
		
	out_statement.close();
}