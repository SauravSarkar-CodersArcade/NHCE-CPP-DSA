#include <iostream>
using namespace std;
class Demo {
    double d; // 8
    int i; // 4
    short s; // 2
    char c; // 1
};
int main() {
    Demo obj;
    cout << "Size of the class is " << sizeof(obj) << " bytes.";
    return 0;
}
