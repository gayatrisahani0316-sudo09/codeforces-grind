#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve() {
    vector<int> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());
    if (arr[1] != arr[2]) {
        cout << "NO
";
    } else {
        cout << "YES
";
        cout << arr[0] << " " << arr[0] << " " << arr[2] << "
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