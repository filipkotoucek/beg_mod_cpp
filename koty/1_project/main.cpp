#include <iostream>

int main(){
    using namespace std; // Nejdriv je nutne otevrit namespace, aby mel program pristup k membrum jako je `cout`.
    cout << "Hello " << "world!" << endl; // kaskadovani operatoru. endl je manipulator. Vlozi \n a flushes output buffer.
    std::cout << "Hello " << "world!" << std::endl; //bez otevreni namespace lze pouzit full qualified name
    return 0;
}