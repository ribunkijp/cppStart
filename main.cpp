#include <iostream>
#include <string>
#include <map>



int main()
{
	std::map<std::string, int>studentScores;

	studentScores["Alice"] = 30;
	studentScores["Bob"] = 50;
	
	auto it = studentScores.find("Alice");

	if (it != studentScores.end()) {
		std::string studentName = it->first;
		int score = it->second;

		std::cout << "Name: " << studentName << '\n' << "Score: " << score << '\n';
	}



	std::cin.get();
	return 0;

}
