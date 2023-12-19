#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "size = " << v.size() << " capacity = " << v.capacity() << endl;
    // 0 0
    v.emplace_back(12);
    cout << "size = " << v.size() << " capacity = " << v.capacity() << endl;
    // 1 1
    v.emplace_back(25);
    cout << "size = " << v.size() << " capacity = " << v.capacity() << endl;
    // 2 2
    v.emplace_back(10);
    cout << "size = " << v.size() << " capacity = " << v.capacity() << endl;
    // 3 4
    v.emplace_back(100);
    cout << "size = " << v.size() << " capacity = " << v.capacity() << endl;
    // 4 4
    v.emplace_back(27);
    cout << "size = " << v.size() << " capacity = " << v.capacity() << endl;
    // 5 8
    return 0;
}

// every time space fulls, it becomes double it's size