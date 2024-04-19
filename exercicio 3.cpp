/*ex1*/

#include <iostream>
using namespace std;

int main() {
   
    float num1, num2;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "O primeiro número é maior.";
    }
   else if (num2 > num1) {
        cout << "O segundo número é maior.";
    }
       else {
        cout << "Os números são iguais.";
    }

    return 0;
}

/*ex2*/
#include <iostream>
using namespace std;

int main() {
  
  int quantidadeprodutos;

   
  cout << "Informe a quantidade de produtos no estoque: ";
    cin >> quantidadeprodutos;

    if (quantidadeprodutos >= 100) {
        cout << "Quantidade suficiente no estoque.";
    }
   else if (quantidadeprodutos >= 50) {
        cout << "Atenção ao estoque.";
    }
  else {
        cout << "Faz um novo pedido e reabasteça o estoque." ;
    }

  return 0;
}

/*ex3*/
#include <iostream>
using namespace std;

int main() {
    
float numero;

  cout << "Informe um número: ";
  cin >> numero;

  if (numero > 0) {
        cout << "O número é positivo.";
    }
   else if (numero < 0) {
        cout << "O número é negativo.";
    }
   else {
        cout << "O número é igual a zero.";
    }

    return 0;
}



