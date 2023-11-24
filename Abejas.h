/*
* Proyecto Invernadero
* Frida Arcadia Luna
* A01711615
* 22 de noviembre 2023
*/

#ifndef ABEJAS_H
#define ABEJAS_H
#include <string>

// Clase Abejas (composición de clase Flores)
class Abejas {

    private:
        std::string abejas;

    public:
        Abejas(): abejas(""){};
        Abejas(std::string abe): abejas(abe){};
        void set_abejas(std::string);
        bool get_abejas();
};
 void Abejas::set_abejas(std::string abe){
    abejas = abe;
 }
bool Abejas::get_abejas(){
    if (abejas == "Yes"){
        return true;
    }
    else if (abejas == "No"){
        return false;
    }
}
#endif
