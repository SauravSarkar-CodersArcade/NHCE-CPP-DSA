#include <iostream>
using namespace std;
class AbstractEmployee {
    virtual void checkPromotion() = 0; // Interface // Pure Virtual Function
};
class Employee : AbstractEmployee{
public:
    string Name;
    int Age;
    string Company;
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    }
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
    virtual void work(){
        cout << Name << " attends meetings, sends emails, checks drafts etc." << endl;
    }
    void checkPromotion(){
        if (Age >= 30){
            cout << Name << " is promoted." << endl;
        } else{
            cout << Name << " is not promoted." << endl;
        }
    }
    ~Employee(){
        cout << "Object destroyed." << endl;
    }
};
class SoftwareDeveloper : public Employee {
public:
    string FavProLang;
    SoftwareDeveloper(string name, int age, string company, string favProLang)
            : Employee(name, age, company)
    {
        FavProLang = favProLang;
    }
    void jobDescription(){
        cout << Name << " develops apps using " << FavProLang << endl;
    }
//    void work() override {
//        cout << Name << " fixes bugs, builds apps using " << FavProLang << endl;
//    }
};
class Lecturer : public Employee {
public:
    string Subject;
    Lecturer(string name, int age, string company, string subject)
    : Employee(name, age, company)
    {
        Subject = subject;
    }
    void designation(){
        cout << Name << " teaches " << Subject << endl;
    }
//    void work() override {
//        cout << Name << " conducts lectures, seminars on " << Subject << endl;
//    }
};
int main() {
    SoftwareDeveloper s1("Sumit", 22, "TCS", "Java");
    Lecturer l1("Nethra", 38, "NHCE", "DAA");
//    s1.employeeDetails();
//    s1.jobDescription();
//    s1.work();
//    l1.employeeDetails();
//    l1.designation();
//    l1.work();
//    s1.checkPromotion();
//    l1.checkPromotion();
    Employee* e1 = &s1;
    Employee* e2 = &l1;
    e1->work();
    e2->work();
    return 0;
}
