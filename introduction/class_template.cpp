#include<iostream>
using namespace std;

template<typename T>
class Pair{
    T x, y;
    public:
    Pair(T x, T y): x(x), y(y) {}
    T getFirst();
    T getSecond();
};

template<typename T>
T Pair<T> :: getFirst()
{
    return x;
}
template<typename T>
T Pair<T> :: getSecond()
{
    return y;
}

int main()
{
    Pair<int> P (3,5);
    cout << P.getFirst() << " " << P.getSecond() << endl;
    Pair<char> C('a', 'v');
    cout << C.getFirst() << " " << C.getSecond() << endl;
    return 0;
}