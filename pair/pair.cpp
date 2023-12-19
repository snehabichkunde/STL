#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int, int> P1 (2, 6);
    pair<int , string> P2 (10, "Sneha");
    pair<char, char> P3;
    pair<int, int> P4;
    cout << P1.first << " " << P1.second << endl;
    cout << P2.first << " " << P2.second << endl;
    cout << P3.first << " " << P3.second << endl;  // empty by default
    cout << P4.first << " " << P4.second << endl;  // 0 by default
    P4.first = 3;
    P4.second = 5;
    cout << P4.first << " " << P4.second << endl;
    return 0;
}