#include <stdio.h>
#include<stdlib.h>
#include <math.h>


int Digertabanlaribul(int);
int Onlukbul(int);

int main() {
    while (1)
    {


        int n, taban, secenek;

        printf("1- 10'luk tabandan cevir\n");
        printf("2- 10'luk tabana cevir\n");
        printf("3- cikis\n");
        scanf_s("%d", &secenek);
        if (secenek > 3) {
            printf("lutfen gecerli bir secim yapiniz\n");          
        }
        else if (secenek < 1) {
            printf("lutfen gecerli bir secim yapiniz\n");
        }
        
        switch (secenek)
        {
        case 1:
            printf("Onluk tabanda bir sayi giriniz: ");
            scanf_s("%d", &n);
            printf("taban giriniz: ");
            scanf_s("%d", &taban);
            if (taban > 10)
            {
                printf("hatali giris yaptiniz lutfen 10'dan kucuk bir sayi giriniz: ");
                scanf_s("%d", &taban);
            }
            printf("%d = sayinin %d'lik tabanda karsiligi %d\n", n, taban, Digertabanlaribul(n, taban));
            printf("Ana menuye donmek icin bir tusa basin");
            getch();
            system("cls");
            break;
            
            
        case 2:
            printf("taban giriniz: ");
            scanf_s("%d", &taban);
            if (taban > 10)
            {
                printf("hatali giris yaptiniz lutfen 10'dan kucuk bir sayi giriniz: ");
                scanf_s("%d", &taban);
            }
            printf("onluk tabana cevirmek istediginiz sayiyi giriniz: ");
            scanf_s("%d", &n);
            printf("%d = sayinin 10'luk tabanda karsiligi %d\n", n, Onlukbul(n, taban));
            printf("Ana menuye donmek icin bir tusa basin");
            getch();
            system("cls");
            break;
            
        case 3:
            exit(1);
            break;
        }
        
    }
    
}


int Digertabanlaribul(int n, int taban) {
    int sayi = 0, i = 0, gecici;

    while (n != 0) {
        gecici = n % taban;
        n /= taban;
        sayi += gecici * pow(10, i);
        ++i;
       
    }

    return sayi;
}

int Onlukbul(int n, int taban) {
    int sayi = 0, i = 0, gecici;
    while (n != 0) {
        gecici = n % 10;
        n /= 10;
        sayi += gecici * pow(taban, i);
        ++i;
    }

    return sayi;
}