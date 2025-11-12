#include <iostream>
#include <cmath>

// Function to calculate
double calucate_hypotenuse(double a, double b){
	return sqrt(std::pow(a, 2) + std::pow(b, 2));
}

// Main Code
int main(){

	double a, b, c;
	std::cout << "Enter size A: ";
	std::cin >> a;

	std::cout << "Enter size B: ";
	std::cin >> b;

    std::cout << "Enter size C: ";
	std::cin >> c;

	c = calucate_hypotenuse(a, b);

	std::cout << "Side C: " << c << std::endl;

	return 0;
}
