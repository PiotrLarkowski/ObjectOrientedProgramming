#include <string>
#include <iostream>
#include "AbstractEmployee.h"

using namespace std;
using std::string;
class Employee:AbstractEmployee{
protected:
    string Name;
    string Company;
    int Age;
public:
    Employee(string name, string company, int age){
        Age = age;
        Name = name;
        Company = company;
    }
    void IntroduceYourSelf(){
        cout<<"My name is " << Name <<" I'm working for "<<Company<< " and I have " <<Age << " years old"<<endl;
    }

    const string &getName() const {
        return Name;
    }

    void setName(const string &name) {
        Name = name;
    }

    const string &getCompany() const {
        return Company;
    }

    void setCompany(const string &company) {
        Company = company;
    }

    int getAge() const {
        return Age;
    }

    void setAge(int age) {
        if(age >=18) {
            Age = age;
        }
    }
    void AskForPromotion(){
        if(Age>30){
            cout<<Name<<" you got promotion"<<endl;
        }else{
            cout<<Name<<" you can't get promotion"<<endl;
        }
    }
    virtual void Work(){
        cout<<Name<<" is checking email, task backlog, preforming tasks"<<endl;
    }
};


