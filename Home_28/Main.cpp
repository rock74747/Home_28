#include <iostream>
#include <string>
#include "Tree.hpp"

int main()
{
	setlocale(LC_ALL, "Russian");


	Tree apple {"Яблоки", 586, 12};
	Tree pear {"Груши", 485, 18 };
	

	print_tree (apple);
	std::cout << "----------" << std::endl;
	print_tree(pear);
	std::cout << "----------" << std::endl;

	std:: cout << "Полная стоимость всех плодов " << full_price(apple) << " руб." << std::endl;

	int m;
	std::cout << "Введите число собранных плодов -> \n";
	std::cin >> m;
	std::cout << "Стоимость собранных плодов равна " << collect (apple, m) << " руб." << std::endl;
	return 0;
}





