#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    int lucky_count = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            lucky_count++;
        }
        n /= 10;
    }
    auto is_lucky = [](int num) {
        if (num == 0) return false;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) return false;
            num /= 10;
        }
        return true;
    };
    if (is_lucky(lucky_count)) {
        cout << "YES
";
    } else {
        cout << "NO
";
    }
    return 0;
}