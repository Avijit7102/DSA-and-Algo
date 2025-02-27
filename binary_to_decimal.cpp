#include <iostream>
using namespace std;


int binary_to_decimal(int num) {
    int ans = 0;
    int pow = 1;
    while(num > 0) {
        int rem = num % 10;
        ans += rem * pow;
        pow *= 2;
        num = num / 10;
    }
    return ans;
}
int main() {
    int number;
    cout << "Enter to a binary number to convert to decimal: ";
    cin >> number;
    cout << "In Binary: " << binary_to_decimal(number);
    cout << endl;
    return 0;
}