// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void affichageLigne(int grille[9][9]) {
    for (int i = 0;i < 9;i++) {
        for (int j = 0;j < 9;j++) {
            cout << grille[i][j] << " | ";
        }
        cout << endl;

    }
}

void initGrille(int grille[9][9]) {
    for (int i = 0;i < 9;i++) {
        for (int j = 0;j < 9;j++) {
            grille[i][j] = 0;
        }
    }
}

/*
void remplissageGrille(int grille[9][9]) {
    bool continuer = true;
    string rep = "";
    int x = 0;
    int y = 0;
    int nombr = 0;
    while (continuer) {
        cout << "Voulez vous rentrez une valeur ?";
        cin >> rep;
        if (rep == "o") {
            cout << "Quel position ? => x y" << endl;
            cout << "x";
            cin >> x;
            cout << "y";
            cin >> y;
            cout << "Quel valeur?" << endl;
            cin >> nombr;
            grille[y - 1][x - 1] = nombr;
            continuer = true;
        }
        else {
            continuer = false;
        }
    }
}
*/

void remplissageGrille(int grille[9][9]) {
    grille[0][0] = 7;
    grille[0][1] = 6;
    grille[0][2] = 0;
    grille[0][3] = 0;
    grille[0][4] = 0;
    grille[0][5] = 0;
    grille[0][6] = 0;
    grille[0][7] = 9;
    grille[0][8] = 2;
    grille[1][0] = 0;
    grille[1][1] = 1;
    grille[1][2] = 0;
    grille[1][3] = 0;
    grille[1][4] = 6;
    grille[1][5] = 0;
    grille[1][6] = 0;
    grille[1][7] = 0;
    grille[1][8] = 0;
    grille[2][0] = 9;
    grille[2][1] = 0;
    grille[2][2] = 0;
    grille[2][3] = 0;
    grille[2][4] = 0;
    grille[2][5] = 7;
    grille[2][6] = 0;
    grille[2][7] = 5;
    grille[2][8] = 0;
    grille[3][0] = 0;
    grille[3][1] = 0;
    grille[3][2] = 0;
    grille[3][3] = 0;
    grille[3][4] = 4;
    grille[3][5] = 9;
    grille[3][6] = 2;
    grille[3][7] = 0;
    grille[3][8] = 0;
    grille[4][0] = 6;
    grille[4][1] = 0;
    grille[4][2] = 2;
    grille[4][3] = 5;
    grille[4][4] = 0;
    grille[4][5] = 0;
    grille[4][6] = 0;
    grille[4][7] = 0;
    grille[4][8] = 0;
    grille[5][0] = 5;
    grille[5][1] = 0;
    grille[5][2] = 0;
    grille[5][3] = 0;
    grille[5][4] = 0;
    grille[5][5] = 0;
    grille[5][6] = 0;
    grille[5][7] = 3;
    grille[5][8] = 1;
    grille[6][0] = 3;
    grille[6][1] = 0;
    grille[6][2] = 0;
    grille[6][3] = 2;
    grille[6][4] = 1;
    grille[6][5] = 0;
    grille[6][6] = 0;
    grille[6][7] = 5;
    grille[6][8] = 4;
    grille[7][0] = 1;
    grille[7][1] = 0;
    grille[7][2] = 0;
    grille[7][3] = 0;
    grille[7][4] = 0;
    grille[7][5] = 6;
    grille[7][6] = 0;
    grille[7][7] = 2;
    grille[7][8] = 0;
    grille[8][0] = 0;
    grille[8][1] = 0;
    grille[8][2] = 4;
    grille[8][3] = 0;
    grille[8][4] = 0;
    grille[8][5] = 0;
    grille[8][6] = 0;
    grille[8][7] = 0;
    grille[8][8] = 9;
}
void remplissageGrilleValide(int grille[9][9]){
    grille[0][0]=1;
    grille[0][1]=6;
    grille[0][2]=2;
    grille[0][3]=8;
    grille[0][4]=5;
    grille[0][5]=7;
    grille[0][6]=4;
    grille[0][7]=9;
    grille[0][8]=3;
    grille[1][0]=5;
    grille[1][1]=3;
    grille[1][2]=4;
    grille[1][3]=1;
    grille[1][4]=2;
    grille[1][5]=9;
    grille[1][6]=6;
    grille[1][7]=7;
    grille[1][8]=8;
    grille[2][0]=7;
    grille[2][1]=8;
    grille[2][2]=9;
    grille[2][3]=6;
    grille[2][4]=4;
    grille[2][5]=3;
    grille[2][6]=5;
    grille[2][7]=2;
    grille[2][8]=1;
    grille[3][0]=4;
    grille[3][1]=7;
    grille[3][2]=5;
    grille[3][3]=3;
    grille[3][4]=1;
    grille[3][5]=2;
    grille[3][6]=9;
    grille[3][7]=8;
    grille[3][8]=6;
    grille[4][0]=9;
    grille[4][1]=1;
    grille[4][2]=3;
    grille[4][3]=5;
    grille[4][4]=8;
    grille[4][5]=6;
    grille[4][6]=7;
    grille[4][7]=4;
    grille[4][8]=2;
    grille[5][0]=6;
    grille[5][1]=2;
    grille[5][2]=8;
    grille[5][3]=7;
    grille[5][4]=9;
    grille[5][5]=4;
    grille[5][6]=1;
    grille[5][7]=3;
    grille[5][8]=5;
    grille[6][0]=3;
    grille[6][1]=5;
    grille[6][2]=6;
    grille[6][3]=4;
    grille[6][4]=7;
    grille[6][5]=8;
    grille[6][6]=2;
    grille[6][7]=1;
    grille[6][8]=9;
    grille[7][0]=2;
    grille[7][1]=4;
    grille[7][2]=1;
    grille[7][3]=9;
    grille[7][4]=3;
    grille[7][5]=5;
    grille[7][6]=8;
    grille[7][7]=6;
    grille[7][8]=7;
    grille[8][0]=8;
    grille[8][1]=9;
    grille[8][2]=7;
    grille[8][3]=2;
    grille[8][4]=6;
    grille[8][5]=1;
    grille[8][6]=3;
    grille[8][7]=5;
    grille[8][8]=4;

}

void remplissageGrilleJeu(int grille[9][9]) {
    grille[0][4] = 6;
    grille[0][5] = 8;
    grille[0][6] = 5;
    grille[0][8] = 4;
    grille[1][0] = 5;
    grille[1][1] = 3;
    grille[1][2] = 4;
    grille[1][3] = 1;
    grille[1][4] = 2;
    grille[1][5] = 9;
    grille[1][6] = 6;
    grille[1][7] = 7;
    grille[1][8] = 8;
    grille[2][0] = 7;
    grille[2][1] = 8;
    grille[2][2] = 9;
    grille[2][3] = 6;
    grille[2][4] = 4;
    grille[2][5] = 3;
    grille[2][6] = 5;
    grille[2][7] = 2;
    grille[2][8] = 1;
    grille[3][0] = 4;
    grille[3][1] = 7;
    grille[3][2] = 5;
    grille[3][3] = 3;
    grille[3][4] = 1;
    grille[3][5] = 2;
    grille[3][6] = 9;
    grille[3][7] = 8;
    grille[3][8] = 6;
    grille[4][0] = 9;
    grille[4][1] = 1;
    grille[4][2] = 3;
    grille[4][3] = 5;
    grille[4][4] = 8;
    grille[4][5] = 6;
    grille[4][6] = 7;
    grille[4][7] = 4;
    grille[4][8] = 2;
    grille[5][0] = 6;
    grille[5][1] = 2;
    grille[5][2] = 8;
    grille[5][3] = 7;
    grille[5][4] = 9;
    grille[5][5] = 4;
    grille[5][6] = 1;
    grille[5][7] = 3;
    grille[5][8] = 5;
    grille[6][0] = 3;
    grille[6][1] = 5;
    grille[6][2] = 6;
    grille[6][3] = 4;
    grille[6][4] = 7;
    grille[6][5] = 8;
    grille[6][6] = 2;
    grille[6][7] = 1;
    grille[6][8] = 9;
    grille[7][0] = 2;
    grille[7][1] = 4;
    grille[7][2] = 1;
    grille[7][3] = 9;
    grille[7][4] = 3;
    grille[7][5] = 5;
    grille[7][6] = 8;
    grille[7][7] = 6;
    grille[7][8] = 7;
    grille[8][0] = 8;
    grille[8][1] = 9;
    grille[8][2] = 7;
    grille[8][3] = 2;
    grille[8][4] = 6;
    grille[8][5] = 1;
    grille[8][6] = 3;
    grille[8][7] = 5;
    grille[8][8] = 4;

}

bool verif(int grille[9][9]) {
    bool rep = true;
    int result = 0;
    int i = 0;
    while(result && i<9){
        result = 0;
        for (int j = 0;j < 9;j++) {
            result += grille[i][j];
        }
        if (result != 45) {
            rep = false;
        }
        i++;
        cout << endl;
    }
    rep = true;
    while (result && i < 9) {
        result = 0;
        for (int j = 0;j < 9;j++) {
            result += grille[j][i];
        }
        if (result != 45) {
            rep = false;
        }
        i++;
        cout << endl;
    }

    return rep;
}

void remplissageAleatoire(int grille[9][9]) {
    for (int i = 0;i < 9;i++) {
        for (int j = 0;j < 9;j++) {
            if (grille[i][j] == 0) {
                grille[i][j] = rand() % 9 + 1;
            }
        }
    }
}

//Regarder pour chaque case le nb de valeur possible
//Commencer par le nb de valeur possible le plus bas 
//Mettre la valeur possible la plus basse ex => si il y a possibilite de mettre [2,4,5,6,8] mettre 2
//Passer à la case suivante par ordre de possibilité et faire la même chose.
//Continuer jusqu'à ce qu'il y ait blocage et quand il y a blocage revenir à la case précédente

int main()
{
    srand((unsigned int)time(0));

    int grille[9][9];
    initGrille(grille);
    remplissageGrille(grille);
    affichageLigne(grille);
    int i = 0;
    while (verif(grille)) {
        remplissageGrille(grille);
        remplissageAleatoire(grille);
        i++;
        cout << "Essai " << i << endl;
    }
    affichageLigne(grille);
    return 0;

}