#pragma warning(disable : 4996)
#include<stdio.h>
#include<conio.h>
void ekle();
int main() {
    
    while (1)
    {


        int n, taban, secenek, a = 0;
        

        printf("1- Kullanici Ekle\n");
        printf("2- Kullanici Bul\n");
        printf("3- Kullanici Sirala\n");
        printf("4- Cikis\n");
        scanf("%d", &secenek);
        if (secenek > 4) {
            printf("lutfen gecerli bir secim yapiniz\n");          
        }
        else if (secenek < 1) {
            printf("lutfen gecerli bir secim yapiniz\n");
        }
        
        switch (secenek)
        {
        case 1:
            ekle();
            getch();
            system("cls");
            break;


        case 2:
            while (a!=1) {
                printf("1- Telefon numarasina gore bul\n");
                printf("2- Ogrenci Numarasina gore bul\n");
                printf("3- Mail adresine gore bul\n");
                printf("4- Bir ust menuye don\n");
                scanf("%d", &secenek);
                switch (secenek)
                {
                case 1:
                    system("cls");
                    break;
                case 2:
                    system("cls");
                    break;
                case 3:
                    system("cls");
                    break;
                case 4:   
                    a++;
                    break;
                default:
                    system("cls");
                    break;
                }
            }
            system("cls");
            break;

        case 3:
            while (a!=1) {
                printf("1- Isme gore\n");
                printf("2- Ogrenci numarasina gore\n");
                printf("3- Bir ust menuye don\n");
                scanf("%d", &secenek);
                switch (secenek)
                {
                case 1:
                    system("cls");
                    break;
                case 2:
                    system("cls");
                    break;
                case 3:
                    a++;
                    break;
                default:
                    system("cls");
                    break;
                }
            }
            system("cls");
            break;

        case 4:
            exit(1);
            break;
        }
    }
    
}
void ekle() {
    FILE* fp = fopen("profil.txt", "a");
    struct insan{
        char isim[10];
        char soyisim[10];
        char ogrenci_no[20];
        char telefon_no[20];
        char mail[100];
    };

    

    int i;
    struct insan insanlar[1];

    printf("Kullanici Bilgilerini giriniz");
    for (i = 0; i < 1; i++) {
        
            printf("\nisim:");
            scanf("%s", &insanlar[i].isim);
            printf("\nsoyisim:");
            scanf("%s", &insanlar[i].soyisim);
            printf("\nogrenci no:");
            scanf("%s", &insanlar[i].ogrenci_no);
            printf("\ntelefon no:");
            scanf("%s", &insanlar[i].telefon_no);
            printf("\nmail:");
            scanf("%s", &insanlar[i].mail);
        
    }
    system("cls");
    printf("isim    ");
    printf("soyisim    ");
    printf("ogrenci no    ");
    printf("telefon no    ");
    printf("mail    \n");
    for (i = 0; i < 1; i++) {
        
            printf("%s    %s    %s    %s    %s\n", insanlar[i].isim, insanlar[i].soyisim, insanlar[i].ogrenci_no, insanlar[i].telefon_no, insanlar[i].mail);
        
       
    }

    for (int i = 0; i < 1; i++)
    {    
            fprintf(fp, "\n%s\t", insanlar[i].isim);
            fprintf(fp, "%s\t", insanlar[i].soyisim);
            fprintf(fp, "%s\t", insanlar[i].ogrenci_no);
            fprintf(fp, "%s\t", insanlar[i].telefon_no);
            fprintf(fp, "%s\t\n", insanlar[i].mail);
    }
    fclose(fp);
}