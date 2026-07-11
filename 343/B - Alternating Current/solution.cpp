#include <iostream>
#include <stack>
using namespace std;
 
int main() {
    stack<char> st;
    char c;
    while (cin >> c) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    if (st.empty()) {
        cout << "Yes
";
    } else {
        cout << "No
";
    }
 
    return 0;
}