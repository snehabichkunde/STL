#include<forward_list>
#include<iostream>
using namespace std;

int main()
{
    forward_list<int> l;

    l.assign({1, 2, 3, 4, 3, 1});
    // l = 1 2 3 4 3 1
    l.remove(3);
    // will remove all 3
    // l = 1 2 4 1
    for(int x: l)
    {
        cout << x << " ";
    }
    cout << endl;

    // some other properties of assign()

    forward_list<int> l2;
    l2.assign(l.begin(), l.end());
    // will copy l into l2 from begin till end 
    // l2 = 1 2 4 1
    for(int x: l2)
    {
        cout << x << " ";
    }
    cout << endl;

    forward_list<int> l3;
    l3.assign(5, 10);
    // will initialize the list of size 5 with each element being 10
    // l3 = 10 10 10 10 10
    for(int x: l3)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}