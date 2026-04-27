#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string Pnama);
    friend class siswa;
};

class siswa 
{
private:
    int id;

public:
    void setId(int Pid);
    void displayAll(orang &a);
};


void siswa::displayAll(orang &a)
{
    cout << id << endl << a.nama;
}

void orang::setNama(string Pnama)
{
    nama = Pnama;
}

void siswa::setId(int Pid)
{
    id = Pid;
}
int main()
{
    orang jepri;
    jepri.setNama("Usus");
    siswa jepri_siswa;
    jepri_siswa.setId(1);
    jepri_siswa.displayAll(jepri);
    return 0;
}