#include <iostream>
#include "catalogo.h"
using namespace std;

int main(){
    catalogo cat;
    int opc;
    inicio:
    cout << "\nBolsos Tita Madrid" << endl;
    cout << "Que desea hacer?\n1-Capturar\n2-Buscar\n3-Eliminar\n0-salir" << endl;
    cin >> opc;
    switch(opc){
        case 1:
        cin.ignore();
        cat.capturar();
        break;
    }
    if(opc) goto inicio;
    return 0;
}
