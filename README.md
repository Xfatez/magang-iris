# magang-iris

Pointer 


Pointer dianggap sebuah variabel yang berisi alamat memori sebagai nilainya dan sangat berbeda dengan variabel biasa. 

Di mana pada variabel biasa hanya menyimpan nilai tertentu, tetapi pointer bekerja dengan cara

yang berbeda karena berfungsi untuk menyimpan alamat dari variabel yang menyimpan nilai tertentu.

Pointer didesain untuk menyimpan alamat. Pointer fungsinya untuk menyimpan alamat dari variabel menggunakan operator alamat (&)

Secara umum ada 2 jenis operator pointer, yaitu opertor (&) dan (*).
        
        a. Operator Alamat (&)
        
           Variabel pasti memiliki alamat dalam suatu memori, kita dapat megetahui lamat memori dari variabel dengan menggunakan (&).
           
           Tanda (&) berguna untuk mengetahui alamat memori dari variabel. (&) di ketik sebelum variabel, yang artinya 'addres of' .
           
        b. Operator References (*)
        
           (*) adalah operator references. Nilai yang tersimpan dalam sebuah variabel dapat diakses dengan menggunakan pointer dengan 
           
           cara menambahkan awalan operator asterisk (*) pada identifier pointer yang berarti 'value pointed by

Contoh penerapan pointer &

#include <iostream>

using namespace std;

int main() {
    void* P;   //Mendeklarasikan pointer P
              //sebagai pointer tanpa tipe

    //Mendeklarasikan variabel X, Y dan Z dengan tipe berbeda
    int X;
    long Y;
    double Z;

    //Memerintahkan P untuk menunjuk ke alamat dari variabel X
    P = &X;
    X = 10;   //Mengisikan variabel X dengan nilai 10
    //Menampilkan hasil
    cout << "Nilai X  : " << X << endl;
    cout << "Nilai P  : " << P << endl;
    cout << "Nilai &X : " << &X << endl;
    cout << endl;

    //Memerintah P untuk menunjuk ke alamat dari variabel Y
    P = &Y;
    Y = 2000; //Mengisikan variabel Y dengan nilai 2000
    //Menampilkan hasil
    cout << "Nilai Y  : " << Y << endl;
    cout << "Nilai P  : " << P << endl;
    cout << "Nilai &Y : " << &Y << endl;
    cout << endl;

    //Memerintahkan P untuk menunjuk ke alamat dari variabel Z
    P = &Z;
    Z = 21.0378; //Mengisikan variabel Z dengan nilai 21.0378
    //Menampilkan hasil
    cout << "Nilai Z  : " << Z << endl;
    cout << "Nilai P  : " << P << endl;
    cout << "Nilai &Z : " << &Z << endl;
    cout << endl;

    return 0;
    }

Contoh penerapan (*)
