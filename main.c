#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

const int harita[16][16] = {
        {5, 4, 4, 4, 4, 4, 4, 4, 1, 4, 4, 4, 4, 4, 4, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 5},
        {5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 5},
        {5, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 5},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 5},
        {5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {5, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5},
};
typedef struct string string;
int satir_sayisi = 16;
int sutun_sayisi = 16;
char move;
int karakter[2];
int canavar[2];
int engel_c = 27;

void karakter_yukari();

void karakter_asagi();

void karakter_sag();

void karakter_sol();

void canavar_yukari();

void canavar_asagi();

void canavar_sag();

void canavar_sol();

void karakter_olustur();

void canavar_olustur();

void harita_goster();

void canavar_hareket_0();

void canavar_hareket_1();

int main(int argc, char **argv) {
    char move;
    int i, k, t;
    bool bitir=false;
    do{
    printf("zorluk secin 0 veya 1\n");
    scanf("%d", &i);
    karakter_olustur();
    canavar_olustur();
    while (1) {
        harita_goster();
        //karakter[0] <! 0;
        //karakter[1] <! 0;

        printf("x[%d] y[%d]\n\n\n", karakter[0] + 1, karakter[1] + 1);
        printf("sira sizde\n");//oku
        scanf("\n%s", &move);// aldıgın cevaba göre fonksiyon  capır


        switch (move) {
            case 'w':
                karakter_yukari();
                break;
            case 'a':
                karakter_sol();
                break;
            case 's':
                karakter_asagi();
                break;
            case 'd':
                karakter_sag();
                break;
        }
        if (i == 0) {
            canavar_hareket_0();
            if (karakter[1] == canavar[1] + 1 && karakter[0] == canavar[0]) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] - 1 && karakter[0] == canavar[0]) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] && karakter[0] == canavar[0] + 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] && karakter[0] == canavar[0] - 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] + 1 && karakter[0] == canavar[0] - 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] - 1 && karakter[0] == canavar[0] - 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] + 1 && karakter[0] == canavar[0] + 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] - 1 && karakter[0] == canavar[0] + 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] && karakter[0] == canavar[0]) {
                k = 1;
                break;}

        } else if (i == 1) {
            canavar_hareket_1();
            if (karakter[1] == canavar[1] + 1 && karakter[0] == canavar[0]) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] - 1 && karakter[0] == canavar[0]) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] && karakter[0] == canavar[0] + 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] && karakter[0] == canavar[0] - 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] + 1 && karakter[0] == canavar[0] - 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] - 1 && karakter[0] == canavar[0] - 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] + 1 && karakter[0] == canavar[0] + 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] - 1 && karakter[0] == canavar[0] + 1) {
                k = 1;
                break;
            } else if (karakter[1] == canavar[1] && karakter[0] == canavar[0]) {
                k = 1;
                break;}
        }
        if (karakter[1] == 7 && karakter[0] == 0)
            break;
        system("cls");
    }
    if (k == 1)
        printf("\n\n  KAYBETTINIZ  \n\n");
    else
        printf("\n\n  KAZANDINIZ   \n\n");

    printf("\n tekrar baslamak icin 8 girin\n");
    printf("\n bitirmek icin herhangi bir tusa basin");

    scanf("%d",&t);

    if(t == 8){
        system("cls") ;
        bitir=true;}
    else
        bitir=false;

}
 while (bitir);
    system("pause");
    return 0;
}

void harita_goster() {
    printf("\n\n");
    int gecici_harita[sutun_sayisi][satir_sayisi];

    for (int i = 0; i < sutun_sayisi; ++i) {
        for (int j = 0; j < satir_sayisi; ++j) {
            gecici_harita[i][j] = harita[i][j];
        }
    }

    gecici_harita[karakter[1]][karakter[0]] = 2;//karakterin pozisyonunu haritaya ekle K karakteri ile gösterir
    gecici_harita[canavar[1]][canavar[0]] = 3;//canavarın pozisyonunu haritaya ekle C karakteri ile gösterir

    for (int i = 0; i < satir_sayisi; ++i) {
        for (int j = 0; j < sutun_sayisi; ++j) {
            int hucre = gecici_harita[i][j];
            if (hucre == 1) {
                printf(" w", hucre);
            } else if (hucre == 2) {
                printf(" K", hucre);
            } else if (hucre == 3) {
                printf(" C", hucre);
            } else if (hucre == 4) {
                printf(" -", hucre);
            } else if (hucre == 5) {
                printf(" |", hucre);
            } else {
                printf("  ", hucre);
            }

        }
        printf("\n");
    }
    printf("\n\n\n");
}

void karakter_olustur() {

    bool control1 = false;
    do {
        srand(time(NULL));
        karakter[0] = rand() % 16;// X
        karakter[1] = rand() % 16;// Y
        int man = abs(karakter[1] - 7) + abs(karakter[0] - 0);
        control1 = man < 16;
        printf("yukleniyor...", control1);
        system("cls");
    } while (control1);
}

void canavar_olustur() {
    do {
        canavar[0] = rand() % 16;
        canavar[1] = rand() % 16;
    } while (abs(karakter[1] - canavar[1]) + abs((karakter[0] - canavar[0])) < 16);
}

void karakter_yukari() {
    if (harita[karakter[1] - 1][karakter[0]] == 1)
        return;
    if (karakter[1] == 0)
        return;
    karakter[1]--;
}

void karakter_asagi() {
    if (harita[karakter[1] + 1][karakter[0]] == 1)
        return;
    if (karakter[1] == 15)
        return;
    karakter[1]++;
}

void karakter_sag() {
    if (harita[karakter[1]][karakter[0] + 1] == 1)
        return;
    if (karakter[0] == 15)
        return;
    karakter[0]++;
}

void karakter_sol() {
    if (harita[karakter[1]][karakter[0] - 1] == 1)
        return;
    if (karakter[0] == 0)
        return;
    karakter[0]--;
}

void canavar_yukari() {
    if (harita[canavar[1] - 1][canavar[0]] == 1)
        return;
    // if (harita[canavar[1] - 1][canavar[0]] == 2)

    if (canavar[1] == 0)
        return;
    canavar[1]--;
}

void canavar_asagi() {
    if (harita[canavar[1] + 1][canavar[0]] == 1)
        return;
    //if (harita[canavar[1] + 1][canavar[0]] == 2)

    if (canavar[1] == 15)
        return;
    canavar[1]++;
}

void canavar_sag() {
    if (harita[canavar[1]][canavar[0] + 1] == 1)
        return;
    //if (harita[canavar[1]][canavar[0] + 1] == 2)

    if (canavar[0] == 15)
        return;
    canavar[0]++;
}

void canavar_sol() {
    if (harita[canavar[1]][canavar[0] - 1] == 1)
        return;
    //if (harita[canavar[1]][canavar[0] - 1] == 2)

    if (canavar[0] == 0)
        return;
    canavar[0]--;
}

void canavar_hareket_0() {
    srand(time(NULL));
    switch (1 + rand() % 4) {
        case 1:
            canavar_yukari();
            break;
        case 2:
            canavar_asagi();
            break;
        case 3:
            canavar_sag();
            break;
        case 4:
            canavar_sol();
            break;
    }
}

void canavar_hareket_1() {

    bool karakter_sag_alt = karakter[1] > canavar[1] && karakter[0] > canavar[0];
    bool karakter_sol_alt = karakter[1] > canavar[1] && karakter[0] < canavar[0];
    bool karakter_sag_ust = karakter[1] < canavar[1] && karakter[0] > canavar[0];
    bool karakter_sol_ust = karakter[1] < canavar[1] && karakter[0] < canavar[0];
    bool karakter_sag = karakter[1] == canavar[1] && karakter[0] > canavar[0];
    bool karakter_sol = karakter[1] == canavar[1] && karakter[0] < canavar[0];
    bool karakter_alt = karakter[1] > canavar[1] && karakter[0] == canavar[0];
    bool karakter_ust = karakter[1] < canavar[1] && karakter[0] == canavar[0];
    if(karakter_sag_alt) {
        switch (rand() % 2){
            case 0:
                canavar_asagi();
                break;
            case 1:
                canavar_sag();
                break;}
    }
    else if(karakter_sol_alt) {
        switch (rand() % 2){
            case 0:
                canavar_asagi();
                break;
            case 1:
                canavar_sol();
                break;}
    }
    else if(karakter_sag_ust) {
        switch (rand() % 2){
            case 0:
                canavar_yukari();
                break;
            case 1:
                canavar_sag();
                break;}
    }
    else if(karakter_sol_ust) {
        switch (rand() % 2){
            case 0:
                canavar_yukari();
                break;
            case 1:
                canavar_sol();
                break;}
    }
    else if(karakter_sag) {
                canavar_sag();}

    else if(karakter_sol) {
                canavar_sol();}

    else if(karakter_alt) {
                canavar_asagi();}

    else if(karakter_ust) {
                canavar_yukari();}
    }
