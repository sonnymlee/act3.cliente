#include  <stdlib.h> 
#include <iostream> 
#include <stdexcept>
#include <string>

using namespace std; 

class cliente {
    //atributos
    private:
    string nombre;
    string apellido;
    int edad;
    int ncuenta;
    string dir;

    public:
    void registro();
    void consulta();

};
//metodo 1
void cliente::registro(){
    string ed;
    ed = "null";
    string ncue;
    ncue = "null";
    cout<< "Ingrese los apellidos del cliente." <<endl;
    cin>> apellido;
    cout<< "Ingrese los nombres del cliente." <<endl;
    cin>> nombre;
    cout<< "Ingrese la direccion del cliente." <<endl;
    cin>> dir;
    cout<< "Ingrese la edad del cliente." <<endl;
    cin>> ed;
    fflush(stdin);
    try
    {
        edad = stoi(ed);
    }
    catch(const invalid_argument)
    {
        cout<<"ERROR: Edad debe ser un numero."<<endl;
        edad = 00;
    }
    try
    {
        if (17 < edad< 100)
        {
            /* code */
        }
        
    }
    catch(const invalid_argument)
    {
        cout<<"ERROR: Edad invalida."<<endl;
        edad = 00;
    }
    cout<< "Ingrese el No. cuenta del cliente." <<endl;
    cin>> ncue;
    fflush(stdin);  
    try
    {
        ncuenta = stoi(ncue);
    }
    catch(const invalid_argument)
    {
        cout<<"ERROR: No. de cuenta invalido."<<endl;
        ncuenta = 0000;
    }
}
//metodo 2
void cliente::consulta(){

        cout<<"DATOS DE LOS CLIENTES:"<<endl;
        cout<< "Cliente: "<<nombre<<" , "<<apellido<<"."<<endl;
        cout<< "Edad: "<<edad<<" años"<<endl;
        cout<< "No. Cuenta: "<<ncuenta<<"."<<endl;
        cout<< "Direccion: "<<dir<<"."<<endl;
}