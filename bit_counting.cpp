// Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. You can guarantee that input is non-negative.

// Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case

#include <iostream>
using namespace std;


int count_one(int num){
    int count = 0;

    while(num > 0){
        if(num % 2 == 1){
            count++;
        }
        num = num / 2;
    }
    return count;
}
int main() {
    int number;
    cout << "Enter a positive number: ";
    cin >> number;

    int result = count_one(number);
    cout << "Number of 1: " << result << endl;

    return 0;
}