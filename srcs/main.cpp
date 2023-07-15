#include <iostream>

#include "Polynome.hpp"

/* Second degrees polynome resolution
 * 1. Input Parsing with token: number-operator
 * 2. Simplification OK
 * 3. Resolution OK
 * 4. Add a Prime number parser and a fraction reducer
 */
int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	Polynome polynome(argc, argv);
	polynome.resolve(true);
	std::cout << std::endl;

	Polynome polynome2("5 * X^0 + 4 * X^1 - 9.3 * X^2 = 1 * X^0");
	polynome2.resolve(true);
	std::cout << std::endl;

	Polynome polynome3("5*X^0 + 4*X^1 - 9.3*X^2 = 1*X^0");
	polynome3.resolve(true);
	std::cout << std::endl;

	Polynome polynome4("5x0 + 4x^1 - 9.3x^2 = 1*x0");
	polynome4.resolve(true);
	std::cout << std::endl;

	Polynome polynome5("5 * X^0 + 4 * X^1 = 4 * X^0");
	polynome5.resolve(true);
	std::cout << std::endl;

	Polynome polynome6("7*^2 = 0");
	polynome6.resolve(true);
	std::cout << std::endl;

	Polynome polynome7("7^2 = 0");
	polynome7.resolve(true);
	std::cout << std::endl;

	Polynome polynome8("7*2 = 0");
	polynome8.resolve(true);
	std::cout << std::endl;

	Polynome polynome9("7*x^3 = 0");
	polynome9.resolve(true);
	std::cout << std::endl;

	Polynome polynome10("7*x^1.9 = 0");
	polynome10.resolve(true);
	std::cout << std::endl;

	Polynome polynome11("7*x^2 + 8 - 4x2 = 3 + 5 + 3x2");
	polynome11.resolve(true);
	std::cout << std::endl;

	Polynome polynome12("7*x^2 + 8 - 4x2 = 4 + 5 + 3x2");
	polynome12.resolve(true);
	std::cout << std::endl;
	return (0);
}
