import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int firstNumber, secondNumber, result = 0;
        char arithmeticOperation;
        Scanner scan = new Scanner(System.in);
        do {
            System.out.println( "Selamat datang di program kalkulator sederhana!");
            System.out.println("Silahkan pilih operasi yang diinginkan");
            System.out.println("!====================================!");
            System.out.println("A. Penjumlahan");
            System.out.println("B. Pengurangan");
            System.out.println("C. Perkalian");
            System.out.println("D. Pembagian");
            System.out.println("E. Keluar dari program");
            System.out.println("!====================================!");
            arithmeticOperation = scan.nextLine().charAt(0);
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
            System.out.println("Hasil yang didapatkan adalah : " + result);
        } while ( arithmeticOperation != 'e' && arithmeticOperation != 'E');
    }

    static int insertNumbers(int order) {
        Scanner scan = new Scanner(System.in);
        int num;
        if(order == 1) {
            System.out.println("Masukkan angka pertama");
            num = scan.nextInt();
        } else {
            System.out.println("Masukkan angka kedua");
            num = scan.nextInt();
        }
        return num;
    }
}