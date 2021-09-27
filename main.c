#include <stdio.h>

int main() {
/*
    {
        //exercice 1
        //comparer deux nombres
        printf("exercice 1 du TP3 \n");

        int a = 0, b = 0;

        printf("Veuillez rentrer un premier nombre entier : \n");
        scanf(" %d", &a);
        printf("Veuillez rentrer un second nombre entier : \n");
        scanf(" %d", &b);
        if (a == b)
            printf("les deux nombres sont egaux. \n");
        else if (a < b)
            printf("le plus grand nombre saisi est : %d", b);
        else if(a > b)
            printf("le plus grand nombre saisi est : %d", a);
    }


    {
        //exercice 2
        //calcul du périmètre et de l'aire d'un rectangle
        printf("exercice 2 du TP3 \n");

        int longueurRectangle = 0;
        int largeurRectangle = 0;
        int perimetreRectangle = 0;
        int aireRectangle = 0;

        printf("Veuillez renseigner la longueur du rectangle : \n");
        scanf(" %d", &longueurRectangle);
        printf("Veuillez renseigner la largeur du rectangle : \n");
        scanf(" %d", &largeurRectangle);
        perimetreRectangle = 2*largeurRectangle + 2*longueurRectangle;
        aireRectangle = longueurRectangle * largeurRectangle;
        printf("Le perimetre du rectangle est egale a %d et l'aire est egale a %d. \n", perimetreRectangle, aireRectangle);
    }


    {
        //exercice 3
        //multiple de 3
        printf("exercice 3 du TP3 \n");

        int nombre = 0;
        const int diviseur = 3;
        const int Borne = 10;

        printf("Veuillez renseigner un nombre entier : \n");
        scanf(" %d", &nombre);
        if (nombre % diviseur == 0)
        printf("Ce nombre est divisible par %d. \n", diviseur);
        else
        printf("Ce nombre n'est pas divisible par %d. \n", diviseur);
        if (nombre >= Borne)
        printf("De plus, il est plus grand ou egal a %d. \n", Borne);
        else
        printf("De plus, il est plus petit que %d. \n", Borne);
    }


    {
        //exercice 4
        //prix du billet de cinéma en fonction de l'age et du statut
        printf("exercice 4 du TP3 \n");

        int age = 0;
        int etudiant = 0;

        printf("Renseignez votre age : \n");
        scanf(" %d", &age);
        printf("Si vous etes etudiant, entrez 1, sinon 0 : \n");
        scanf(" %d", &etudiant);
        if (age < 12)   //tarif enfant si moins de 12 ans
            printf("tarif enfant (4 euros). \n");
        else if ((age >= 12 && age <= 17) || (etudiant == 1 && age <= 27))  //tarif jeune si de 12 à 17 ans ou étudiant de moins de 27 ans
            printf("tarif jeune (6 euros). \n");
        else if (age >= 65 )    //tarif sénior si plus de 65 ans
            printf("tarif senior (6 euros). \n");
        else    //tarif plein
            printf("plein tarif (9 euros). \n");

    }


    {
        //exercice 5
        //distributeur de boisson
        printf("exercice 5 du TP3 \n");

        int boisson = 0;

        printf("Choisissez une boisson parmi la liste suivante : \n");
        printf("1 : boisson froide 1 \n 2 : boisson froide 2 \n 3 : boisson froide 3 \n 10 : boisson chaude 1 \n 11 : boisson chaude 2 \n" );
        scanf(" %d", &boisson);


        if (boisson == 1)
            printf("boisson froide 1 \n");
        else if (boisson == 2)
            printf("boisson froide 2 \n");
        else if (boisson == 3)
            printf("boisson froide 3 \n");
        else if (boisson == 10)
            printf("boisson chaude 1 \n");
        else if (boisson == 11)
            printf("boisson chaude 2 \n");
        else
            printf("Vous n'avez pas saisi de valeur correcte. \n");
    }


    {
        //exercice 6
        //moyenne de trois notes
        printf("exercice 6 du TP3 \n");

        float note1 = 0.0f, note2 = 0.0f, note3 = 0.0f;
        float moyenne = 0.0f;

        //demander la première note tout le temps qu'elle ne respecte pas les conditions
        //une fois la note correcte, passer à la suivante
        do{
            printf("Veuillez rentrer la premiere note valide : \n");
            scanf(" %f", &note1);
        } while (note1 > 20 || note1 < 0);
        do{
            printf("Veuillez rentrer la deuxieme note valide : \n");
            scanf(" %f", &note2);
        } while (note2 > 20 || note2 < 0);
        do{
            printf("Veuillez rentrer la troisieme note valide : \n");
            scanf(" %f", &note3);
        } while (note3 > 20 || note3 < 0);

        moyenne = (note1 + note2 + note3) / 3;

        printf("La moyenne de ces trois notes est : %f \n", moyenne);
    }


    {
        //exercice 7
        //somme des élèves de toutes les classes
        printf("exercice 7 du TP3 \n");

        int nombreClasses = 0;
        int elevesTotal = 0;
        int elevesPartiel = 0;
        int i = 0;

        printf("Combien y a-t-il de classes ? \n");
        scanf(" %d", &nombreClasses);
        for (i = 1; i <= nombreClasses; i++) {
            printf("Rentrer le nombre d'eleves de la %d eme classe : \n", i);
            scanf(" %d", &elevesPartiel);
            totalEleves = totalEleves + elevesPartiel;
        }
        printf("Il y a %d eleves. \n", totalEleves);
    }


    {
        //exercice 8
        //nombre multiple de 7 et de 2
        printf("exercice 8 du TP3 \n");

        int nombreDivisible = 1;

        while( nombreDivisible % 2 != 0 || nombreDivisible % 7 != 0 )
        {
            printf("saisir un nombre entier : \n");
            scanf(" %d", &nombreDivisible);
        }
        printf("%d est divisible par 2 et par 7. \n", nombreDivisible);
    }


    {
        //exercice 9
        //nombre d'étages de pyramide en fonction du nombre de pierres
        printf("exercice 9 du TP3 \n");

        int nombreBlocs = 0;
        int sommeBlocs = 0;
        int compteurEtages = 0;

        printf("Entrez le nombre de blocs disponibles: \n");
        scanf(" %d", &nombreBlocs);
        while( sommeBlocs <= nombreBlocs )
        {
            sommeBlocs = (sommeBlocs * sommeBlocs) + ((sommeBlocs + 1) * (sommeBlocs + 1));
            compteurEtages = compteurEtages + 1;
        }
        printf("On peut faire %d etages \n", compteurEtages - 1);
    }

*/
    {
        //exercice 10
        //calcul de la moyenne de nombres saisis arrêté par un nombre négatif
        printf("exercice 10 du TP3 \n");

        int nombreSaisi = 0, somme = 0, compteur = 0;
        float moyenneNombres = 0.0f;

        while( nombreSaisi >= 0)
        {
            printf("Entrez un nombre entier positif : \nPour arreter, entrez un nombre negatif. \n");
            scanf(" %d", &nombreSaisi);
            if (nombreSaisi >= 0)
            {
                somme = somme + nombreSaisi;
                compteur++;
            }

        }
        if(compteur == 0)
            printf("Il n'y a pas eu de valeurs de saisies. \n");
        else if(compteur > 0)
        {
            moyenneNombres = somme / compteur;
            printf("La moyenne des nombres saisis est : %f. \n", moyenneNombres);
        }

    }


    return 0;
}
