#include<bits/stdc++.h>
using namespace std;
int*p;
void fun()
{
    int*x=new int; //dynamic memory
    *x=10;
    p=x;
    cout << "Fun->" << *p << endl;
    return;
}
int main()
{
    fun();
    cout << "main->" << *p << endl;
    return 0; 
}