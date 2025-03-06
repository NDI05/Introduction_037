#include <iostream>
using namespace std;

int main() {
    double panjang;
    double lebar;
    double luas;
    
    
    cout << "masukkan panjangnya: ";
    cin >> panjang;
    cout << "masukkan lebarnya: ";
    cin >> lebar;

    luas = panjang * lebar;
    
    cout << "Luas persegi panjang adalah " << luas << endl;
}
