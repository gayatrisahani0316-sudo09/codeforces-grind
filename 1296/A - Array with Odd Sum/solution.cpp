#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int sum = 0;
    bool has_odd = false;
    bool has_even = false;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        sum += val;
        if (val % 2 != 0) {
            has_odd = true;
        } else {
            has_even = true;
        }
    }
    if (sum % 2 != 0 || (has_odd && has_even)) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}