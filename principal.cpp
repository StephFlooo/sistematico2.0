#include <iostream>
using namespace std;


// Declaración de la función
int calcularEdad(int talla, int ano);

int main(int argc, char const *argv[])
{
    // edad
    int talla, ano;
    cout << "Ingresa la talla de tus zapatos (numero entero)" << endl;
    cin >> talla;
    cout << "Ingrese su año de nacimiento" << endl;
    cin >> ano;

    int edad = calcularEdad(talla, ano);
    cout << "(Los primeros digitos son la talla de tus zapatos y los ultimos dos digitos son tu edad) Edad = " << edad << std::endl;

    return 0;
}

// Definición de la función
int calcularEdad(int talla, int ano)
{
    int edad = (talla * 5 + 50) * 20 + 1015 - ano;
    return edad;
}
