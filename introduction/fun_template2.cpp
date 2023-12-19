#include<iostream>
#include<string>
using namespace std;

template <typename T>
T arrMax(T arr[], int n)
{
    T max = arr[0];
    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    int arr1[] = {1, 3, 9, 2, 4};
    int n1 = sizeof(arr1)/ sizeof(arr1[1]);
    cout << arrMax<int> (arr1, n1) << endl;
    return 0;
}