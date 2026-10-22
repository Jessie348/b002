#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x;
    
    int max_val = -1000000000;
    int min_val = 1000000000;
    int ge_zero_count = 0;
    int lt_zero_count = 0;

    while (cin >> x && x != -9999) {
        max_val = max(max_val, x);
        min_val = min(min_val, x);

        if (x >= 0) {
            ge_zero_count++;
        } else {
            lt_zero_count++;
        }
    }

    cout << max_val << "," << min_val << "," << ge_zero_count << "," << lt_zero_count << "\n";

    return 0;
}