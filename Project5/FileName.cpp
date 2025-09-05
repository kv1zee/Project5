#include<iostream>
using namespace std;

class Fraction
{
private:
    int x;
    int y;
    char sumbol;
public:
    void Print()
    {
        cout <<  sumbol  << " fraction -> " << x << " / " << y << endl;
    }
    void Init(char _t, int _x, int _y)
    {
        sumbol = _t;
        x = _x;
        y = _y;
    }
};
int main()
{
    Fraction a, b;


    a.Init('1', 10, -2);
    a.Print();

    b.Init('2', 5, 16);
    b.Print();

}