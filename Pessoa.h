#ifndef PESSOA_H
#define PESSOA_H


#include <string>


class Pessoa {
    protected:
        Pessoa() {}
        std::string id;
        std::string nome;
    public:
        inline std::string getId() const { return id; }
        inline std::string getNome() const { return nome; }

        Pessoa(std::string nome, std::string id) : nome(nome), id(id) {}
        virtual std::string quemSou() = 0;
};

#endif