#include  <stdlib.h> 
#include <iostream> 
#include "cliente.h"

using namespace std; 

int main()
{
    //registro de clintes
    cliente clien[3];
    int i;
    for (i=0; i<3;){
        cout<< "\nRegistro del Cliente " << i + 1 <<"." <<endl;        
        clien[i].registro();
        i=i+1;
    }
    //mostrar info.
    string op;
    cout<<"¿desea mostrar la informacion? [Y/N]"<<endl;
    cin>>op;
    if (op=="y" || op=="Y")
    {
        for (i=0; i<3;){
            clien[i].consulta();
            i=i+1;
        }  
    }
    else {
        cout<<"programa terminado"<<endl;
    }
  
system("PAUSE");
}