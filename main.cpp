#include <iostream>
#include <bitset>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
    // variant 1 
    cout << "Input i" << endl;
    int i; cin >> i;
    cout << "Input x" << endl;
    int x; cin >> x;
    int res;

    int _or = 1;

    _or = _or << i;
     

    res = x | _or;
    cout << "Result: ";
    cout << res << endl;


    return 0;
}

