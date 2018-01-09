#ifndef UNITE_H
#define UNITE_H
#include <stdio.h>
/* La partie de define qui decrit les constantes générales */
#define TAILLE_INITIALE_DE_MALLOC_UNITE 3
#define UNITE_EN_REPOS "Disponibilité : EN REPOS"
#define NOM_DE_FICHIER_UNITES "unites.txt"
#define TAILLE_DE_CODE_GENERE_50002 50002
#define CHOIX_MAX_MOYEN_DEPLACEMENT 3
#define CHOIX_MAX_NIVEAU_DISPONIBILITE 3
#define CHOIX_MAX_STATUT_UNITE 3
/* La partie de define qui decrit les constantes de disponibilité */
#define DISPONIBILITE_ACTIVE "ACTIVE\n"
#define DISPONIBILITE_EN_REPOS "EN REPOS\n"
#define DISPONIBILITE_EN_REAPPROVISIONNEMENT "EN REAPPROVISIONNEMENT\n"
/* La partie de define qui decrit les constantes du statut d'unité */
#define STATUT_EN_ALERTE "EN ALERTE\n"
#define STATUT_EN_ROUTE "EN ROUTE\n"
#define STATUT_SUR_OPERATION "SUR OPERATION\n"
/* La partie de define qui decrit les constantes du moyen de deplacement */
#define MOYEN_DEPLACEMEMENT_ROUTE "ROUTE\n"
#define MOYEN_DEPLACEMEMENT_AIR "AIR\n"
#define MOYEN_DEPLACEMEMENT_MER "MER\n"
/* La structure des Unites */
typedef struct {
  int iCode; /* contient le code généré par le programme */
  char cNom[TAILLE_BUFFER]; /* contient le nom d'unité */
  char cMoyenDeplacement[TAILLE_BUFFER]; /* contient le moyen de deplacement */
  char cNiveauDisponibilite[TAILLE_BUFFER]; /* contient le niveau de disponibilité */
  char cStatut[TAILLE_BUFFER]; /* contient le statut d'unité */
  char cBase[TAILLE_BUFFER]; /* contient la base d'unité */
  int iCompteurRepos; /* sert pour compter combien de fois unité a été declanchée en alerte */
  int iEstEnRepos; /* un booléen pour indiquer si l'unité est en repos */
  int iUniteDisponible; /* un booléen pour indiquer si l'unité est disponible */
  int iDeployeeSurAlerte; /* contient le code d'alerte que traitée */
} Unites;

void creerUnite(Unites **unite, int *compteurUnite);
void afficherUneUnite(Unites **unite, int *compteurUnite);
void afficherToutesUnites(Unites **unite, int *compteurUnite);
void modifierUnite(Unites **unite, int *compteurUnite);
void supprimerUnite(Unites **unite, int *compteurUnite);
char * moyenDeplacement();
char * niveauDisponibilite();
char * statutUnite();
int genererCodeUnite();
void mettreUniteEnRepos(Unites **unite, int *iCompteurUnite);
int unitesStatiques(Unites **unite, int *iCompteurUnite, int *iLesUnitesDefinis);
void consulterUnitesDeployees(Unites **unite, int *iCompteurUnite);
void imprimerLesUnites(Unites **unite, int *iCompteurUnite);
void chargerLesUnites(Unites **unite, int *iCompteurUnite);

#endif
