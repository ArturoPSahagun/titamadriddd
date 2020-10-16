#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <sstream>


using namespace std;

class catalogo{
private:
    string bufferNombre;
    string bufferDesc;
public:
    string hazLlave();
    void capturar();
};

void catalogo::capturar(){
    cout << "Ingresar nombre: " << endl;
    getline(cin, bufferNombre);
    cout << "Ingresar descripcion: " << endl;
    getline(cin, bufferDesc);
    string llave = hazLlave();
    ofstream archivo("catalogo.txt", ios::app);
    archivo << llave.length() << " " << llave << " " << bufferNombre.length()<< " " << bufferNombre << " " << bufferDesc.length() << " "<< bufferDesc << "\n";
    archivo.close();
}

string catalogo::hazLlave(){
    stringstream llave;
    srand(time(nullptr));
    int numeroAleatorio = rand() % 100;
    llave << (char)toupper(bufferNombre[0]) << (char) toupper(bufferNombre[1]) << (char) toupper(bufferNombre[2]) << "-";
    if(numeroAleatorio < 10) llave << "0";
    llave << numeroAleatorio;
    return llave.str();
}
