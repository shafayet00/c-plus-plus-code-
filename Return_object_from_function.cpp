#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll; //(*this.roll)
        this->cls = cls;
        this->gpa = gpa;
    }
};
Student info()
{
    Student Fahim(1,5,5.01);
    return Fahim;
}
int main()
{
  
  Student obj =info();
  cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
  
  return 0;
}