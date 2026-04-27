#include <iostream>
#include <cmath>

using namespace std;

// ================== CLASS LAYANG-LAYANG ==================
class LayangLayang {
private:
    double d1, d2;

public:
    void inputData() {
        cout << "Input diagonal 1 layang-layang: ";
        cin >> d1;
        cout << "Input diagonal 2 layang-layang: ";
        cin >> d2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    void tampilkanKeliling() {
        cout << "Keliling layang-layang (belum dihitung)" << endl;
    }
};

// ================== CLASS BELAH KETUPAT ==================
class BelahKetupat {
private:
    double d1, d2;

public:
    void inputData() {
        cout << "Input diagonal 1 belah ketupat: ";
        cin >> d1;
        cout << "Input diagonal 2 belah ketupat: ";
        cin >> d2;
    }

    double hitungLuas() {
        return 0.5 * d1 * d2;
    }

    void tampilkanKeliling() {
        cout << "Keliling belah ketupat (belum dihitung)" << endl;
    }
};

// ================== MAIN ==================
int main() {
    LayangLayang ObjectLayang;
    BelahKetupat ObjectBelah;

    cout << "=== Input Data ===" << endl;
    ObjectLayang.inputData();
    ObjectBelah.inputData();

    cout << "\n--- Hasil Luas ---" << endl;
    cout << "Luas Layang-Layang : " << ObjectLayang.hitungLuas() << endl;
    cout << "Luas Belah Ketupat: " << ObjectBelah.hitungLuas() << endl;

    cout << endl;
    ObjectLayang.tampilkanKeliling();
    ObjectBelah.tampilkanKeliling();

    return 0;
}