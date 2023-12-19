/*
in this question we will given two arrays of equal size we need to sort 
the first array and the print the array

example:
1) array1[] = {4, 6, 2, 8};
   array2[] = {s, d, q, y};

   output: q s d y

   explaination: sorreted 1st array is 2 4 6 8 and we need to print the characters
   corresponding to their position
*/

#include<iostream>
#include<utility>
using namespace std;

void printOrder(int arr1[],char arr2[], int n)
{
    pair<int, char> P[n];
    for(int i=0; i<n; i++)
    {
        P[i].first = arr1[i];
        P[i].second = arr2[i];
    }
    sort(P, P+n);
    for(int i=0; i<n; i++)
    {
        cout << P[i].second << " ";
    }
    cout << endl;
    return;
}

int main()
{
    int arr[] = {2,6,3,9,4};
    char arr2[] = {'x', 'w', 'i', '6', 'd'};
    printOrder(arr, arr2, 5);
    return 0;
}