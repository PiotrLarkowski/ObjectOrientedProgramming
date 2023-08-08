#include <iostream>
using namespace std;
using std::string;

class Employee{
public:
    string Name;
    string Company;
    int Age;
    Employee(string name, string company, int age){
        Age = age;
        Name = name;
        Company = company;
    }
    void IntroduceYourSelf(){
        cout<<"My name is " << Name <<" I'm working for "<<Company<< " and I have " <<Age << " years old"<<endl;
    }
};

int main() {
    Employee employee1 = Employee("Peter","Poligon",25);
    Employee employee2 = Employee("Eric","Ditrion",27);
    employee1.IntroduceYourSelf();
    employee2.IntroduceYourSelf();
    system("pause>0");
    return 0;
}
