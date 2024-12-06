#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    try {
        if (a == 1) {
            throw 1; // Integer
        } else if (a == 2) {
            throw 'a'; // Character
        } else if (a == 3) {
            throw 2.5; // Double
        } else{
            cerr << "Error: Invalid Input.\n";
        }
    } catch (int a) {
        cout << "Integer Exception Caught\n";
    } catch (char a) {
        cout << "Character Exception Caught\n";
    } catch (double a) {
        cout << "Double Exception Caught\n";
    } // Destructor
    return 0;
}
