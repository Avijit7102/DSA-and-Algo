#include <iostream>
using namespace std;

int digits_sum(int num) {
    int sum = 0;
    while (num > 0) {
        int last_digit = num % 10;
        num = num / 10;
        sum += last_digit;
    }
    return sum;
    
}
int main() {
    int num = 431;
    cout << "Sum of the digits of " << num << " is: " << digits_sum(num) << endl;
    return 0;
}