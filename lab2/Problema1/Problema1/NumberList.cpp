#include "NumberList.h"
#include <iostream>

void NumberList::Init()
{
	this->count = 0;
}

bool NumberList::Add(int x)
{
	if (count < 10) {
		this->numbers[count] = x;
		count++;
		return true;
	}
	return false;
}

void NumberList::Sort()
{
	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count; j++) {
			if (numbers[i] > numbers[j]) {
				int auxiliar;
				auxiliar = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = auxiliar;
			}
		}
	}
}


void NumberList::Print()
{
	for (int i = 0; i < count; i++) {
		std :: cout << numbers[i] << " ";
	}
}
