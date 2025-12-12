#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int english;
    int math;
    Student(string name, int roll,int english,int math)
    {
        this->name= name;
        this->roll= roll;
        this->english=english;
        this->math=math;
    }
    void total()
    {
        cout<<"Hello from of "<<name<<"="<<english+math << endl;
    }
};
int main()
{
    Student Sakib("Sakib Ahmed",23,80,95);
    Sakib.total();
    Student Rakib("Rakib Ahmed",23,85,90);
    Rakib.total();
    return 0;
}