#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v = {10,20,30,40};
    cout << v.front() << endl;
    v.front() = 100;
    // now the vector is v = 100, 20, 30, 40
    for(auto it= v.begin(); it!= v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.pop_back();
    cout << v.back() << endl;
    // frount() and back() return itrator to the element

    auto it = v.insert(v.begin(), 60);
    // it insert 100 at begine and returns the address of the element with was inserted
    // v = 60 100 10 20 30 40
    v.insert(v.begin()+2, 200);
    // v = 60 100 200 20 30
    for(auto it= v.begin(); it!= v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    v.insert(v.begin(), 3, 76);
    // it will add 76 in the begining 3 times
    // v = 76 76 76 60 100 200 10 20 30 40

    // copying one vector to another
    vector<int> v2;
    v2.insert(v2.begin(), v.begin(), v.begin()+3);
    // it will insert the element from v.begin() to v.begin()+3
    // but not v.begin()+3
    for(auto it= v2.begin(); it!= v2.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
