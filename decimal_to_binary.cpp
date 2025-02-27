#include <iostream>
using namespace std;

int decimal_to_binary(int num) {
    int ans = 0;
    int pow = 1;

    while(num > 0) {
        int rem = num % 2;
        num = num / 2;
        ans += rem * pow;
        pow = pow * 10;
    }
    return ans;
}
int main() {
    int number;
    cout << "Enter to a decimal number to convert to binary: ";
    cin >> number;
    cout << "In Binary: " << decimal_to_binary(number);
    cout << endl;
}