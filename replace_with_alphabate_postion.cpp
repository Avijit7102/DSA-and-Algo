#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s = "The sunset sets at twelve o' clock.";
    stringstream ss;

    for(int i = 0; i < s.length(); i++) {
        if(isalpha(s[i])) {
            char ch = tolower(s[i]);
            ss << ch - 'a' + 1 << " ";
        }
    }

    string result = ss.str(); // coverting stream to string
    if(!result.empty()){
        result.pop_back();
    }
    
    cout << result << endl;
    return 0;
}