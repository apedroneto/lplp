#include <iostream>
#include <string>

using namespace std;

int main () {

   int cor1;
   int cor2;
   int cor3;
   
   //recebendo dados da entra
   cin >> cor1;
   cin >> cor2;
   cin >> cor3;

   if(cor1 < 128 || cor3 < 128 || cor2 < 128){
      cout << "PRETO" << endl;
   }else{
      cout << "BRANCO" << endl;
   }

   return 0;
}