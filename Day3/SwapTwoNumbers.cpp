#include <iostream>
using namespace std;
void swapNumbers(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapLetters(char * a, char * b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
template <typename T>
void swapAnything(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 10;
    int b = 20;
    cout << "Before: a=" << a << " b=" << b << endl;
    swapAnything(a,b);
    cout << "After: a=" << a << " b=" << b << endl;

    char c = 'c';
    char d = 'd';
    cout << "Before: c=" << c << " d=" << d << endl;
    swapAnything(c,d);
    cout << "Before: c=" << c << " d=" << d << endl;
    return 0;
}
