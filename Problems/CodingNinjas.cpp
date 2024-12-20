#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &arr, int n)
{
    // ARR = [“coding”, ”codezen”, ”codingninja”, ”coders”]
    string ans = "";
    for (int i = 0; i < arr[0].length(); ++i) {
        char ch = arr[0][i]; // 'c'
        bool match = true;
        for (int j = 1; j < n; ++j) {
            // No match found
            if (arr[j].size() < i || ch != arr[j][i]){
                match = false;
                break;
            }
        }
        if (match == false){
            break;
        } else{
            ans.push_back(ch);
        }
    }
    return ans;
}
vector<vector<int>> pairSum(vector<int> &arr, int s){
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i+1; j < arr.size(); ++j) {
            if (arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int makeBeautiful(string str) {
    int n = str.size();
    // Generate the two target patterns
    string pattern1 = "";
    string pattern2 = "";
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0){
            pattern1 += '0';
            pattern2 += '1';
        } else{
            pattern1 += '1';
            pattern2 += '0';
        }
    }
    int m1 = 0, m2 = 0;
    for (int i = 0; i < n; ++i) {
        if (str[i] != pattern1[i]){
            m1++;
        }
        if(str[i] != pattern2[i]){
            m2++;
        }
    }
    return min(m1,m2);
}
int main() {
    vector<int> arr = {2,4,3,6,1,5}; // 3 4 1 6 2 5 // 1 6 2 5 3 4
    int s = 7;
    vector<vector<int>> result = pairSum(arr,s);
    for (const vector<int> &pair : result){
        cout << pair[0] << " " << pair[1] << endl;
    }

    return 0;
}
