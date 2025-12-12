#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    int math_marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].math_marks;
    }
    Student mn;
    mn.math_marks= INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(a[i].math_marks < mn.math_marks)  // find min number
        {
            mn =a[i];
        }
    }
    cout << mn.nm << " " << mn.cls << " " << mn.math_marks << endl;
    return 0;
}