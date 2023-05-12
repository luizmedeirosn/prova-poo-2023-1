#ifndef VESTIGIO_DIGITAL_H
#define VESTIGIO_DIGITAL_H

#include "Vestigio.h"

class VestigioDigital: public Vestigio {
    public:
        VestigioDigital(std::string nome, bool evidencia) : Vestigio(nome, evidencia) {}
        virtual std::string getTipo() const ;

};
#endif