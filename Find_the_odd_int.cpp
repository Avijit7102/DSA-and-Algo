/*
Given an array of integers, find the one that appears an odd number of times.

There will always be only one integer that appears an odd number of times.

Examples
[7] should return 7, because it occurs 1 time (which is odd).
[0] should return 0, because it occurs 1 time (which is odd).
[1,1,2] should return 2, because it occurs 1 time (which is odd).
[0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
[1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).

*/

#include <iostream>
#include <unordered_map>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 3, 3, 3, 2, 2, 1};
    unordered_map<int, int> freq;
    for(auto nums : arr) {
        freq[nums]++;
    }

    unordered_map<int, int>:: iterator it; // iterator for traverse through the map.
    for(it = freq.begin(); it != freq.end(); it++) {
        if(it->second % 2 != 0) { // checking for odd count
            cout << it->first << endl; // return the number
        }
    }


    return 0;
}