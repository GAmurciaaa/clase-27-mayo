#include <iostream>
using namespace std;

int main()
{
    int n = 0, indiceUsuario = 0, indiceNombre = 0, indiceContrasenia = 0, indiceEdad = 0;
    string nombre[5] = {}, usuarioTemp = "", contraseniaTemp = "";
    int edad[5] = {};
    string usuario[5] = {};
    string contrasenia[5] = {};
    bool inicioSesion = false;
    
    
    
    
    do
    {
        cout << "Selecciones una opcion\n 1. inicio de sesion.\n 2. Registro de usuario.\n 3. Salir.\n";
        cin >> n;
    
        switch(n)
        {
            case 1:
                cout << "ingrese usuario\n";
                cin >> usuarioTemp;
                
                for(int i = 0; i<=5; i++)
                {
                    if(usuarioTemp == usuario[i])
                    {
                        cout << "ingrese contrasenia\n";
                        cin >> contraseniaTemp;
                        if(contraseniaTemp == contrasenia[i])
                        {
                            inicioSesion = true;
                            cout << "Bienvenido";
                            continue;
                        }
                    }
                }
                
                break;
            case 2:
                cout << "Ingrese su nombre completo\n";
                cin >> nombre[indiceNombre];
                cout << "Ingrese edad";
                cin >> edad[indiceEdad];
                cout << "Ingrese usuario";
                cin >> usuario[indiceUsuario];
                cout << "Ingrese contrasenia";
                cin >> contrasenia[indiceContrasenia];
                indiceUsuario++;
                break;
            
            case 3:
            
                break;
            default:
                cout << "Opcion no valida\n";
                break;
        }
        
    }while(throw);
    
    
    

    return 0;
}