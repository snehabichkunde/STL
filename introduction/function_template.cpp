#include<iostream>
using namespace std;

// function template
template<typename T>
T myMax(T x, T y)
{
    if(x>y){
        return x;
    }
    return y;
}

int main()
{
    cout << myMax<int>(6, 3) << endl;
    cout << myMax<char>('d', 'W') << endl; 
    return 0;
}