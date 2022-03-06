#pragma once
class Student {
private:
	char Name[30];
	int EnglishGrade = 0;
	int MathGrade = 0;
	int HistoryGrade = 0;
	int average = 0;

public:
	void SetName(const char* name);
	void SetEnglishGrade(int x);
	void SetMathGrade(int x);
	void SetHistoryGrade(int x);

	char* GetName();
	int GetEnglishGrade();
	int GetMathGrade();
	int GetHistoryGrade();
	int GetAverage();
	void Print();

};