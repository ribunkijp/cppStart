#include <iostream>


enum class Color {
	red,
	yellow,
	pink,
	blue,
	green
};

int main()
{

	Color color_0{ Color::pink };

	std::cout << static_cast<int>(color_0) << '\n';

	return 0;
}

