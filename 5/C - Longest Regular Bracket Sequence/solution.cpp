#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    string s;
    if (!(cin >> s)) return 0;
    int n = s.length();
    vector<int> dp(n, 0);
    int max_len = 0;
    int count = 1;
    for (int i = 0; i < n; ++i) {
        if (s[i] == ')') {
            int match_idx = i - 1 - dp[i - 1];
            if (match_idx >= 0 && s[match_idx] == '(') {
                dp[i] = dp[i - 1] + 2;
                if (match_idx > 0) {
                    dp[i] += dp[match_idx - 1];
                }
                if (dp[i] > max_len) {
                    max_len = dp[i];
                    count = 1;
                } else if (dp[i] == max_len && max_len > 0) {
                    count++;
                }
            }
        }
    }
    cout << max_len << " " << count << "
";
    return 0;
}