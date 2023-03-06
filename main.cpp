#include <iostream>
#include "archivos.h"
using namespace  std;

int main() {
    leerArchivo1("C:/Users/JP/Desktop/ARCHIVO.txt");
    cout<<endl;
    modificarArchivo2("D:/ARCHIVO2.txt");
    cout<<endl;
    leerArchivo1("D:/ARCHIVO2.txt");
    cout << "Fin del programa" << std::endl;
    return 0;
}
