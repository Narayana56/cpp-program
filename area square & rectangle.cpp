#include<iostream>
using namespace std;

class Area
{
public:
    static void print_area(int l, int b)
    {
        cout << l*b << endl;
    }

    static void print_area(int s)
    {
        cout << s*s << endl;
    }
};

int main()
{
    Area::print_area(9);
    Area::print_area(8,9);
    return 0;
}
