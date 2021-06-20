//Felipe Ferreira Delarmelina

#include <iostream>
#include "triangulo.h"

using namespace std;
using namespace TT;

int main() {
  tTriangulos T1;

  cout << "Lado 1: ";
  cin >> T1.lado1;  //Cateto1
  cout << "Lado 2: ";
  cin >> T1.lado2;  //Cateto2

  T1.lado3 = calcularHipotenusa(T1);
  calcularPerimetro(T1);
  calcularArea(T1); 

  cout << "Hipotenusa do triangulo: " << T1.lado3 << endl;
}