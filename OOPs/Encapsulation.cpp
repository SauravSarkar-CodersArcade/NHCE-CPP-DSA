#include <iostream>
using namespace std;
class Employee {
private:
    string Name;
    int Age;
    string Company;
public:
    // setters
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        Age = age;
    }
    void setCompany(string company){
        Company = company;
    }
    // getters
    string  getName(){
        return Name;
    }
    int getAge(){
        return Age;
    }
    string  getCompany(){
        return Company;
    }

};
int main() {
    Employee e1;
    e1.setName("Saurav");
    e1.setAge(36);
    e1.setCompany("Tri Pillar");
    cout << e1.getName() << " " << e1.getAge() << " " << e1.getCompany() << endl;
    return 0;
}
