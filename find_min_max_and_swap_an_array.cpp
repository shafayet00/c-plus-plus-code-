// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         cin >> a[i];
//     }
//     int mn=a[0],mx=a[0];
//     int mn_idx=0,mx_idx=0;
//     for(int i=0; i<n; i++)
//     {
//         if(min(mn,a[i])==a[i])
//         {
//             mn = a[i];
//             mn_idx=i;
//         }
//         if(max(mx,a[i])==a[i])
//         {
//             mx=a[i];
//             mx_idx=i;
//         }    
//     }
//     swap(a[mn_idx],a[mx_idx]);
//     for(int i=0; i<n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>   // for min_element and max_element
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    // find pointers to min and max elements
    int* minPtr = min_element(a, a + n);
    int* maxPtr = max_element(a, a + n);
    // swap min and max
    swap(*minPtr, *maxPtr);

    // print the array
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
