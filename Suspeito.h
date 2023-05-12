#ifndef SUSPEITO_H
#define SUSPEITO_H

#include "Pessoa.h"

class Suspeito: public Pessoa {
    private:
        bool indiciado;

    public:
        Suspeito(std::string nome, std::string id, bool indiciado) : Pessoa(nome, id), indiciado(indiciado){}
        virtual std::string quemSou();
};
#endif