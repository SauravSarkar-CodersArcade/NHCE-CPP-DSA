#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    int Age;
    string Company;
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    }
};
int main() {
    // DRY -> Don't repeat yourself
    Employee e1; // Syntax 1
    e1.Name = "Sumit";
    e1.Age = 22;
    e1.Company = "Accenture";
    e1.employeeDetails();

    Employee e2 = Employee(); // Syntax 2
    e2.Name = "Priyanka";
    e2.Age = 22;
    e2.Company = "Wipro";
    e2.employeeDetails();
    return 0;
}
