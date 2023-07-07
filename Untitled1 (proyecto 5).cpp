#include <iostream>
#include<cstdlib>
#include<conio.h>
#ifdef _WIN32
#include<windows.h>
#endif 

using namespace std;

void limpiar_pantalla()
{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

// elizabeth funcion 1 (cumplio pero no funcionaba)
//Escribe una funcion que lea valores enteros hasta que se instroduzca un valor en el rango
// [20 - 30] o se introduzca el valor 0. 
//La funcion debe mostrar la suma de los valores mayores a 0 introducidos
//Ojo: debe contar con una opcion para salir y regresar al menu principal
void funcion1(void) {
    int valor, suma = 0;
    char salir;

    do{
        cout << "digite un valor entero (0 para salir): ";
        while (true){
            cin >> valor;

            if (valor == 0){
        	    break;
            }
            if (valor > 0 && (valor < 20 || valor > 30)){
        	    suma += valor;
            }
		
		    if (valor >= 20 && valor <= 30){
                break;
            }
            suma = suma + valor;
        }
 
    cout << "La suma de los valores mayores a 0 introducidos es: " <<suma<< endl;
    cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
    cin >> salir;
        
    }while(salir != 's');
}

//sofia funcion 2 (no cumplio pero no funcionaba)
//Esta funcion debe leer 10 numeros en un arreglo, estos numeros se deben pasar a otro arreglo multiplicados por 2
//se debe mostar el arreglo nuevo
//Ojo: debe contar con una opcion para salir y regresar al menu principal
void funcion2(void){
    int numeros_originales[10];
    int numeros_multiplicados[10];

    cout << "digite 10 numeros:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >>numeros_originales[i];
    }

    for (int i = 0; i < 10; i++) {
        numeros_multiplicados[i] = numeros_originales[i] * 2;
    }

    cout << "arreglo original: ";
    for (int i = 0; i < 10; i++) {
        cout << numeros_originales[i] << " ";
    }

    cout << endl;

    cout << "arreglo multiplicado por 2: ";
    for (int i = 0; i < 10; i++) {
        cout << numeros_multiplicados[i] << " ";
    }

    cout << endl;
    char salir;
    do{
        
        cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
        cin >> salir;
        
    }while(salir != 's');
}

//citlally funcion 3
//La funcion debe permitir capturar un numero del 1 al 10 y generar su tabla de multiplicar
//la funcion se debe llamar tabla
//Ojo: debe contar con una opcion para salir y regresar al menu principal
void funcion3(void){
int multiplicacion, numero, n=1;
cout<<"digite un numero : ";
cin>>numero;
cout<<"la tabla del "<<numero<<" es:"<<endl;
do{
multiplicacion = numero * n;
cout<<numero<<" x "<<n<<" = "<<multiplicacion<<endl;
n++;
}
while(n<=10);
char salir;

do{

    cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
    cin >> salir;
        
    }while(salir != 's');

}

//daniela funcion 4
//La funcion debe pedir 10 numeros y mostrar la suma de solo los numeros impares
//Ejemplo ---> [10,1,3,5,7,8,9] el resultado: 1 + 3 + 5 + 7 + 9 = 25 
//Ojo: debe contar con una opcion para salir y regresar al menu principal o bien regresar y repetir el proceso
void funcion4 (void){
    cout << "Estoy en la funcion 4" <<"\n";
    int suma=0;
    int numero;
    char salir;
    
    do{
    	cout<< "digite 10 numeros: ";
    for(int i=0; i<10; i++){
    	cin>> numero;
    	
    	if(numero %2!=0){
    		suma +=numero;
    	}
    }
    cout<< "la suma de los numeros impares es: "<< suma << endl;
    cout<< "\n \n" << "para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
    cin >> salir;
    
    }while(salir != 's');  
}


// gabriel funcion 5
//Desarrollar la funcion casa de cambio
//debe tener un menú para convertir a Dolares, Euros, Yenes
//no debe pedir un monto en pesos mexicanos y convertirlos segun la opcion seleccionada 
//mostrar un mensaje con la cantida, el tipo de cambio y su total
//Ojo: debe poder continuar dentro de este menu se leccionar una opcion salir y regresar al menu principal
void funcion5(){
	cout<<"Estoy en tipodecambio " <"\n";
    int opcion;
    float monto, total;
    const float dolar = 20.0, euro = 23.0, yen = 0.18;
    
    do{
        cout << "Seleccione la moneda a la que desea convertir: \n";
        cout << "1. Dolares\n";
        cout << "2. Euros\n";
        cout << "3. Yenes\n";
        cout << "4. Salir\n";
        cin >> opcion;
        
        if(opcion >= 1 && opcion <= 3){
            cout << "Ingrese el monto en pesos mexicanos: ";
            cin >> monto;
            
            switch(opcion){
                case 1:
                    total = monto / dolar;
                    cout << monto << " pesos mexicanos son " << total << " dolares.\n";
                    break;
                case 2:
                    total = monto / euro;
                    cout << monto << " pesos mexicanos son " << total << " euros.\n";
                    break;
                case 3:
                    total = monto / yen;
                    cout << monto << " pesos mexicanos son " << total << " yenes.\n";
                    break;
            }
         }
    } while(opcion != 4);
}
    
// didier funcion 6 (no cumplio)
//esta funcion Lee dos numeros (desde el teclado) y muestra en pantalla los numeros comprendidos entre ambos. 
//Tenga en cuenta que no se sabe cual de los numeros es mayor (pueden leerse en cualquier orden).
//Ejemplo num1 = 2, num2 = 10 ---->  3, 4, 5, 6, 7, 8, 9
//Ojo: debe contar con una opcion para salir y regresar al menu principal o bien regresar y repetir el proceso
void funcion6(void) {
	cout << "Estoy en la funcion 6" <<"\n";
    int n1, n2;

    cout << "digite el primer numero: ";
    cin >> n1;
    cout << "digite el segundo numero: ";
    cin >> n2;
    int inicio = min(n1, n2);
    int fin = max(n1, n2);
    
    for (int n = inicio; n<= fin; n++) {
        cout << n << " ";
    }
    char salir;
 do{

    cout << "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
    cin >> salir;
        
    }while(salir != 's');

}

// daniela funcion 7
//Esta funcion debe llamarse Dibuja, la cual debe dibujar la figura del juego del gato
//      *
//     ***
//    *****
//   *******
//  *********

//Deberas usuar un ciclo for para imprimir las lineas
//Ojo: debe contar con una opción para salir y regresar al menú principal o bien regresar y repetir el proceso
void funcion7(void){
	int i, n, j;
    cout<<"Introduce la altura del triangulo: ";
    cin>>n;
    char salir;
    do{
    	for(i=1; i<=n; i++){
    	    for(j=1; j<=n-i; j++)
    		printf(" "); 
    	    for(j=1; j<=2*i-1; j++)
    	    printf ("*");
    	    printf ("\n");
    	}

       cout<< "\n \n" << "Para repetir presione cualquier tecla, para regresar al MENU principal presione \'s\' minuscula:_ ";
       cin>>salir;
    }while(salir != 's');   
}

int main()
{

    int opc = 0;
    do{
        limpiar_pantalla();
        cout << "*********************** MENU PRINCIPAL *****************************\n\n\n\n\n\n\n";
        cout << "1 suma de numeros\n";
        cout << "2 multiplicando por 2\n";
        cout << "3 Tablas de Multiplicar\n";
        cout << "4 suma de numeros impares\n";
        cout << "5 casa de cambio\n";
        cout << "6 numeros comprendidos\n";
        cout << "7 dibuja la figura\n";
         cout << "0 Salir\n";
        cout << "\n\n\nSelecciona alguna opcion:_ ";
        cin >> opc;
        limpiar_pantalla();
        switch(opc){
            case 1:
                funcion1();
                break;
            case 2:
                funcion2();
                break;
            case 3:
                funcion3();
                break;
            case 4:
                funcion4();
                break;
            case 5:
                funcion5();
                break;
            case 6:
                funcion6();
                break;
            case 7:
                funcion7();
                break;

        }
    }while(opc != 0);

    return 0;
}
