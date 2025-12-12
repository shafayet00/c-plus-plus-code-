#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int left=0;
    int right=n-1;
    bool ispalindrom = true;
    while(left < right)
    {
        if(a[left] != a[right])
        {
            ispalindrom=false;
            break;
        }
        left++;
        right--;
    }
    if (ispalindrom) cout << "YES";
    else cout << "NO"; 
    return 0;
}