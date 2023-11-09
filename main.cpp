/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 09 de noviembre 2023
*/

/*
* Proyecto para Pensamiento Computacional Orientado a Objetos
Es un programa que proporciona información acerca de tres tipos de plantas 
(flores, plantas medicinales y árboles frutales) y puede calcular la cantidad 
de agua que necesitan las flores en cada estación del año (input del usuario) y cuánto miden los 
árboles frutales de acuerdo a su edad (input del usuario)*/

//Bibliotecas 
#include <iostream>
#include <string>
#include "Flores.h" // Clase 1: Flores
#include "Medicinales.h" // Clase 2: Plantas medicinales
#include "Fruit.h" // Árboles frutales

//Función imprime menú
void menu(){
    std::cout << "\nMenu: " << std::endl;
    std::cout << "1) Flowers" << std::endl;
    std::cout << "2) Medicinal plants" <<std::endl;
    std::cout << "3) Fruit trees" <<std::endl;
    std::cout << "4) Exit" <<std::endl;
}

int main(){
    int res, res1, res2, res3, edad; //variables enteros
    std::string temporada; //variable de estación del año
    bool continua = true; //variable para ciclar el programa

    // Objetos clase 1:
    Flores flor1("red", 2, "Rose bush", 15.0);
    Flores flor2("white", 3, "Gardenia", 0.016);
    Flores flor3("purple", 4, "Tulip", 2.0 );

    // Objetos clase 2:
    Medicinales planta1("Arnica", "Europe", "Anti-inflamatory"); 
    Medicinales planta2("Peppermint","Western Europe", "Gastrointestinal diseases");
    Medicinales planta3("Aloe Vera","Africa", "Burns and wounds");

    //Objetos clase 3:
    Fruit frutal1("Peach","Tree","July-August", 0); 
    Fruit frutal2("Orange","Tree","September-April", 0);
    Fruit frutal3("Cherry","Tree","March-April", 0);

    //Ciclo para que el sistema siga corriendo mientras no se elija la opción "Exit"
    while (continua == true)
    {    
    
    menu(); //Impresión del menu
    std::cin >> res; // Guardar la opción seleccionada del menu

    //Dependiendo del input, se realizan ciertas operaciones
    if (res == 1){ // Opción "Flowers"
        std::cout << "Flowers. What do you want to know?" << std::endl << "1) Flower 1" << std::endl << "2) Flower 2"<< std::endl << "3) Flower 3" << std::endl << "4) Irrigation" << std::endl;
        std::cin >> res1; 
        if (res1 == 1){
            std::cout << "The flower 1 is " << flor1.get_color() << std::endl;
            std::cout << "The flower 1 is " << flor1.get_edad() << " years old" << std::endl;
            std::cout << "The flower 1 is " << flor1.get_nombre() << std::endl;     
        }
        else if (res1 == 2){
            std::cout << "The flower 2 is " << flor2.get_color() << std::endl;
            std::cout << "The flower 2 is " << flor2.get_edad() << " years old" << std::endl;
            std::cout << "The flower 2 is " << flor2.get_nombre() << std::endl; 
        }
        else if (res1 == 3){
            std::cout << "The flower 3 is " << flor3.get_color() << std::endl;
            std::cout << "The flower 3 is " << flor3.get_edad() << " years old" << std::endl;
            std::cout << "The flower 3 is " << flor3.get_nombre() << std::endl;
        }
        else if (res1 == 4){
            std::cout << "Season" << std::endl; 
            std::cin >> temporada;
            flor1.riego(temporada);
            flor2.riego(temporada);
            flor3.riego(temporada);
            std::cout << "The flower 1 needs " << flor1.get_litros() << " liters per week" << std::endl;
            std::cout << "The flower 2 needs " << flor2.get_litros() <<  " liters per week" << std::endl;
            std::cout << "The flower 3 needs " << flor3.get_litros() <<  " liters per week" << std::endl;
        }
    }
    else if (res == 2){ //Opción "Medicinal plants"
        std::cout << "Medicinal plants. What do you want to know?" << std::endl <<"1) Plant 1" << std::endl << "2) Plant 2" << std::endl << "3) Plant 3" << std::endl;
        std::cin >> res2;
        if (res2 == 1){
            std::cout << "The plant is " << planta1.get_nombre() << std::endl;
            std::cout << "It is from " << planta1.get_origen() << std::endl;
            std::cout << "It is " << planta1.get_uso() << std::endl;
        }
        else if (res2 == 2){
            std::cout << "The plant is " << planta2.get_nombre() << std::endl;
            std::cout << "It is from " << planta2.get_origen() << std::endl;
            std::cout << "It helps with " << planta2.get_uso() << std::endl;
        }
        else if (res2 == 3){
            std::cout << "The plant is " << planta3.get_nombre() << std::endl;
            std::cout << "It is from " << planta3.get_origen() << std::endl;
            std::cout << "It helps with " << planta3.get_uso() << std::endl;
        }
    }  
    else if (res == 3){ // Opcion "Fruit trees"
        std::cout << "Fruit trees. What do you want to know?" << std::endl <<"1) Fruit plant 1" << std::endl << "2) Fruit plant 2" << std::endl << "3) Fruit plant 3" << std::endl << "4) Height" << std::endl;
        std::cin >> res3;
        if (res3 == 1){
            std::cout << "The plant is " << frutal1.get_name() << std::endl;
            std::cout << "It is a " << frutal1.get_type() << std::endl;
            std::cout << "It bears fruit on " << frutal1.get_time() << std::endl;
        }
        else if (res3 == 2){
            std::cout << "The plant is " << frutal2.get_name() << std::endl;
            std::cout << "It is a " << frutal2.get_type() << std::endl;
            std::cout << "It bears fruit on " << frutal2.get_time() << std::endl;
        }
        else if (res3 == 3){
            std::cout << "The plant is " << frutal3.get_name() << std::endl;
            std::cout << "It is a " << frutal3.get_type() << std::endl;
            std::cout << "It bears fruit on " << frutal3.get_time() << std::endl;
        }
        else if (res3 == 4){
            std::cout << "Age of the tree: "; 
            std::cin >> edad;
            frutal1.height(edad, 20);
            frutal2.height(edad, 18);
            frutal3.height(edad, 12);
            std::cout << "The Peach tree is " << frutal1.get_altura() << " inches tall" << std::endl;
            std::cout << "The Orange tree is " << frutal2.get_altura() << " inches tall" << std::endl;
            std::cout << "The Cherry tree is " << frutal3.get_altura() << " inches tall" << std::endl;
        }
    } 
    else if (res == 4){ //Opción "Exit"
        std::cout << "Good bye";
        continua = false;
    }
    }
            return 0;
}            
