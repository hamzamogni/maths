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