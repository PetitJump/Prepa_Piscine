#ifndef MY_H_
    #define MY_H_

typedef struct {
    char *nom_entreprise;
    int nb_employe;
    char *nom_pdg;
} entreprise_t;

typedef struct {
    char *profession;
    int salaire;
    entreprise_t entreprise;

} statut_t;

typedef struct{
    char *nom;
    char *prenom;
    int age;
    statut_t status;
} info_t;

#endif