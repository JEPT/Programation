#include <iostream>

using namespace std;

void intercambiar(int &i , int &j ); //Protipo de la funci�n para intercambiar los valores

int main(void)
{
    int a = 2,b = 3;
    cout<<"Valores originales  a = "<<a<<" y b = "<<b<<endl<<endl;
    intercambiar(a,b); //Llmado a la funci�n intercambiar
    cout<<"Luego de la funcion a = "<<a<<" y b = "<<b<<endl<<endl;

    return 0;
}

void intercambiar(int &i, int &j)
{
    int z;
    z = i;
    i = j;
    j = z;
}
