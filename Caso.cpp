#include "Caso.h"

#include <iostream>

Caso::~Caso() {
    pessoas.clear();
    vestigios.clear();
    std::cout << "Desalocadas as estruturas pessoas e vestigios do |CASO " << identificao << "|!" << std::endl;
}

void Caso::inserirPessoa(Pessoa *p) {
    pessoas.push_back(p);
}

void Caso::removerPessoa(Pessoa *p) {
    for (int i = 0; i < pessoas.size(); i++) {
        if (p->getId() == pessoas.at(i)->getId()) {
            pessoas.erase(pessoas.begin() + i);
        }
    }
}

void Caso::inserirVestigio(Vestigio *v) {
    vestigios.push_back(v);
}

void Caso::removerVestigio(Vestigio *v) {
    for (int i = 0; i < vestigios.size(); i++) {
        if (v->getNome() == vestigios.at(i)->getNome()) {
            vestigios.erase(vestigios.begin() + i);
        }
    }
}
        
std::ostream & operator << (std::ostream &cout, Caso &caso) {
    cout << std::endl << "Idenficação do CASO: " << caso.identificao << std::endl;
    cout << "Data do CASO: " << caso.data << std::endl;

    cout << "-------------------------------------------" << std::endl;
    cout << "Pessoas envolvidas no CASO:" << std::endl;
    for (int i = 0; i < caso.pessoas.size(); i++) {
        cout << "           " << caso.pessoas.at(i)->quemSou() << std::endl;
    }
    cout << "-------------------------------------------" << std::endl;

    cout << "-------------------------------------------" << std::endl;
    cout << "Vestígios do CASO:" << std::endl;
    for (int i = 0; i < caso.vestigios.size(); i++) {
        cout << "           " << caso.vestigios.at(i)->getTipo() << std::endl;
    }
    cout << "-------------------------------------------" << std::endl;

    return cout;
}