#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]!=0) //print without zero
        {
            cout << a[i] << " ";
        }
    }
    for(int i=0; i<n; i++)  // print without zero
    {
        if(a[i] == 0)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
//     int A[N];
//     for(int i = 0; i < N; i++) {
//         cin >> A[i];
//     }
//     int count = 0; 
//     for(int i = 0; i < N; i++) {
//         if(A[i] != 0) {
//             A[count++] = A[i];
//         }
//     }
//     while(count < N) {
//         A[count++] = 0;
//     }   
//     for(int i = 0; i < N; i++) {
//         cout << A[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
