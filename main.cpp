#include <iostream>
#include <string>
#include <map>
#include <algorithm>



int main()
{

	int a = 10;

	int b = std::clamp(a, 0, 5);
	int c = std::clamp(a, -10, -1);

	std::cout << b << '\n' << c << '\n';// 5
										// -1




	std::cin.get();
	return 0;

}
