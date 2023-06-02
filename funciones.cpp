#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){   
// edad
int calcularEdad(int talla, int ano);

int talla,ano;
cout << "Ingresa la talla de tus zapatos (numero entero)"<< endl;
cin >> talla;
cout << "Ingrese su anio de nacimiento" << endl;
cin >> ano;

int edad = (talla * 5 + 50) * 20 + 1015 - ano;
    cout << " (Los primeros digitos son la talla de tus zapatos y los ultimos dos digitos son tu edad) Edad = " << edad << endl;

  return 0;
}


