#include <iostream>

using namespace std;

int main() {
    int n, indNombre = 0, indEdad = 0, indUsuario = 0, indContrasena = 0;
    string tempUs, tempCon, confContra;
    bool continuar = true, inicioSesion = false, registrado = false;
    int edad[10] = {};
    string nombre[10] = {}, usuario[10] = {}, contrasena[10] = {};


    cout << "Menu de Login\n Seleccione una opcion\n 1. Registrar\n 2. Iniciar Sesion\n 3. Salir\n";
    cin >> n;

    do
    {

        switch(n)
        {
            case 1:

                cout << "Registre su usuario\n";
                cout << "Ingrese su nombre\n";
                cin >> nombre[indNombre];
                cout << "Ingrese su edad\n";
                cin >> edad[indEdad];
                cout << "Ingrese su nombre de usuario\n";
                cin >> usuario[indUsuario];
                do
                {

                    cout << "Ingrese su contrasena\n";
                    cin >> tempCon;
                    cout << "Confirme su contrasena\n";
                    cin >> confContra;

                    if (tempCon == confContra)
                    {

                        contrasena[indContrasena] = tempCon;
                        indNombre++;
                        indEdad++;
                        indUsuario++;
                        indContrasena++;
                        registrado = true;
                        
                    }
                    else
                    {

                        cout << "Las contrasenas no coinciden\n";
                        registrado = false;

                    }

                }while(registrado == false);
                
                n = 2;
                
                break;

            case 2:

                cout << "Inicio de sesion\n";
                cout << "Ingrese su nombre de usuario\n";
                cin >> tempUs;
                for (int i = 0; i < 10; i++)
                {
                    if (tempUs == usuario[i])
                    {
                        do
                        {
                            cout << "Ingrese su contrasena\n";
                            cin >> tempCon;
                            if (tempCon == contrasena[i])
                            {
                                inicioSesion = true;
                                cout << "Bienvenido\n";
                                continuar = false;
                                break;
                            }
                            else
                            {
                                cout << "Contrasena incorrecta\n";
                            }
                        }while(true);
                    }
                }

                break;

            case 3:
                cout << "Saliendo del programa\n";
                continuar = false;
                break;

            default:
                cout << "Opcion no valida\n";
                break;

        }

    }while(continuar == true);

    

    return 0;
}