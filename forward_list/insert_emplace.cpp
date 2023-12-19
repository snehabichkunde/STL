// insert_after() => this function insert element at a given position
// emplace_after => same work as insert_after() but a bit modified, elements are directly made without copy operation

#include<forward_list>
#include<iostream>
using namespace std;

int main()
{
    forward_list<int> l = {12, 23, 45};
    // inserting the element after the 1st element
    auto it = l.insert_after(l.begin(), 10);
    // l = 12 10 23 45
    // this will return itrator to 10
    it = l.insert_after(it , 14);
    // l = 12 10 14 23 45


    it = l.insert_after(it, {1, 3, 7});
    // will return it to 7
    // l = 12 10 14 1 3 7 23 45 
    for(int x: l)
    {
        cout << x << " ";
    }
    cout << endl; 
    it = l.insert_after(it, 28);
    for(int x: l)
    {
        cout << x << " ";
    }
    cout << endl;
    it = l.erase_after(it);
    for(int x: l)
    {
        cout << x << " ";
    }
    cout << endl;
   it = l.erase_after(l.begin(), l.end());
   for(int x: l)
    {
        cout << x << " ";
    }
    cout << endl;
    // l = 12
    l.clear();
    // make list empty

   if(l.empty()){
    cout << "the  list is empty" << endl;
   }

   return 0;

}