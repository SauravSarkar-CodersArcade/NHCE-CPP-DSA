#include <iostream>
using namespace std;
class Employee {
    // this pointer refers to the current class attributes
public:
    // Attributes
    string Name;
    int Age;
    string Company;
    Employee(string Name, int Age, string Company){
        this->Name = Name;
        this->Age = Age;
        this->Company = Company;
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
