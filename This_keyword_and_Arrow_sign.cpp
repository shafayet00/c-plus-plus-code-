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
int main()
{
  Student Fahim(1,5,5.01);
  Student rakib(10,5,4.46);
  cout << Fahim.roll << " " << Fahim.cls << " " << Fahim.gpa << endl;
  cout << rakib.roll << " " << rakib.cls << " " << rakib.gpa << endl;
  return 0;
}