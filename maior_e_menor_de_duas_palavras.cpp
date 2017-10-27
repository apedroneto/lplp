#include <iostream>
#include <string>

using namespace std;

int main () {

   string str1;
   string str2;
   string str3;
   
   //recebendo dados da entra
   cin >> str1;
   cin >> str2;


   if(str1.size() > str2.size()){

      //mostrando dados na saida
      cout << str2 << endl;
      cout << str1 << endl;

   }else if(str1.size() == str2.size()){
      cout << str1 << endl;
      cout << str1 << endl;
   }else{
      cout << str1 << endl;
      cout << str2 << endl;
   }

   return 0;
}