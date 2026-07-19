#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    vector<bool> present(26, false);
    int distinct_count = 0;
 
    for (char c : s) {
        if (!present[c - 'a']) {
            present[c - 'a'] = true;
            distinct_count++;
        }
    }
 
    if (distinct_count % 2 == 0) cout << "CHAT WITH HER!
";
    else cout << "IGNORE HIM!
";
 
    return 0;
}