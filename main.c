#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

typedef struct string string;
int satir_sayisi = 16;
int sutun_sayisi = 16;

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

void harita_olustur();

void karakter_olustur();

void canavar_olustur();

void engel_olustur();

void harita_goster();

void canavar_hareket_0();

int main(int argc, char **argv) {
    char move ;
    int i = 0;
    printf("zorluk secin 0 || 1\n");
    scanf("seviye %d",i);
    karakter_olustur();
    canavar_olustur();
    while (1) {

        harita_goster();

        printf("x[%d] y[%d]\n\n\n", karakter[0]+1, karakter[1]+1);
        printf("sira sizde\n");//oku
        scanf("\n%s",&move);// aldıgın cevaba göre fonksiyon  capır


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
        if (i==0)
        canavar_hareket_0();
        if(karakter[1]==7 && karakter[0]==0)
            break;
        system("cls");
    }
    printf("\n KAZANDINIZ  \n");
    system("pause");
    return 0;
}

void harita_goster() {
    int harita[16][16] = {
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
    harita[karakter[1]][karakter[0]]=2;//karakterin pozisyonunu haritaya ekle K karakteri ile gösterir
    harita[canavar[1]][canavar[0]]=3;//canavarın pozisyonunu haritaya ekle C karakteri ile gösterir

    for (int i = 0; i < satir_sayisi; ++i) {
        for (int j = 0; j < sutun_sayisi; ++j) {
            int hucre = harita[i][j];
            if (hucre == 1) {
                printf(" w", hucre);
            }
            else if (hucre==2){
                printf(" K",hucre);
            }else if (hucre==3){
                printf(" C",hucre);
            }else if (hucre==4) {
                printf(" -", hucre);
            }else if (hucre==5) {
                printf(" |", hucre);
            }else {
                printf("  ", hucre);
            }

        }
        printf("\n");
    }
    printf("\n\n\n");
}

void karakter_olustur() {
    karakter[0] = 15;//X
    karakter[1] = 10;//Y


}

void canavar_olustur() {
    canavar[0] = 2;
    canavar[1] = 5;

}

void karakter_yukari() {
    karakter[1]--;
}

void karakter_asagi() {
    karakter[1]++;
}

void karakter_sag() {
    karakter[0]++;
}

void karakter_sol() {
    karakter[0]--;
}

void canavar_yukari() {
    canavar[1]--;
}

void canavar_asagi() {
    canavar[1]++;
}

void canavar_sag() {
    canavar[0]++;
}

void canavar_sol() {
    canavar[0]--;
}

void engel_olustur() {
    //toplam engel 27

}
void canavar_hareket_0() {
    srand(time(NULL));
    switch (1 + rand()%4){
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