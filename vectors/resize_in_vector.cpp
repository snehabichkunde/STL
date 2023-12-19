#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {12, 34, 65, 37, 59};
    v.resize(3);
    // it will resize the vector to 3
    // now v = 12 34 65
    v.resize(5);
    // not the extra 2 elements will have default valaue
    // in case of interger its 0
    // v = 12 34 65 0 0 
    v.resize(8, 100);
    // here the extra 3 elements will have the value mentioned here 
    // i.e. 100 100 100
    // v = 12 34 65 0 0 100 100 100
    for(int x: v)
        cout << x << " ";
    cout << endl;
    return 0;
}