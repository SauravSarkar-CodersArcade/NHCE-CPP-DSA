#include <iostream>
using namespace std;
class Addition {
public:
    static void add(int a, int b){
        cout << a + b << endl;
    }
    static void add(int a, int b, int c){
        cout << a + b + c << endl;
    }
    static void add(float a, float b){
        cout << "Float Function Called" << endl;
        cout << a + b << endl;
    }
    static void add(double a, double b){
        cout << "Double Function Called" << endl;
        cout << a + b << endl;
    }

};
int main() {
    Addition::add(1,2);
    Addition::add(1,2,3);
    Addition::add(1.3f,2.5f);
    Addition::add(1.7,2.6);
    return 0;
}
