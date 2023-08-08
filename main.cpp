#include <iostream>
#include "Employee.h"
#include "Developer.h"
#include "Teacher.h"

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
