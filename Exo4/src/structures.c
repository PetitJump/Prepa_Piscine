#include <stdio.h>

typedef struct {
    char *nom_entreprise;
    int nb_employe;
    char *nom_pdg
} entreprise_t;

typedef struct {
    char *profession;
    int salaire;
    struct entreprise_t;

} statut_t;

typedef struct{
    char *nom;
    char *prenom;
    int age;
    struct statut_t;
} info_t;
