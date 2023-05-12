#include "VestigioDigital.h"

#include <iostream>

std::string VestigioDigital::getTipo() const {
    return "Vestígio Digital: " + Vestigio::getNome() +
    "-> Edidência: " + (Vestigio::getEvidencia()? "SIM" : "Não"); 
}