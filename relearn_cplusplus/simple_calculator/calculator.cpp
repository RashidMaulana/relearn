#include <iostream>

using namespace std;

int insertNumbers(int order) {
    int num;
    if(order == 1) {
    cout << "Masukkan angka pertama" << endl;
    cin >> num;
    } else {
    cout << "Masukkan angka kedua" << endl;
    cin >> num;
    }
    return num;
}

int main()
{
    int firstNumber, secondNumber, result;
    char arithmeticOperation;
    do {
        cout << "Selamat datang di program kalkulator sederhana!" << endl;
        cout << "Silahkan pilih operasi yang diinginkan" << endl;
        cout << "!====================================!" << endl;
        cout << "A. Penjumlahan" << endl;
        cout << "B. Pengurangan" << endl;
        cout << "C. Perkalian" << endl;
        cout << "D. Pembagian" << endl;
        cout << "E. Keluar dari program" << endl;
        cout << "!====================================!" << endl;
        cin >> arithmeticOperation;
        switch(arithmeticOperation) {
            case 'a':
            case 'A':
                firstNumber = insertNumbers(1);
                secondNumber = insertNumbers(2);
                result = firstNumber + secondNumber;
                break;
            case 'b':
            case 'B':
                firstNumber = insertNumbers(1);
                secondNumber = insertNumbers(2);
                result = firstNumber - secondNumber;
                break;
            case 'c':
            case 'C':
                firstNumber = insertNumbers(1);
                secondNumber = insertNumbers(2);
                result = firstNumber * secondNumber;
                break;
            case 'd':
            case 'D':
                firstNumber = insertNumbers(1);
                secondNumber = insertNumbers(2);
                result = firstNumber / secondNumber;
                break;
            case 'e':
            case 'E':
                break;
        }
        cout << "Hasil yang didapatkan adalah : " << result << endl;
    } while (arithmeticOperation != 'E' && arithmeticOperation != 'e');
}
