#include "GlobalFunctions.h"
#include <cstring>

int CompareNames(const char* Name1, const char* Name2)
{
    return strcmp(Name1, Name2);
}

int CompareEnglishGrades(int grade1, int grade2)
{
    if (grade1 > grade2) return 1;
    if (grade1 < grade2) return -1;
    if (grade1 == grade2) return 0;
}

int CompareMathGrades(int grade1, int grade2)
{
    if (grade1 > grade2) return 1;
    if (grade1 < grade2) return -1;
    if (grade1 == grade2) return 0;
}

int CompareHistoryGrades(int grade1, int grade2)
{
    if (grade1 > grade2) return 1;
    if (grade1 < grade2) return -1;
    if (grade1 == grade2) return 0;
}

int CompareAverage(int average1, int average2)
{
    if (average1 > average2) return 1;
    if (average1 < average2) return -1;
    if (average1 == average2) return 0;
}

int CompareStudents(Student student1, Student student2)
{
    if (CompareNames(student1.GetName(), student2.GetName()) > 0) return 1;
    if (CompareNames(student1.GetName(), student2.GetName()) < 0) return -1;
    if (CompareNames(student1.GetName(), student2.GetName()) == 0) {
        if (CompareEnglishGrades(student1.GetEnglishGrade(), student2.GetEnglishGrade()) == 1) return 1;
        if (CompareEnglishGrades(student1.GetEnglishGrade(), student2.GetEnglishGrade()) == -1) return -1;
        if (CompareEnglishGrades(student1.GetEnglishGrade(), student2.GetEnglishGrade()) == 0) {
            if (CompareMathGrades(student1.GetMathGrade(), student2.GetMathGrade()) == 1) return 1;
            if (CompareMathGrades(student1.GetMathGrade(), student2.GetMathGrade()) == -1) return -1;
            if (CompareMathGrades(student1.GetMathGrade(), student2.GetMathGrade()) == 0) {
                if (CompareHistoryGrades(student1.GetHistoryGrade(), student2.GetHistoryGrade()) == 1) return 1;
                if (CompareHistoryGrades(student1.GetHistoryGrade(), student2.GetHistoryGrade()) == -1) return -1;
                if (CompareHistoryGrades(student1.GetHistoryGrade(), student2.GetHistoryGrade()) == 0) {
                    if (CompareAverage(student1.GetAverage(), student2.GetAverage()) == 1) return 1;
                    if (CompareAverage(student1.GetAverage(), student2.GetAverage()) == -1) return -1;
                    if (CompareAverage(student1.GetAverage(), student2.GetAverage()) == 0) {
                        return 0;
                    }
                }
            }
        }
    }
}
