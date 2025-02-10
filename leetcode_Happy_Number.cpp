#include <iostream>
#include <set>
using namespace std;

bool happy_number(int n) {
    set<int> s; // Set to detect cycles
    while (n != 1 && s.find(n) == s.end()) {
        s.insert(n);
        int sum = 0;

        while (n > 0) { // Compute sum of squares of digits
            int last = n % 10;
            sum += last * last;
            n /= 10;
        }

        n = sum; // Update n with the new sum
        cout << "sum : " << sum << endl;
    }
    
    return (n == 1); // Return true if n becomes 1, false otherwise
}

int main() {
    int n = 7;
    
    if (happy_number(n)) {
        cout << n << " is a Happy Number!" << endl;
    } else {
        cout << n << " is NOT a Happy Number!" << endl;
    }

    return 0;
}
