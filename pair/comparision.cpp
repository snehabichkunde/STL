#include<iostream>
#include<utility>
#include<string>
using namespace std;

int main()
{
    pair<int, int> P1 (12, 24);
    pair<int, int> P2(3, 7);
    pair<int, int> P3(12, 4);
    pair<int, int> P4(P3);  // copies P3 into P4
    // further changes made in P3 wont be reflected in P4
    P4.first = 7;
    P4.second = 3;
    if(P3==P4)  // checks if both the element are same
        cout << "P3 and P4 are equal" << endl;
    else
        cout << "P3 and P4 are not equal" << endl;
    if(P3>P1)  // only compare the 1st elements
        cout << "P3 is greater than P1" << endl;
    if(P3<P2)    // only compare the 1st elements
        cout << "P2 is greater than P3" << endl;
    return 0;
}

// for even sort it compares the 1st element only
// though by adding our own functionlities we can change it