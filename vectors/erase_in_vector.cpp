#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {30, 24, 65, 72};
    v.erase(v.begin());
    // simply erase the 1st element
    // v = 24 65 72
    for(int x: v)
    {
        cout << x << " ";
    }
    cout << endl;
    v.erase(v.begin(), v.end()-1);
    // it will delete everything from v.begin() to v.end()-1 but not 
    // v.end() - 1 which is the last element
    // v = 72
    for(int x: v)
    {
        cout << x << " ";
    }
    cout << endl;

    if(v.empty())
        cout << "vector is empty" << endl;
    else{
        cout << "vector is not empty" << endl;
    }
    // empprty() returns true is the vector is empty
    v.clear();
    // clear() makes the array empty
    if(v.empty())
    {
        cout << "vector is empty" << endl;
    }
    return 0;
}