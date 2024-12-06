#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    void solve(string digits, string output, int index, vector<string> & ans, string mapping[]){
        // Base case
        if (index >= digits.length()){
            ans.push_back(output);
            return;
        }
        int number = digits[index] - '0'; // '2' - '0'; = 2
        string value = mapping[number];  // mapping[2] = "abc"
        for (int i = 0; i < value.length(); ++i) {
            output.push_back(value[i]);
            solve(digits,output,index+1,ans,mapping); // Till 'a' doesn't end
            // Because we want to go to the next character, we remove 'a'
            // Backtrack
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0){
            return ans;
        }
        string output;
        int index = 0;
        string mapping[10] =
                {"","","abc","def","ghi","jkl","mno","pqrs",
                 "tuv","wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

int main() {
    return 0;
}
