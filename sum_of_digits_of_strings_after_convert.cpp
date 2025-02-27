#include <iostream>
#include <String>
using namespace std;

int main() {

    string s = "zbax";
    string numerical_value = "";
    int dec_value = 0;
    for(auto c: s) {
        int value = c - 'a' + 1;
        numerical_value += to_string(value);
    }
    //int dec_value = stoi(numerical_value);
    for(auto digit: numerical_value) {
        dec_value += digit - '0';
    }
    int k = 2;

    while(k > 0) {
        int sum = 0;
        while (dec_value > 0) {
            int last_digit = dec_value % 10;
            dec_value = dec_value / 10;
            sum += last_digit;
        }
        k--;
        dec_value = sum;
        cout << sum << endl;
    }

}