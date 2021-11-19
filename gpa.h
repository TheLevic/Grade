#include <iostream>
#include <string>
#include <vector>
using namespace std;

class gpa{
    public:
    //Constructors
    gpa();

    //Destructor
    ~gpa();

    //Getters
    int getTotalCreditHours();
    int getTotalGradePoints();
    
    //Setters
    void setTotalCreditHours(int input);
    void setTotalGradePoints(int input);

    private:
    //Need something to store total credit hours
    int totalCreditHours;
    int totalGradePoints;
    //Need something to store total grade points

};