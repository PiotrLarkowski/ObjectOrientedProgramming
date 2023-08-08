#include "Employee.h"

using namespace std;
using std::string;


class Developer:public Employee{
public:
    string FavouriteLanguage;
    Developer(string name, string company, int age,string favouriteLanguage) : Employee(name, company, age) {
        FavouriteLanguage = favouriteLanguage;
    }
    void FixBug(){
        cout<<Name<<" is fixing bugs using " << FavouriteLanguage<<endl;
    }
    void Work(){
        cout<<Name<<" writing code in "<< FavouriteLanguage <<endl;
    }
};

