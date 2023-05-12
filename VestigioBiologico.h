#ifndef VESTIGIO_BIOLOGICO_H
#define VESTIGIO_BIOLOGICO_H

#include "Vestigio.h"

class VestigioBiologico: public Vestigio {
    public:
        VestigioBiologico(std::string nome, bool evidencia) : Vestigio(nome, evidencia) {}
        virtual std::string getTipo() const ;

};
#endif