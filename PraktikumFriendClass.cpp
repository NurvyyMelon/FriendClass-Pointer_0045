#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    float d1, d2; // diagonal
    float s1, s2; // sisi

    public:
    void input() {
        cout << "=== Layang-Layang ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi 1: ";
        cin >> s1;
        cout << "Masukkan sisi 2: ";
        cin >> s2;
    }
     float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 2 * (s1 + s2);
    }

    void output() {
        cout << "Luas Layang-Layang: " << luas() << endl;
        cout << "Keliling Layang-Layang: " << keliling() << endl;
    }
     friend float hitungKelilingBelahKetupat(BelahKetupat b);
};

class BelahKetupat {
private:
    float d1, d2;
    float sisi;

public:
    void input() {
        cout << "\n=== Belah Ketupat ===" << endl;
        cout << "Masukkan diagonal 1: ";
        cin >> d1;
        cout << "Masukkan diagonal 2: ";
        cin >> d2;
        cout << "Masukkan sisi: ";
        cin >> sisi;
    }
      float luas() {
        return 0.5 * d1 * d2;
    }

    void output() {
        cout << "Luas Belah Ketupat: " << luas() << endl;
        cout << "Keliling Belah Ketupat: " 
             << hitungKelilingBelahKetupat(*this) << endl;
    }
    friend float hitungKelilingBelahKetupat(BelahKetupat b);
};

float hitungKelilingBelahKetupat(BelahKetupat b) {
    return 4 * b.sisi;
}