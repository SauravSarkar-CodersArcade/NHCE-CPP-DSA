#include <iostream>
#include <vector> // Dynamic Array
using namespace std;
int main() {
    vector<int> numbers = {1,2,3,4,5};
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    // Initialization with size
    vector<int> vector1(5); // 5 elements all equal to 0
    vector<int> vector2(5,10); // 5 elements all equal to 10
    // Initialisation from array
    int arr[] = {1,2,3};
    vector<int> vector3(arr, arr+3);
    for (auto x : vector3){
        cout << x << " ";
    }
    cout << endl;
    // Important Functions :
    vector3.push_back(4);
    vector3.push_back(5);
    for (auto x : vector3){
        cout << x << " ";
    }
    cout << endl;
    vector3.pop_back();
    for (auto x : vector3){
        cout << x << " ";
    }
    cout << endl;
    cout << "Size of the vector: " << vector3.size() << endl;
    vector3.resize(10);
    for (auto x : vector3){
        cout << x << " ";
    }
    cout << endl;
    vector3.resize(15,100);
    for (auto x : vector3){
        cout << x << " ";
    }
    cout << endl;
    // vector3.clear(); Erase all data
    vector3.insert(vector3.begin(), 0);
    for (auto x : vector3){
        cout << x << " ";
    }
    cout << endl;
    vector3.insert(vector3.begin() + 1, 3, 7);
    for (auto x : vector3){
        cout << x << " ";
    }
    cout << endl;
    // Erase
    vector3.erase(vector3.begin());
    for (auto x : vector3){
        cout << x << " ";
    }
    cout << endl;
    vector3.erase(vector3.begin(), vector3.begin() + 2); // Removes first two elements
    for (auto x : vector3){
        cout << x << " ";
    }
    cout << endl;
    cout << "First: " << vector3.front() << endl;
    cout << "Last: " << vector3.back() << endl;
    // Vector is a dynamic array -> underlying array -> it is a pointer
    // data() -> It returns a pointer to the underlying array
    // which points to the address of the first element of the array
    int * p = vector3.data();
    cout << "First Element: " << *p << endl;

    // Swap function
    vector<int> v1 = {9,8,7};
    vector<int> v2 = {6,5,4};

    v1.swap(v2);
    for (auto x : v1){
        cout << x << " ";
    }
    cout << endl;
    for (auto x : v2){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
