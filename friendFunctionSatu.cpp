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