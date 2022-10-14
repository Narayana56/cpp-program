#include <iostream>
using namespace std;
 
class car {
public:
    Vehicle() { cout << "This is a car\n"; }
};
 
class tyres : public car {
};
 
class brake : public car {
};
 
int main()
{
    tyres obj1;
    brake obj2;
    return 0;
}
