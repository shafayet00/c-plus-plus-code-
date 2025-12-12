#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,r=0;
        cin >> n;
        int a1[n];
        for(int i=0; i<n; i++)
        {
            cin >> a1[i];
            r+=(a1[i]+1)/2;
        }
        cout << r << endl;        
    }
    return 0;
}