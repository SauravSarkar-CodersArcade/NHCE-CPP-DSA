#include <iostream>
#include <vector>
using namespace std;
vector<int> findCommonElements
(vector<int>& a1, vector<int>& a2, vector<int>& a3){
    // Write your code here
    // find()
    vector<int> common;
    for (int ele : a1) {
        if (find(a2.begin(), a2.end(), ele) != a2.end() &&
            find(a3.begin(), a3.end(), ele) != a3.end()) {
            common.push_back(ele);
        }
    }
    return common;
}
int main() {
    vector<int> a = {1,2,3,4};
    vector<int> b = {4,2,6,7};
    vector<int> c = {7,2,5,4};
    vector<int> result = findCommonElements(a,b,c);
    cout << "Common elements: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
