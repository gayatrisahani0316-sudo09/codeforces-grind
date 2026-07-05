#include<iostream>
#include<math.h>
using namespace std;
 
void solve(){
    long long l,r;
        cin >> l >> r;
        if(2*l <= r){
            cout << l << " " << 2*l << endl;
        }
        else{
            cout << -1 << " " << -1 << endl;
        }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
        }
    return 0;
}