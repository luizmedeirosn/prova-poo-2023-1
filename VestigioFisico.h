#ifndef VESTIGO_FISICO_H
#define VESTIGO_FISICO_H

#include "Vestigio.h"

class VestigioFisico: public Vestigio {
    public:
        VestigioFisico(std::string nome, bool evidencia) : Vestigio(nome, evidencia) {}
        virtual std::string getTipo() const;

};
#endif