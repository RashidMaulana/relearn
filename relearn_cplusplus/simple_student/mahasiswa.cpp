#include "modules/mahasiswa.h"
#include <iostream>
using namespace std;

string Mahasiswa::getNama() {
    return nama;
}

void Mahasiswa::setAttributes() {
    cout << "Silahkan masukkan nama" << endl;
    cin >> nama;
    cout << "Silahkan masukkan nim" << endl;
    cin >> nim;
}

int Mahasiswa::getNim() {
    return nim;
}