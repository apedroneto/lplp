#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main () {

   string palavra1;
   string palavra2;

   cin >> palavra1;
   cin >> palavra2;

   if((palavra1[0] == palavra2[0]) && (palavra1[palavra1.size()-1] == palavra2[palavra2.size()-1])){

      cout << "S" << endl;

   }else{
      cout << "N" << endl;
   }

   return 0;
}