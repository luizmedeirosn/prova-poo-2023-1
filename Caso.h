#ifndef CASO_H
#define CASO_H

#include <string>
#include <vector>

#include "Vestigio.h"
#include "Pessoa.h"

class Caso {
    private:
        Caso() {}
        int identificao;
        std::string data;
        std::vector<Pessoa *> pessoas;
        std::vector<Vestigio *> vestigios;

    public:
        friend std::ostream & operator << (std::ostream &cout, Caso &caso);

        Caso(int identificao, std::string data) : identificao(identificao), data(data) {};
        ~Caso();

        void inserirPessoa(Pessoa *p);
        void removerPessoa(Pessoa *p);

        void inserirVestigio(Vestigio *v);
        void removerVestigio(Vestigio *v);
};
#endif
