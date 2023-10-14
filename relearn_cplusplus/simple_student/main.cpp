#include <iostream>
#include "./modules/mahasiswa.h"

using namespace std;
#define clr system("cls")

int main() {
    Mahasiswa studentTest;
    studentTest.setAttributes();
    cout << studentTest.getNama() << endl;
    cout << studentTest.getNim() << endl;
    cout << "Test";
}