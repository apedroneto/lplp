#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main () {

   int posicao1;
   int posicao2;
   int velocidade1;
   int velocidade2;
   int tempo;
   
   //recebendo dados da entra
   cin >> posicao1;
   cin >> velocidade1;
   cin >> posicao2;
   cin >> velocidade2;
   cin >> tempo;


   int calculo1 = posicao1 + (velocidade1*tempo);
   int calculo2 = posicao2 + (velocidade2*tempo);

   cout << abs(calculo1 - calculo2) << endl;

   return 0;
}