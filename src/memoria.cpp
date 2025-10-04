#include <iostream>
using namespace std;

class Empleado{
    private: //Nacen de la relación tiene
        char nobre[10]; //10 B
        int edad; //4 B
        char direccion[255]; //255 B
        int telefono; //4 B
    public: //Interfaz y nace de la relación usa
        int LeerEdad(){
            return edad;
        }
}; // --> 273 B

int main(int argc, char const *argv[])
{
    //Tamaños memoria estática

    //Enteros
    cout<<"Tamaño de int "<<sizeof(int)<<endl;
    cout<<"Tamaño de long "<<sizeof(long)<<endl;
    //Punto flotante
    cout<<"Tamaño de float "<<sizeof(float)<<endl;
    cout<<"Tamaño de double "<<sizeof(double)<<endl;
    //Bytes
    cout<<"Tamaño de char "<<sizeof(char)<<endl;
    cout<<"Tamaño de byte "<<sizeof(byte)<<endl;
    cout<<"Tamaño de bool "<<sizeof(bool)<<endl;

    cout<<"Tamaño de puntero "<<sizeof(int*)<<endl;

    Empleado empleados[10]; // --> 2730 B
    cout<<"Tamano Empleado "<<sizeof(Empleado)<<endl;
    cout<<"Empleados"<<empleados<<endl;

    //Casteos
    int a=69;
    char b=(char) a;
    cout<<b<<endl;

    return 0;
}
