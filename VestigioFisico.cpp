#include "VestigioFisico.h"

#include <iostream>

std::string VestigioFisico::getTipo() const {
    return "Vestígio Físico: " + Vestigio::getNome() +
    "-> Edidência: " + (Vestigio::getEvidencia()? "SIM" : "Não"); 
}