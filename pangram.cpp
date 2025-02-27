#include <iostream>
#include <set>
using namespace std;

int main() {
    string sentence = "The quick brown fox jumps over the lazy dog";
    set<string>s;
    for(int i = 0; i < sentence.length(); i++) {
        //s.insert(sentence[i]);
        //char c = sentence[i];
        //s.insert(string(1,c)); // convert char to string
        s.insert(string(1, sentence[i]));
    }

    int size = s.size();
    cout << size << endl;
    return 0;
}