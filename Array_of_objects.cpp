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
        cin.ignore();
        getline(cin, a[i].nm);
        cin >> a[i].cls >> a[i].math_marks;
        cin.ignore();
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i].nm << " " <<  a[i].cls << " " <<  a[i].math_marks << endl;
    }
    return 0;
}