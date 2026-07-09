#include <iostream>
using namespace std;
 
void solve() {
    int n, x;
    cin >> n >> x;
    if (n <= 2) {
        cout << 1 << "
";
    } else {
        int floor = 1 + (n - 2 + x - 1) / x;
        cout << floor << "
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