#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, m;
    if (!(cin >> n >> m)) return 0;
 
    if (n > m + 1 || m > 2 * n + 2) {
        cout << -1 << endl;
        return 0;
    }
    if (n == m + 1) {
        cout << "0";
        n--;
    }
    while (n > 0) {
        if(m>n && m>=2){
            cout << "11";
            m -= 2;
        } else if (m > 0) {
            cout << "1";
            m -= 1;
        }
 
        cout << "0";
        n--;
 
    }
 
    while (m > 0) {
        cout << "1";
        m--;
    }
 
    cout << endl;
    return 0;
}