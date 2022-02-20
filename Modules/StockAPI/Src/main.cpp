#include <iostream>
#include <string>
#include <format>
#include "LibStock.h"

int main(int argc, char** argv)
{
    std::cout << "Add : " << Add(7, 7) << std::endl;
	std::cout << "Sub : " << Sub(7, 7) << std::endl;
	std::cout << "Mul : " << Mul(7, 7) << std::endl;
	std::cout << "Div : " << Div(7, 7) << std::endl;
    
    return 0;
}