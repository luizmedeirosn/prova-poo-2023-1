#include "Pessoa.h"
#include "Perito.h"
#include "Suspeito.h"
#include "Vestigio.h"
#include "VestigioBiologico.h"
#include "VestigioDigital.h"
#include "VestigioFisico.h"
#include "Caso.h"

#include <iostream>

int main(void) {

    Caso caso1(100, "5:48PM");

    Pessoa *p1 = new Perito("Luiz", "1", "PB");
    Pessoa *p2 = new Suspeito("Medeiros", "2", true);
    caso1.inserirPessoa(p1);
    caso1.inserirPessoa(p2);

    Vestigio *v1 = new VestigioBiologico("Sangue", true);
    Vestigio *v2 = new VestigioDigital("Notebook", true);
    Vestigio *v3 = new VestigioFisico("Faca", false);

    caso1.inserirVestigio(v1);
    caso1.inserirVestigio(v2);
    caso1.inserirVestigio(v3);

    std::cout << caso1 << std::endl;
    
    system("pause");
    caso1.removerPessoa(p2);
    caso1.removerVestigio(v1);

    std::cout << caso1 << std::endl;

    delete p1;
    delete p2;
    delete v1;
    delete v2;
    delete v3;
    return 0;
}