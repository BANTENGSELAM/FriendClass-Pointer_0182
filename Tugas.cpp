#include <iostream>
using namespace std;

class BelahKetupat;
class LayangLayang
{
private:
    int d1, d2; // diagonal
    int s1, s2, s3, s4; // sisi

public:
    void input();
    void luas();
    void keliling();

    // friend function dari class BelahKetupat
    friend void BelahKetupat::showKelilingLayang(LayangLayang &l);
};

class BelahKetupat
{
private:
    int d1, d2; // diagonal
    int sisi;

public:
    void input();
    void luas();
    void keliling();

    // friend function untuk akses LayangLayang
    void showKelilingLayang(LayangLayang &l);
};

void LayangLayang::input()
{
    cout << "Input Layang-Layang\n";
    cout << "Diagonal 1: "; cin >> d1;
    cout << "Diagonal 2: "; cin >> d2;
    cout << "Sisi 1: "; cin >> s1;
    cout << "Sisi 2: "; cin >> s2;
    cout << "Sisi 3: "; cin >> s3;
    cout << "Sisi 4: "; cin >> s4;
}

void LayangLayang::luas()
{
    cout << "Luas Layang-Layang = " << (d1 * d2) / 2 << endl;
}

void LayangLayang::keliling()
{
    cout << "Keliling Layang-Layang = " << (s1 + s2 + s3 + s4) << endl;
}

// Belah Ketupat
void BelahKetupat::input()
{
    cout << "\nInput Belah Ketupat\n";
    cout << "Diagonal 1: "; cin >> d1;
    cout << "Diagonal 2: "; cin >> d2;
    cout << "Sisi: "; cin >> sisi;
}

void BelahKetupat::luas()
{
    cout << "Luas Belah Ketupat = " << (d1 * d2) / 2 << endl;
}

void BelahKetupat::keliling()
{
    cout << "Keliling Belah Ketupat = " << (4 * sisi) << endl;
}