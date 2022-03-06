#define _CRT_SECURE_NO_WARNINGS
#include "Catalog.h"
#include <cstring>
#include <iostream>

void Student::SetName(const char* name)
{
	strcpy(this->Name, name);
}

void Student::SetEnglishGrade(int grade)
{
	this->EnglishGrade = grade;
}

void Student::SetMathGrade(int grade)
{
	this->MathGrade = grade;
}

void Student::SetHistoryGrade(int grade)
{
	this->HistoryGrade = grade;
}

char* Student::GetName()
{
	return this->Name;
}

int Student::GetEnglishGrade()
{
	return this->EnglishGrade;
}

int Student::GetMathGrade()
{
	return this->MathGrade;
}

int Student::GetHistoryGrade()
{
	return this->HistoryGrade;
}

int Student::GetAverage()
{
	int div;
	if (EnglishGrade != 0 && MathGrade != 0 && HistoryGrade != 0) div = 3;
	if ((EnglishGrade != 0 && MathGrade != 0 && HistoryGrade == 0) || (EnglishGrade != 0 && MathGrade == 0 && HistoryGrade != 0) || (EnglishGrade == 0 && MathGrade != 0 && HistoryGrade != 0)) div = 2;
	if ((EnglishGrade != 0 && MathGrade == 0 && HistoryGrade == 0) || (EnglishGrade == 0 && MathGrade != 0 && HistoryGrade == 0) || (EnglishGrade == 0 && MathGrade == 0 && HistoryGrade != 0)) div = 1;
	int sum;
	sum = EnglishGrade + MathGrade + HistoryGrade;
	this->average = sum / div;
	return this->average;
}

void Student::Print()
{
	std::cout << "Numele studentului: " << this->Name << "\n";
	std::cout << "Nota la engleza:" << EnglishGrade << "\n";
	std::cout << "Nota la matematica:" << MathGrade << "\n";
	std::cout << "Nota la istorie:" << HistoryGrade << "\n";
	std::cout << "Media notelor:" << average << "\n";
}
