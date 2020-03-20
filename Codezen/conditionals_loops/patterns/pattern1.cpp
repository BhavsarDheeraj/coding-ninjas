#include <iostream>
using namespace std;

int trailingZeros(int n) { 
    int count = 0;

    for (int i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        int n;
        cin >> n;
        cout <<trailingZeros(n);
        t--;
    }
    return 0;
}