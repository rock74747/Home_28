#include <iostream>
#include "Tree.hpp"
#include <string>



void print_tree(Tree& trees) {
	std::cout << "Название плодов:" << trees.fruit << std::endl;
	std::cout << "Количество плодов на дереве:" << trees.fruits_number << " штук" << std::endl;
	std::cout << "Цена за один плод:" << trees.fruits << " рублей" << std::endl;
}

int full_price(Tree& trees) {
	int n;
	n = trees.fruits_number * trees.fruits;
	return n;
}
int collect(Tree& trees, int c) {
	int n;
	while (c > trees.fruits_number) {
		std::cout << "Введено некорректное число" << std::endl;
		std::cout << "Введите число собранных плодов -> \n";
		std::cin >> c;
	}
	n = c * trees.fruits;
	return n;
}