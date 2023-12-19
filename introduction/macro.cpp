#include<iostream>
using namespace std;

#define myMax(x,y) (((x)>(y)? (x) : (y)))

int main()
{
    cout << myMax(4,8) << endl;
    cout << myMax('c', 'a') << endl;
    return 0;
}

// the problem with the macro is that is it a preprocessing 
// so it does not make type chacking 
// its better to use functoin template insteed