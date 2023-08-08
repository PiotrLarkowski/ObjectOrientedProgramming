#include <iostream>
using namespace std;
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
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
int main() {
    Developer employee1 = Developer("Peter","Poligon",25,"C++");
    Teacher employee2 = Teacher("Eric","Ditrion",27,"History");
    employee1.IntroduceYourSelf();
    employee2.IntroduceYourSelf();
    employee1.setName("Tom");
    employee1.setAge(31);
    employee1.IntroduceYourSelf();
    cout<<employee1.getName() <<" is " << employee1.getAge() << " years old";
    employee1.setAge(15);
    employee1.IntroduceYourSelf();
    employee1.FixBug();
    employee1.FixBug();
    employee1.FixBug();
    employee1.AskForPromotion();
    employee2.AskForPromotion();

    employee1.Work();
    employee2.Work();

    Employee *e1 = &employee1;
    Employee *e2 = &employee2;

    e1->Work();
    e2->Work();

    system("pause>0");
    return 0;
}
