#include <stdio.h>

struct entreprise_t{
    char *nom_entreprise;
    int nb_employe;
    char *nom_pdg
};

struct statut_t{
    char *profession;
    int salaire;
    struct entreprise_t;

};

struct info_t{
    char *nom;
    char *prenom;
    int age;
    struct statut_t;
};
