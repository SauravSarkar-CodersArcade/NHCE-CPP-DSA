#include <iostream>
using namespace std;

int main() {
    string str = "98212576"; // 98765221
    sort(str.begin(), str.end(), greater<>());
    cout << str;
    return 0;
}
