/*
we have given the roll no and the marks of the students
we need to sort it by marks and print rool numbers and marks
*/

#include<iostream>
#include<vector>
#include<utility>
using namespace std;

bool myCom(pair<int, int>p1, pair<int, int>p2)
{
    return (p1.second > p2.second);
}

void sortByMarks(const int roll[], const int marks[], int n)
{
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++)
    {
        v.push_back({roll[i], marks[i]});
    }
    sort(v.begin(), v.end(), myCom);
    for(int i =0; i<n; i++)
    {
        cout << v[i].first << " " << v[i].second;
        cout << endl;
    }
}
int main()
{
    int roll[] = {1001, 1002, 1003, 1004, 1005};
    int marks[] = {23, 45, 2, 57, 84};
    int n = sizeof(roll)/sizeof(roll[0]);
    sortByMarks(roll, marks, n);
    return 0;
}