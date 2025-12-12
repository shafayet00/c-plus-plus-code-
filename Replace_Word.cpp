#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string target="EGYPT";
    string resutl;
    size_t pos=0;
    while((pos=s.find(target,pos)) != string::npos)
    {
        s.replace(pos,target.size()," ");
    }
    cout << s << endl;
    return 0;
}