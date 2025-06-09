#include <iostream>
#include <exception>
#include <array>

using namespace std;

int main()
{
    cout << "Awal program " << endl;
    try
    {
        array<int, 3> data = {10, 20, 30};
        cout << data.at(4) << endl;
        //memanggil array
    }
    catch (exception &e)
    {
        //penangkap menggunakan obyek
        cout << e.what() << endl;
        /*akan di eksekusi karna array data hanya memiliki 3 elemen*/
    }
    cout << "Baris program yang terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}