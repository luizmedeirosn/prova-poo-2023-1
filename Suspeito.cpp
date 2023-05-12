#include "Suspeito.h"

#include <iostream>

std::string Suspeito::quemSou() {
    return + "Sou o Suspeito |" + nome + "| com |id=" +  id  + 
    "| e estou indiciado?=|" + (indiciado? "SIM|" : "NAO|");
}