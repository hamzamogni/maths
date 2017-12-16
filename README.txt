Fichier modifié le 16 décembre 2017 06:59

Nouveautés dans le projet :

    1 - Création de la fonction qui calcule les coeffitients de pascal
    2 - La fonction des coefficients implémente la structure Nombre (donc on eut théoriquement calculer n'importe quelle nombre)
    3 - creation de fonctions de copies de Nombres ainsi que l'initialisation de nombres sepuis un string

Probmèmes avec la fonction des coefficients :
    1 - la fonction tronque au delà de 88, si on lui passe un nombre plus grand que 88 il tronque, une assertion est retournée par malloc
        (fautes de calculs d'addresses, peut-être ! )


*******************************************************************

Fichier crée le 14 Décembre 2017 05:28

Nouveautés dans le code :

    1 - adoption des structures : les nombres sont stockés dans des structures.

    2 - toute la mémoire utilisée a été géré dynamiquement (minimisation de la consommation de la mémoire)

    3 - la fonction d'addition prend des pointeurs comme argument et retourne un pointeur vers l'instance de la structure
        contenant la somme des deux nombres.

    4 - l'addition des deux nombres se fait bit par bit.


*** le programme a été testé avec une entrée de deux nombres  de 4096 chiffres pris de la STDIN (actuellement la limite est
    désormais 4096 chiffres si on lit les nombres du STDIN car la limite du buffer de la STDIN est 4096 bits)

*** Si les nombres sont lu à partir d'un fichier par exemple alors la limite seul est la RAM disponible

*** temps d'éxéction --> moins d'une seconde