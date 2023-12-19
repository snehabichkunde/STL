#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 4, 7, 9};
    for(int i=0; i<v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    // v1[i] will not check bounds
    // here v1[10] will crash the program as the size of v1 is only 4
    // but v1.at(10) will check the bounds and then throw an exception
    //cout << v1.at(13) << endl;  
    
    vector<int> v2 (3, 56);  
    // this will initialize array of size 3 with value 56 of each element
    // v2 => {56, 56, 56}
    for(auto it = v2.begin(); it!= v2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    
    // reverse itrator
    for(auto it = v1.rbegin(); it != v1.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // coping an array in vector
    int arr[3] = {12, 46, 74};
    // passing the begging address and the end address
    // it will copy all the elements from 1st address element to the last one 
    vector<int> v3 (arr, arr+3);
    for(int i=0; i<v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    return 0;
}