#ifndef VESTIGIO_H
#define VESTIGIO_H

#include <string>

class Vestigio {
    private:
        Vestigio(){}
        std::string nome;
        bool evidencia;

    public:
        Vestigio(std::string nome, bool evidencia);

        std::string getNome() const;
        void setNome(std::string nome);

        bool getEvidencia() const;
        void setEvidencia(bool evidencia);

        virtual std::string getTipo() const = 0;
};
#endif