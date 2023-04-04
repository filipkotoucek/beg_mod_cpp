#include <iostream>

int main(){
    using namespace std;
    char buff[128];
    cout << "Enter your name: ";
    // cin >> buff; Cannot handle space between words
    cin.getline(buff, 128, '\n');
    cout << "Your name is: " << buff << endl;
    return 0;
}