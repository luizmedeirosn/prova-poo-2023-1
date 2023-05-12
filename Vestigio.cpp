#include "Vestigio.h"

Vestigio::Vestigio(std::string nome, bool evidencia) {
    setNome(nome);
    setEvidencia(evidencia);
}
std::string Vestigio::getNome() const {
    return nome;
}
void Vestigio::setNome(std::string nome) {
    this->nome = nome;
}

bool Vestigio::getEvidencia() const {
    return evidencia;
}
void Vestigio::setEvidencia(bool evidencia) {
    this->evidencia = evidencia;
}