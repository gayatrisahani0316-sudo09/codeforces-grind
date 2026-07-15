#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n, k;
    if (!(cin >> n >> k)) return 0;
    while (k > 0) {
        int last_digit = n % 10;
        if (last_digit == 0) {
            n /= 10;
            k--;
        } else {
            int steps_to_zero = min(k, last_digit);
            n -= steps_to_zero;
            k -= steps_to_zero;
        }
    }
    cout << n << endl;
    return 0;
}