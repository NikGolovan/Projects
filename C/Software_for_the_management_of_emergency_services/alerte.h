#ifndef ALERTE_H
#define ALERTE_H
#include <stdio.h>
/* La partie de define qui decrit les constantes générales */
#define TAILLE_INITIALE_DE_MALLOC_ALERTE 3
#define TAILLE_BUFFER 150
#define TAILLE_BUFFER_RETOUR 30
#define NOM_DE_FICHIER_ALERTES "alertes.txt"
#define TAILLE_DE_CODE_GENERE_50001 50001
#define CHOIX_MAX_NIVEAU_ALERTE 3
#define CHOIX_MAX_TYPE_ALERTE 7
/* La partie de define qui decrit les constantes du niveau d'alerte */
#define NIVAU_NOMINAL "NOMINAL\n"
#define NIVAU_URGENT "URGENT\n"
#define NIVAU_URGENCE_ABSOLUE "NOMINAL\n"
/* La partie de define qui decrit les constantes du type d'alerte */
#define TYPE_INCENDIE "INCENDIE\n"
#define TYPE_ACCIDENT_ROUTE "ACCIDENT ROUTE\n"
#define TYPE_ACCIDENT_MER "ACCIDENT_MER\n"
#define TYPE_ACCIDENT_MONTAGNE "ACCIDENT MONTAGNE\n"
#define TYPE_MALAISE "MALAISE\n"
#define TYPE_EXPLOSION "EXPLOSION\n"
#define TYPE_ACCIDENT_DE_LA_VIE "ACCIDENT DE LA VIE\n"
/* La structure des Alertes */
typedef struct {
  int iCode; /* contient le code généré par le programme */
  char cType[TAILLE_BUFFER]; /* contient le type d'alerte */
  char cNiveau[TAILLE_BUFFER]; /* contient le niveau d'alerte */
  char cLieu[TAILLE_BUFFER]; /* contient le lieu d'alerte */
  int iNombreVictimes; /* contient le nombre de victimes */
  char cDescription[TAILLE_BUFFER]; /* contient une description d'alerte */
  int iEstTraiteParUnite; /* un booléen qui indique si alerte est traitée par unité */
  int iNbUniteQuiTraite; /* contient le nombres d'unités deplées sur une alerte */
  int *iCodeUniteQuiTraite; /* contient le code d'unité qui trait alerte */
} Alerte;

void ajouterAlerte(Alerte **alerte, int *compteurAlerte);
void afficherUneAlerte(Alerte **alerte, int *compteurAlerte);
void afficherToutesAlertes(Alerte **alerte, int *compteurAlerte);
void modifierAlerte(Alerte **alerte, int *compteurAlerte);
void supprimerAlerte(Alerte **alerte, int *compteurAlerte);
char * typeAlerte();
char * niveauAlerte();
int genererCodeAlerte(/*Alerte **alerte, int *compteurAlerte*/);
int alertesStatiques(Alerte **alerte, int *iCompteurAlerte, int *iLesAlertesDefinis);
void imprimerLesAlertes(Alerte **alerte, int *iCompteurAlerte);
void chargerLesAlertes(Alerte **alerte, int *iCompteurAlerte);
void lesAlertesTraitee(Alerte **alerte, int *iCompteurAlerte);

#endif
