#include "Employee.h"
#include <iostream>

using namespace std;
using std::string;

class Teacher:public Employee{
public:
    string Subject;
    Teacher(string name, string company, int age, string basicTopic) : Employee(name, company, age) {
        Subject = basicTopic;
    }
    void Work(){
        cout<<Name<<" is teaching "<< Subject <<endl;
    }
};