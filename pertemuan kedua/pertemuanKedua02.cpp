#include <iostream>
using namespace std;

float panjang, lebar;

void inputData(){
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
}

float countLuas(float a,  float b){
    return a * b;
}

void outputData(){
    cout << "Nilai Luas Adalah " << countLuas(panjang, lebar) << endl;
}

int main(){
    inputData();
    outputData();
}
