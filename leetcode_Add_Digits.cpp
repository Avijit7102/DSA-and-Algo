#include <iostream>
using namespace std;

int digits_sum(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            int last_digit = num % 10;
            num = num / 10;
            sum += last_digit;
        }
        num = sum;
    }
    
    return num;
    
}
int main() {
    int num = 38;
    cout << "Sum of the digits of " << num << " is: " << digits_sum(num) << endl;
    return 0;
}