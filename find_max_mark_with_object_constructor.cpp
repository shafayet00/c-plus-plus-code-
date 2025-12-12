#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    string section;
    int math_mark;
    int cls;

    Student() {} // empty constructor

    Student(string name, int roll, string section, int math_mark, int cls) {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_mark = math_mark;
        this->cls = cls;
    }
};

int main() {
    int n;
    cin >> n;

    Student students[n];  // array of Student

    for (int i = 0; i < n; i++) {
        string name, section;
        int roll, cls, math_mark;

        cin >> name >> roll >> section >> math_mark >> cls;

        students[i] = Student(name, roll, section, math_mark, cls);
    }

    Student highest = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].math_mark > highest.math_mark) {
            highest = students[i];
        }
    }

    cout << "Name: " << highest.name << endl;
    cout << "Marks: " << highest.math_mark << endl;

    return 0;
}
