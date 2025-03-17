/* Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.*/

/*

#include <string>
#include<sstream>

using namespace std;

std::string createPhoneNumber(const int arr [10]){
  //your code here
  stringstream ss;
  
  ss << "(" << arr[0] << arr[1] << arr[2] << ") " << arr[3] << arr[4] << arr[5] << "-" << arr[6] << arr[7] << arr[8] << arr[9];
    
  string result = ss.str();
  
  return result;
  
  
}
*/

#include<iostream>
#include<sstream>

using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    stringstream ss;

    ss << "(" << arr[0] << arr[1] << arr[2] << ") " << arr[3] << arr[4] << arr[5] << "-" << arr[6] << arr[7] << arr[8] << arr[9];
    
    string result = ss.str();

    cout << "phone number is : " << result << endl;
    
    return 0;
}