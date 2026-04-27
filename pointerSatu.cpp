#include <iostream>
using namespace std;
class mahasiswa {
    public:
    int nim;
    void showNim() {
        cout << "No Induk = " << nim << endl;
    }
};


int main() {
    mahasiswa mhs{1}; //object mhs
    mhs.showNim(); //Member Acces Operator

    mahasiswa &refMhs = mhs; //pointer reference refMhs
    refMhs.nim = 2; //Member Acces Operator
    refMhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer dereference pMhs
    pMhs->nim = 3; //arrow operator
    pMhs->showNim();
    return 0;
}