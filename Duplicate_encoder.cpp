/*
The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.

Examples:
"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))((" 

Notes:
Assertion messages may be unclear about what they display in some languages. If you read "...It Should encode XXX", the "XXX" is the expected result, not the input!


*/

#include<iostream>
#include<unordered_map>
#include<string>
#include<cctype>

using namespace std;


string encodeString(string s) {
    unordered_map<char, int> freqMap;
    string newString = s;
    for(auto ch: newString){
        freqMap[tolower(ch)]++; //converting into lower case before incrementing or counting frequency in map
    }

    string result;
    for(char ch: newString) {
        if(freqMap[ch] > 1) {
            result += ')';
        } else {
            result += '(';
        }
    }

    return result;
}
int main() {
    // Test cases
    cout << encodeString("din") << endl;      // Output: "((("
    cout << encodeString("recede") << endl;   // Output: "()()()"
    cout << encodeString("Success") << endl;  // Output: ")())())"
    cout << encodeString("(( @") << endl;     // Output: "))(("

    return 0;
}