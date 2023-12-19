#include<iostream>
#include<vector>
using namespace std;

vector<int> getsmaller(int arr[], int n, int k)
{
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<k)
        {
            v.push_back(arr[i]);
        }
    }
    return v;
}
int main()
{
    int arr[] = {13, 24, 2, 45, 57, 4, 46};
    int k = 45;
    int n = sizeof(arr)/ sizeof(arr[0]);
    vector<int> v;
    v = getsmaller(arr, n, k);
    for(auto i = v.begin(); i!= v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}