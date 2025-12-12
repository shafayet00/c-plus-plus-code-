#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey_no;
    string country;
};
int main()
{
    Cricketer*dhoni = new Cricketer;    // dynamic object dhoni
    cout << "Dhoni_Jersey_NO:";
    cin >> dhoni->jersey_no;
    cout << "Dhoni_Country::";
    cin >> dhoni->country;

    Cricketer*kohli = new Cricketer;   // dynamic object kohli
    kohli->jersey_no=dhoni->jersey_no;
    kohli->country=dhoni->country;

    delete dhoni;  // delete dhoni
    dhoni =nullptr;

    cout << "Kohli_Jersey_NO:";
    cout << kohli->jersey_no << endl;
    cout << "Kohli_Country:";
    cout << kohli->country << endl;

    delete kohli;
    dhoni =nullptr;
    return 0;
}