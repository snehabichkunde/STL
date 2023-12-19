#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::iterator i = v.begin();
    cout << *i << " "; 
    i++;
    cout << *i << " ";
    i = next(i);
    cout << *i << " ";
    while(i != v.end())
    {
        cout << *i << " "; // Move the iterator increment inside the loop
        i++;
    }
    cout << endl; 
    return 0;
}
