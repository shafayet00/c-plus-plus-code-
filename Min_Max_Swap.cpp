#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
   
    // cout << min(a,b) << endl;
    // cout << max(a,b) << endl;

    // cout << min({5,6,10,1,100}) << endl;
    // cout << max({52,60,100,2,3}) << endl;

    swap(a,b);
    cout << a << " " << b;

    return 0;
}