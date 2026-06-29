#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){
    int n;
    if (!(cin >> n)) return; 
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    bool same = true;
    bool reverse_match = true;
 
    for (int i = 0; i < n; i++){
        if (a[i] != b[i]){
            same = false;
        }
        if (a[i] != b[n - 1 - i]){
            reverse_match = false;
        }
    }
 
    if (same || reverse_match){
        cout << "Bob" << "
";
    } else {
        cout << "Alice" << "
";
    }
};
 
int main(){
 
    int t;
    if (cin >> t){ 
        while (t--){
            solve();
        }
    }
    return 0;
}