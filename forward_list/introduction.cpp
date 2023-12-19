// forward_list is simply singly linked list
#include<forward_list>
#include<iostream>
using namespace std;

int main()
{
    // initializaing the list
    forward_list<int> l = {1, 2, 3, 4};

    //pushing element first
    l.push_front(9);
    // l = 9 1 2 3 4
    l.push_front(14);
    // l = 14 9 1 2 3 4
    for(auto i = l.begin(); i!= l.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    l.pop_front();
    for(int i: l)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}