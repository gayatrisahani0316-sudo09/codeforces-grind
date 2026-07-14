#include <iostream>
using namespace std;
 
int main() {
    int n;
    if (!(cin >> n)) return 0;
    int is_hard = 0;
    for (int i = 0; i < n; ++i) {
        int opinion;
        cin >> opinion;
        is_hard |= opinion;
    }
    if (is_hard) {
        cout << "HARD
";
    } else {
        cout << "EASY
";
    }
    return 0;
}