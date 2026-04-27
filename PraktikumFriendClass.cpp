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