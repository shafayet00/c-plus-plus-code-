#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello";
    string s1="world";
    s+=s1;           //add two string
    // s.append(s1); 
    //s.push_back('A'); //add character last
    //s.pop_back(); //remove last character
    //s[1]='u';  // change character
    //s.assign(s1);
    //s.erase(3,2);   // remove start 3 index and remove 2 index value
    //s.replace(5,5,"Bangladesh");
    s.insert(5,"shakib");
    cout << s << endl;
    return 0;
}