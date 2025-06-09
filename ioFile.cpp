#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string baris;

    // membuat obyek output file stream dalam mode menulis. 
    ofstream output;
    // membuka file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar " << endl;

    // unlimited loop untuk menulis
    while(true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        gateline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q")
            break;
        //menulis dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.clode();

    // membuat obyek input fille
    ifstream infile;
    // membuka file
    infile.open("contohfile.txt");

    cout << endl;
}