#include <iostream>
#include <vector>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<int> ans;
    int place = 1; 
    while (n > 0) {
        int rem = n % 10;
        if (rem != 0) {
            ans.push_back(rem * place); 
        }    
        n /= 10;
        place *= 10; 
    }
    cout << ans.size() << "
";
    for (size_t i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}