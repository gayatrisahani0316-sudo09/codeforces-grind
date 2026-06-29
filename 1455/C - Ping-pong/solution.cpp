#include <iostream>
using namespace std;
 
void solve(){
    long long x,y;
    if(!(cin>>x>>y)) return;
    
    cout << x-1 << " " << y << endl;
};
 
int main(){
    int t;
    cin>> t;
    while(t--){
        solve();
    }
    return 0;
}