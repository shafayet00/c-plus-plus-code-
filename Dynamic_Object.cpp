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
  
  Student*Fahim = new Student(10,5,4.56);
  cout << Fahim->roll << " " << Fahim->cls << " " << Fahim->gpa << endl;
  
  return 0;
}