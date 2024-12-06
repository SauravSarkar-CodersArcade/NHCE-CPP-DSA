#include <iostream>
#include <vector>
using namespace std;
class Person {
public:
    string Name;
    int Age;
    Person(string name, int age){
        Name = name;
        Age = age;
    }
};
int main() {
    vector<Person> people;
    people.push_back(Person("Tapan", 22)); // Just a copy, no type set ? // Extra memory
    people.emplace_back("Upendra", 22); // In place object of type -> Person
    for (auto person : people){
        cout << person.Name << " is " << person.Age << " years old." << endl;
    }
    return 0;
}
