#include<bits/stdc++.h>
using namespace std;

int main() {

   string s = "Striver";
   int len = s.size(); // The size() function returns the length of the string s. In this case, the string "Striver" has 8 characters, so len will be assigned the value 8
   
   cout << s[len-1];  // len-1 gives the index of the last character. Since the index starts from 0, the last character in a string of length 8 is at index 7
   cout<< endl;
   cout<< s[len-2];

    return 0;
}