#include "NumberList.h"
#include <iostream>

int main() {
	NumberList lista1;
	lista1.Init();
	lista1.Add(5);
	lista1.Add(7);
	lista1.Add(9);
	lista1.Add(3);
	lista1.Print();
	std::cout << "\n";
	lista1.Sort();
	lista1.Sort();
	lista1.Print();
}