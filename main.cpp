#include <iostream>
using namespace std;
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee{
private:
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
};

int main() {
    Employee employee1 = Employee("Peter","Poligon",25);
    Employee employee2 = Employee("Eric","Ditrion",27);
    employee1.IntroduceYourSelf();
    employee2.IntroduceYourSelf();
    employee1.setName("Tom");
    employee1.setAge(31);
    employee1.IntroduceYourSelf();
    cout<<employee1.getName() <<" is " << employee1.getAge() << " years old";
    employee1.setAge(15);
    employee1.IntroduceYourSelf();
    employee1.AskForPromotion();
    employee2.AskForPromotion();
    system("pause>0");
    return 0;
}
