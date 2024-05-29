#include <iostream>

using namespace std;

int main()
{
    int n = 0, p = 0, i = 0;
    
    do
    {
        cout << "Ingrese un numero entero. (Digite 0 para salir)\n";
        cin >> n;
        if(n != 0)
        {
            if(n % 2 == 0)
            {
                p++;
            }
            else if(n % 2 != 0)
            {
                i++;
            }
                
        }
        
        
    }while(n != 0);
    
    cout << "La cantidad de numeros pares es " << p << "\n";
    cout << "La cantidad de numeros impares es " << i << "\n";
    
    

    return 0;
}