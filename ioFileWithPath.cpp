#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string namaFile;

    cout << "Enter FileName : ";
    cin >> namaFile;

    // membuat obyek output file stream dalam mode menulis. 
    ofstream outfile;
    // membuka file
    outfile.open("namaFile + .txt");

    cout << ">= Menulis file, \'q\' untuk keluar " << endl;

    // unlimited loop untuk menulis
    while(true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q")
            break;
        //menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // membuat obyek input file
    ifstream infile;
    // membuka file
    infile.open("contohfile.txt");

    
}