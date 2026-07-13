#include <iostream>
#include <algorithm>
using namespace std;
 
void solve() {
    int x, y, z;
    cin >> x >> y >> z;
 
    if (x == y && x >= z) {
        cout << "YES
" << x << " " << z << " " << z << "
";
    } 
    else if (x == z && x >= y) {
        cout << "YES
" << x << " " << y << " " << y << "
";
    } 
    else if (y == z && y >= x) {
        cout << "YES
" << x << " " << x << " " << y << "
";
    } 
    else {
        cout << "NO
";
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}