#include <iostream>
using namespace std;
class Employee {
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
};
int main() {
    SoftwareDeveloper s1("Sumit", 22, "TCS", "Java");
    s1.employeeDetails();
    s1.jobDescription();
    return 0;
}
