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
int main() {
    Employee e1("Sumit", 22, "Accenture");
    Employee e2 = Employee("Priyanka", 22, "Wipro");
    e1.employeeDetails();
    e2.employeeDetails();
    return 0;
}
