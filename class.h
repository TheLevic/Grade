/* 
I would like this class to keeep track of all classes that the user has had, or currently is in.
I would like to use gpa in conjunction with this class to make a full-scale GPA tracking application
*/

#include <iostream>
#include "gpa.h"
#include <string>
#include <vector>

class classes{
public:
    //Constructor
    classes();
    //Destructor
    ~classes();
    //Getters
    string getName();
    float getGrade();
    int getGradePoint();
    int getHours();
    int getTotalHours();
    int getNumClasses;

    //Setters
    void setName();
    void setGrade();
    void setHours();
    void setTotalHours();
    void setNumClasses();

private:
    string name;
    float grade;
    int gradePoint;
    int hours;
    int totalhours;
    int numClasses;
};