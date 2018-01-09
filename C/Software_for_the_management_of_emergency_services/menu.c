/*
  Le module menu.c contient tous les menus du programme.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "alerte.h"
#include "unite.h"
/*
  La fonction menuGlobal(); sert pour l'affichage de menu principal.
  @params: aucun
  retourne: void
*/
void menuGlobal(){
  printf("╔════════════════════════════════════════╗\n");
  printf("║                                        ║\n");
  printf("║     GESTION GLOBALISEE DES SECOURS     ║\n");
  printf("║                                        ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║    ║                                   ║\n");
  printf("║ 1  ║ Déclenchement d'une alerte        ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 2  ║ Nouvelle alerte                   ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 3  ║ Créer une unité                   ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 4  ║ Traitement des alertes            ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 5  ║ Gestion des unités                ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 6  ║ Consultation des unités déployées ║\n");
  printf("║    ║                                   ║\n");
  printf("╠════╬═══════════════════════════════════╣\n");
  printf("║ -1 ║ Quitter                           ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}
/*
  La fonction menuTraitementAlerte(); sert pour l'affichage de sous-menu de gestion d'alertes.
  @params: aucun
  retourne: void
*/
void menuTraitementAlerte() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                                        ║\n");
  printf("║        TRAITEMENT D'UNE ALERTE         ║\n");
  printf("║                                        ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║    ║                                   ║\n");
  printf("║ 1  ║ Afficher une alerte               ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 2  ║ Modifier une alerte               ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 3  ║ Afficher toutes les alertes       ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 4  ║ Supprimer une alerte              ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 5  ║ Sauvegarder les données           ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 6  ║ Charger les données du fichier    ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 7  ║ Les alertes traitées par unités   ║\n");
  printf("║    ║                                   ║\n");
  printf("╠════╬═══════════════════════════════════╣\n");
  printf("║ -2 ║ Retourner                         ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}
/*
  La fonction menuNiveauAlerte(); sert pour l'affichage du choix du niveau d'alerte
  à l'utilisateur pour la saisie.
  @params: aucun
  retourne: void
*/
void menuNiveauAlerte() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                                        ║\n");
  printf("║                 NIVEAU                 ║\n");
  printf("║                                        ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║    ║                                   ║\n");
  printf("║ 1  ║ NOMINAL                           ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 2  ║ URGENT                            ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 3  ║ URGENCE ABSOLUE                   ║\n");
  printf("║    ║                                   ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}
/*
  La fonction menuTypeAlerte(); sert pour l'affichage du choix du niveau d'alerte
  à l'utilisateur pour la saisie.
  @params: aucun
  retourne: void
*/
void menuTypeAlerte() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                                        ║\n");
  printf("║                  TYPE                  ║\n");
  printf("║                                        ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║    ║                                   ║\n");
  printf("║ 1  ║ INCENDIE                          ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 2  ║ ACCIDENT DE LA ROUTE              ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 3  ║ ACCIDENT EN MER                   ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 4  ║ ACCIDENT EN MONTAGNE              ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 5  ║ MALAISE                           ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 6  ║ EXPLOSION                         ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 7  ║ ACCIDENT DE LA VIE                ║\n");
  printf("║    ║                                   ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}
/*
  La fonction menuTraitementUnite(); sert pour l'affichage de sous-menu de gestion
  des unités.
  @params: aucun
  retourne: void
*/
void menuTraitementUnite() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                                        ║\n");
  printf("║            GESTION DES UNITES          ║\n");
  printf("║                                        ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║    ║                                   ║\n");
  printf("║ 1  ║ Afficher une unité                ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 2  ║ Afficher toutes les unités        ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 3  ║ Modifier une unité                ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 4  ║ Supprimer une unité               ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 5  ║ Sauvegarder les données           ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 6  ║ Charger les données du fichier    ║\n");
  printf("║    ║                                   ║\n");
  printf("╠════╬═══════════════════════════════════╣\n");
  printf("║ -2 ║ Retourner                         ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}
/*
  La fonction menuDeplacementUnite(); sert pour l'affichage du choix du moyen
  de deplacement d'une unité à l'utilisateur pour la saisie.
  @params: aucun
  retourne: void
*/
void menuDeplacementUnite() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                                        ║\n");
  printf("║          MOYEN DE DEPLACEMENT          ║\n");
  printf("║                                        ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║    ║                                   ║\n");
  printf("║ 1  ║ ROUTE                             ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 2  ║ AIR                               ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 3  ║ MER                               ║\n");
  printf("║    ║                                   ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}
/*
  La fonction menuDisponibiliteUnite(); sert pour l'affichage du choix du niveau
  de disponibilité d'une unité à l'utilisateur pour la saisie.
  @params: aucun
  retourne: void
*/
void menuDisponibiliteUnite() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                                        ║\n");
  printf("║         NIVEAU DE DISPONIBILITE        ║\n");
  printf("║                                        ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║    ║                                   ║\n");
  printf("║ 1  ║ ACTIVE                            ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 2  ║ EN REPOS                          ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 3  ║ EN REAPROVISIONNEMENT             ║\n");
  printf("║    ║                                   ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}
/*
  La fonction menuStatutUnite(); sert pour l'affichage du choix du statut d'une
  unité à l'utilisateur pour la saisie.
  @params: aucun
  retourne: void
*/
void menuStatutUnite() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                                        ║\n");
  printf("║                 STATUT                 ║\n");
  printf("║                                        ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║    ║                                   ║\n");
  printf("║ 1  ║ EN ALERTE                         ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 2  ║ EN ROUTE                          ║\n");
  printf("║    ║                                   ║\n");
  printf("║ 3  ║ SUR OPERATION                     ║\n");
  printf("║    ║                                   ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}

void menuCaseForceMajeur() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║         CAS DE FORCE MAJEURE           ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║ 1  ║ FAIRE INTERVENIR UNITES EN REPOS  ║\n");
  printf("╠════╬═══════════════════════════════════╣\n");
  printf("║ -2 ║ Retourner                         ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}
/*
  La fonction menuGestionUniteDeployee(); sert pour l'affichage du choix
  pour la gestion des unités deployées à l'utilisateur pour la saisie.
  @params: aucun
  retourne: void
*/
void menuGestionUniteDeployee() {
  printf("╔════════════════════════════════════════╗\n");
  printf("║                                        ║\n");
  printf("║       GESTION DES UNITES DEPLOYEES     ║\n");
  printf("║                                        ║\n");
  printf("╠════╦═══════════════════════════════════╣\n");
  printf("║    ║                                   ║\n");
  printf("║ 1  ║ Finir la mission d'unité          ║\n");
  printf("║    ║                                   ║\n");
  printf("╠════╬═══════════════════════════════════╣\n");
  printf("║ -2 ║ Retourner                         ║\n");
  printf("╚════╩═══════════════════════════════════╝\n");
}
/* La fonction libererMemoireAlerte(); libere la memoire de la structure Alerte.
  @params: aucun
  retourne: void */
void libererMemoireAlerte(Alerte **alerte) {
  if ((*alerte) != NULL) {
    free((*alerte));
    (*alerte) = NULL;
  }
}
/* La fonction libererMemoireAlerte(); libere la memoire de la structure Unite.
  @params: aucun
  retourne: void */
void libererMemoireUnite(Unites **unite) {
  if ((*unite) != NULL) {
    free((*unite));
    (*unite) = NULL;
  }
}

void afficherAlerte(Alerte alerte) {
  int i = 0;
  printf("\n");
  printf("Code d'alerte : %d\n", alerte.iCode);
  printf("Type d'alerte : %s", alerte.cType);
  printf("Niveau d'alerte : %s", alerte.cNiveau);
  printf("Lieu : %s", alerte.cLieu);
  printf("Nombre de victimes : %d\n", alerte.iNombreVictimes);
  printf("Description : %s", alerte.cDescription);
  printf("Les unités deployés : %d\n", alerte.iNbUniteQuiTraite);
  if (alerte.iNbUniteQuiTraite != 0) {
      for (i = 0; i < alerte.iNbUniteQuiTraite; i++) {
        printf("%d\n", alerte.iCodeUniteQuiTraite[i]);
      }
  }
}

void afficherUnite(Unites unite) {
  printf("\n");
  printf("Code d'unité : %d\n", unite.iCode);
  printf("Nom d'unité : %s", unite.cNom);
  printf("Moyen de deplacement : %s", unite.cMoyenDeplacement);
  printf("Disponibilité : %s", unite.cNiveauDisponibilite);
  printf("Statut : %s", unite.cStatut);
  printf("Base : %s", unite.cBase);
  printf("Deployée sur les alertes : %d\n", unite.iDeployeeSurAlerte);
}
