#include <iostream>
using namespace std;

int main()
{
   int hari;
   cout << "Masukkan hari (1-7): ";
   cin >> hari;
   if (hari == 1) 
   {
    cout << "Hari Minggu\n";

   }
   else 
   { 
    cout << "Hari Kerja\n";
   }

   switch (hari)
   {
    case 7:
        cout << "Hari Minggu\n";
        break;
   
default:
        cout << "Hari Kerja\n";
        break;
   
    }
}
