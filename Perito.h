#ifndef PERITO_H
#define PERITO_H

#include "Pessoa.h"

class Perito: public Pessoa {
    private:
        std::string localDeTrabalho;

    public:
        Perito(std::string nome, std::string id, std::string localDeTrabalho) : 
        Pessoa(nome, id), localDeTrabalho(localDeTrabalho) {}

        virtual std::string quemSou();
};
#endif