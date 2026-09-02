#include <stdio.h>
#include "../include/my.h"

void display(info_t info){
    my_putstr("Nom : ");
    my_putstr(info.nom);
    my_putstr("\n");
    my_putstr("Prenom : ");
    my_putstr(info.prenom);
    my_putstr("\n");
    my_putstr("Age : ");
    my_putnbr(info.age);
    my_putstr("\n");
    my_putstr("Profession : ");
    my_putstr(info.status.profession);
    my_putstr("\n");
    my_putstr("Salaire : ");
    my_putnbr(info.status.salaire);
    my_putstr("\n");
    my_putstr("Entreprise : ");
    my_putstr(info.status.entreprise.nom_entreprise);
    my_putstr("\n");
    my_putstr("Nb employes : ");
    my_putnbr(info.status.entreprise.nb_employe);
    my_putstr("\n");
    my_putstr("PDG : ");
    my_putstr(info.status.entreprise.nom_pdg);
    my_putstr("\n");
}

info_t create(void){
    info_t info;
    my_putstr("Nom : ");
    info.nom = askstr();
    my_putstr("Prenom : ");
    info.prenom = askstr();
    my_putstr("Age : ");
    info.age = askint();
    my_putstr("Profession : ");
    info.status.profession = askstr();
    my_putstr("Salaire : ");
    info.status.salaire = askint();
    my_putstr("Entreprise : ");
    info.status.entreprise.nom_entreprise = askstr();
    my_putstr("Nb employes : ");
    info.status.entreprise.nb_employe = askint();
    my_putstr("PDG : ");
    info.status.entreprise.nom_pdg = askstr();
    return info;
}
