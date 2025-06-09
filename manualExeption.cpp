#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        throw("hallo"); // melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dii eksekusi" << endl;     
    }
    catch(int a)
   {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
   }
   catch (...)
   {
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "default Pengecualian diexekusi" << endl;
   }
   return 0;
}