#include <iostream>
using namespace std;

int main() {
    int n, i,N;

    cout << "Enter a positive integer: ";
    cin >> n;
    cout<<"enter Nth factor value:";
    cin>> N;
    if(n<=0)
    {
    	cout<<"invalid choice";
	}

    cout << "Factors of " << n << " are: ";  
    for(i = 1; i <= n; ++i) {
        if(n % i == 0)
            cout << i << " ";
    }
    return 0;
}
