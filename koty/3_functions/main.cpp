#include <iostream>
#include "math.h"

using namespace std;

void print_hashes(){
    for(int i = 0; i < 10; i++){
        cout << "#";
    }
}

int main(){
    int x, y, result;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    result = sub(x, y);
    cout << "Subtraction of x - y is: " << result << endl;
    print_hashes();
    return 0;
}