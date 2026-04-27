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

