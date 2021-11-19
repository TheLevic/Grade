#include "gpa.h"


//Getters
int gpa::getTotalCreditHours(){
    return totalCreditHours;
}

int gpa::getTotalGradePoints(){
    return totalGradePoints;
}

//Setters
void gpa::setTotalCreditHours(int input){
    totalCreditHours = input;
}

void gpa::setTotalGradePoints(int input){
    totalGradePoints = input;
}