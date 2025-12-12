#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello World";
    // cout << *s.begin() << endl;
    // cout << *(s.end()-1) << endl;
    for(auto it = s.begin(); it<s.end(); it++) //string::iterator
    {
        cout << *it << endl;
    }
    return 0;
}