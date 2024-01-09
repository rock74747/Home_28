#pragma once

struct Tree {
	std::string fruit = "noname";
	 int fruits_number = 0;
	 int fruits = 0;
};

void print_tree(Tree& trees);
int full_price(Tree& trees);
int collect (Tree& trees, int c);