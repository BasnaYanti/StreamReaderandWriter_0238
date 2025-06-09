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

}