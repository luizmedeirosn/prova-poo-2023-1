#include "VestigioBiologico.h"

#include <iostream>

std::string VestigioBiologico::getTipo() const {
    return "Vestígio Biológico: " + Vestigio::getNome() + 
    "-> Edidência: " + (Vestigio::getEvidencia()? "SIM" : "Não"); 
}