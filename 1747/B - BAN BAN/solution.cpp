#include <iostream>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    int k = (n + 1) / 2;
    cout << k << endl;
    
    int left = 1;     
    int right = 3 * n; 
    
    while (left < right) {
        cout << left << " " << right << endl;
        left += 3;  
        right -= 3;  
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