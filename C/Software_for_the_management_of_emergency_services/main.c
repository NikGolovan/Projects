#include <stdio.h>
#include <stdlib.h>

#include "alerte.h"
#include "unite.h"

int main(int argc, char const *argv[]) {
  int iChoix = 0;
  int iCompteurAlerte = 0; /* permet d'acceder au cases du tableau Alerte */
  int iCompteurUnite = 0; /* permet d'acceder au cases du tableau Unites */
  int iLesAlertesDefinis = 0; /* booleen qui sert pour éviter la definition miltiple des alertes statiques */
  int iLesUnitesDefinis = 0; /* booleen qui sert pour éviter la definition miltiple des unites statiques */
  Alerte *alerte = NULL;
  Unites *unite = NULL;

/* sert pour la génération des codes aléatoire */
  srand(time(NULL));

  alerte = malloc(TAILLE_INITIALE_DE_MALLOC_ALERTE  * sizeof(Alerte));

  if (alerte == NULL) {
    printf("Erreur d'allocation mémoire pour alerte\n");
    return(-1);
  }

  /* vérification si les alertes ont été definies */
  if (!iLesAlertesDefinis) {
    alertesStatiques(&alerte, &iCompteurAlerte, &iLesAlertesDefinis);
  }

  unite = malloc(TAILLE_INITIALE_DE_MALLOC_UNITE * sizeof(Unites));

  if (unite == NULL) {
    printf("Erreur d'allocation mémoire pour unite\n");
    return(-1);
  }

  /* vérification si les unités ont été definies */
  if(!iLesUnitesDefinis)
    unitesStatiques(&unite, &iCompteurUnite, &iLesUnitesDefinis);

  do {
    menuGlobal();

    scanf("%d%*c", &iChoix);

    switch (iChoix) {
      case 1:
        declancherAlerte(&alerte, &unite, &iCompteurAlerte, &iCompteurUnite);
        break;
      case 2:
        ajouterAlerte(&alerte, &iCompteurAlerte);
        /* incrementation du iCompteurAlerte après l'ajout */
        iCompteurAlerte++;
        /* si on depasse la taille initiale de malloc, on fait le réalloc */
        if (iCompteurAlerte >= TAILLE_INITIALE_DE_MALLOC_ALERTE)
          alerte = realloc(alerte, ((iCompteurAlerte+1) * sizeof(Alerte)));
        break;
      case 3:
        creerUnite(&unite, &iCompteurUnite);
            /* incrementation du iCompteurUnite après l'ajout */
        iCompteurUnite++;
        /* si on depasse la taille initiale de malloc, on fait le réalloc */
        if (iCompteurUnite >= TAILLE_INITIALE_DE_MALLOC_UNITE)
          unite = realloc(unite, ((iCompteurUnite+1) * sizeof(Unites)));
        break;
      case 4:
      /* sous-menu des alertes */
        do {
          menuTraitementAlerte();

          scanf("%d%*c", &iChoix);

          switch (iChoix) {
            case 1:
              afficherUneAlerte(&alerte, &iCompteurAlerte);
              break;
            case 2:
              modifierAlerte(&alerte, &iCompteurAlerte);
              break;
            case 3:
              afficherToutesAlertes(&alerte, &iCompteurAlerte);
              break;
            case 4:
              supprimerAlerte(&alerte, &iCompteurAlerte);
              break;
            case 5:
              imprimerLesAlertes(&alerte, &iCompteurAlerte);
              break;
            case 6:
              chargerLesAlertes(&alerte, &iCompteurAlerte);
              break;
            case 7:
              lesAlertesTraitee(&alerte, &iCompteurAlerte);
              break;
            case -2:
              break;
            default:
              printf("NOTIFICATION : La saisie n'est pas correcte.\n");
              break;
          }
        } while(iChoix != -2);
        break;
      case 5:
      /* sous-menu des unités */
        do {
          menuTraitementUnite();

          scanf("%d%*c", &iChoix);

          switch (iChoix) {
            case 1:
              afficherUneUnite(&unite, &iCompteurUnite);
              break;
            case 2:
              afficherToutesUnites(&unite, &iCompteurUnite);
              break;
            case 3:
              modifierUnite(&unite, &iCompteurUnite);
              break;
            case 4:
              supprimerUnite(&unite, &iCompteurUnite);
              break;
            case 5:
              imprimerLesUnites(&unite, &iCompteurUnite);
              break;
            case 6:
              chargerLesUnites(&unite, &iCompteurUnite);
              break;
            case -2:
              break;
            default:
              printf("NOTIFICATION : La saisie n'est pas correcte.\n");
              break;
          }
      } while(iChoix != -2);
        break;
      case 6:
        consulterUnitesDeployees(&unite, &iCompteurUnite);
        /* vérification s'il faut mettre les unités en repos */
        mettreUniteEnRepos(&unite, &iCompteurUnite);
        break;
      case -1:
        break;
      default:
        printf("NOTIFICATION : La saisie n'est pas correcte.\n");
        break;
    }
  } while(iChoix != -1);

  /* liberation de la mémoire */
  libererMemoireAlerte(&alerte);
  libererMemoireUnite(&unite);

  return 0;
}
