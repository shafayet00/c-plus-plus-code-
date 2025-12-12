#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string nm;
    int cls;
    int math_marks;
};
bool cmp(Student l,Student r)
{
    if(l.math_marks < r.math_marks)  // marks same roll wise
    {
        return true;
    }
    else if(l.math_marks < r.math_marks)
    {
        return false;
    }
    else
    {
        if(l.cls < r.cls)
        {
            return true;
        }
        else{
            return false;
        }
    }
    // return l.marks < r.marks;
    //return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].math_marks;
    }
    sort(a,a+n,cmp);
    for(int i=0; i<n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].math_marks << endl;
    }
    
    return 0;
}