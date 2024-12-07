#include <bits/stdc++.h>
using namespace std;
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for (char ch : s) {
        if (ch == ')'){
            char top = st.top();
            st.pop();
            bool isRedundant = true;
            // Check the inside brackets
            while (!st.empty() && top != '('){
                if (top == '+' || top == '-' || top == '*' || top == '/'){
                    isRedundant= false;
                }
                top = st.top();
                st.pop();
            }
            // If no operators are found, brackets are redundant
            if (isRedundant){
                return true;
            } else{
                // Push the current character to the stack
                st.push(ch);
            }
        }
    }
    // If no redundant brackets are found
    return false;
}
int main() {
    return 0;
}
