#include <iostream>

using namespace std;

float tambah (float a, float b)
    {
	return ( a + b );
	}

float kurang (float a, float b)
    {
	return ( a - b );
	}

float kali (float a, float b)
    {
	return ( a * b );
	}

float bagi (float a, float b)
    {
	return (a / b );
	}


int main()
{
float bila, bilb;
int pilihan;

    cout << "PROGRAM KALKULATOR SEDERHANA " << endl;
    cout << "=============================" << endl;

    cout << "Masukan bilangan A : ";cin>>bila;
    cout << "Masukan bilangan B : ";cin>>bilb;
do {
    cout << endl;
    cout << "Pilihan Operasinya :" << endl;
    cout << "1. Penjumlahan " << endl;
    cout << "2. Pengurangan " << endl;
    cout << "3. Perkalian " << endl;
    cout << "4. Pembagian " << endl;
    cout << "0. Keluar dari aplikasi " << endl;
    cout << endl;

    cout << "Masukkan pilihan : ";
    cin >> pilihan; cout << endl;
switch (pilihan)
    {
        case 1 :
            cout << " Hasil Penjumlahan dari " << bila << " + " << bilb << " adalah : " << tambah (bila,bilb);
            break;
        case 2 :
            cout << " Hasil Pengurangan dari " << bila << " - " << bilb << " adalah : " << kurang (bila,bilb);
            break;
        case 3 :
            cout << " Hasil Perkalian dari " << bila << " x " << bilb << " adalah : " << kali (bila,bilb);
            break;
        case 4 :
             cout << " Hasil Pembagian dari "<<bila<<" : "<<bilb<<" adalah : " << bagi (bila,bilb);
             break;
        case 0 :
             cout << " Exit from aplication " << endl;
             break;
        default :
            cout << "Pilihan Operasi Anda Salah" << endl << endl;
    }
    cout << endl;
    }
while(pilihan!=0);
return 0;
}
