#include <bits/stdc++.h>
using namespace std;
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m)
{
    set<int> set1(arr1.begin(), arr1.end()); // 1 2 3 4 5
    set<int> set2(arr2.begin(), arr2.end()); // 2 4 6 8
    set<int> intersectionSet;
    for (int num : set1){
        if (set2.find(num) != set2.end()){
            intersectionSet.insert(num);
        }
    }
    set<int> unionSet(set1.begin(), set1.end());
    unionSet.insert(set2.begin(), set2.end());
    int a, b;
    a = intersectionSet.size();
    b = unionSet.size();
    return {a,b};
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 4, 6, 8};
    int n = arr1.size();
    int m = arr2.size();

    pair<int, int> result = findSimilarity(arr1, arr2, n, m);

    cout << "Intersection size: " << result.first << endl;
    cout << "Union size: " << result.second << endl;

    return 0;
}
