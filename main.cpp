#include<stdio.h>
#include<string.h>
#define POCHWALA "Ach,jakie wspaniale imie"
#define PI 3.14159

void num(void) {
    int numer_powtorzenia = 0;
    int zapisany_numer_powtorzenia = 0;
    int zapisana_liczba = 0;
    int liczba_powtorzen = 3;

    for (numer_powtorzenia = 1; numer_powtorzenia <= liczba_powtorzen; numer_powtorzenia++) {
        int pobierz;
        scanf("%d", &pobierz);
        if(pobierz > zapisana_liczba) {
            zapisana_liczba = pobierz;
            zapisany_numer_powtorzenia = numer_powtorzenia;
        }
    }

    printf("Najwieksza liczba: %d\n", zapisana_liczba);
    printf("Numer powtorzenia: %d\n", zapisany_numer_powtorzenia);
}

void lekarstwo(int a, int b) {

    int x, y = 0;

    if (a == b) {
        printf("NIE DA SIE SA ROWNE\n");
        return;
    }

    if(a%2 == 0 && b%2 == 0 ) {
        printf("NIE DA SIE , BO SA PARZYSTE\n");
        return;
    }

    for(x = 0; x < 1000000; x = x + 1) {
        for(y = 0; y < 1000000; y = y + 1) {
            if (1 + x * a == y * b) {
                printf("x = %d , y = %d\n", x,y);
                return;
            } else if (x * a == y * b + 1) {
                printf("x = %d , y = %d\n", x,y);
                return;
            }
        }
    }
}

void kwadrat(int h, char* znak) {
    int i = 0, j = 0;

    for (i = 0; i < h; i++) {
        for(j = 0; j < h; j++) {
            printf(znak);
        }
        printf("\n");
    }
}

void trojkat(int h, char* znak) {
    int i = 0, j = 0;

    for (i = 0; i < h; i++) {
        for(j = 0; j < h - i; j++) {
            printf(znak);
        }
        printf("\n");
    }
}

void wyliczanka(int ostatnia) {
    int i = ostatnia;
    for(i; i>=0; i = i - 1) {
        printf("Liczba: %d\n", i);
        if(i%2 == 1) {
            printf("HURRA NIEPARZYSTE\n");
        } else {
            printf("HURRA PARZYSTE\n");
        }
    }
}

int sebastian(void) {
    char* sebastian = "Sebastian";
    printf("Mam na imie %s\n", sebastian);
    return 0;
}


int suma(int i) {
    int sumaA = 10 + i   ;
    printf("suma = %d\n", sumaA);
    suma(i+1);
    return 0;

}
int iloczyn (long long e) {
    long long iloczyns = 10000000000 * e ;
    printf("iloczyn = %lu\n", iloczyns);
    iloczyn(e+1);
    return 0;
}
int dinozaur(void) {
    printf("podaj wiek dinozaurze\n");
    int wiek;
    scanf("%d", &wiek);
    if(wiek < 100) {
        printf("Nie jestes dinozaurem\n");
    } else {
        printf("Jestes dinozaurem");
    }
    return 0;
}

int ichtiozaur(void) {
    printf("Podaj czy jestes roslinozerny\n");
    printf("0 = NIE\n");
    printf("1 = TAK\n");
    int czyRoslinozerny;
    scanf("%d", &czyRoslinozerny);

    if(czyRoslinozerny == 0) {
        printf("Jestes miesozerny\n");
    } else if (czyRoslinozerny == 1) {
        printf("Jestes roslinozerny\n");
    } else {
        printf("Jestes czlowiekiem\n");
    }

    return 0;

}
int pterozaur(void) {
    printf("Podaj , czy umiesz latac\n");
    printf("0 = Tak\n");
    printf("2 = Nie\n");
    short int czylatac;
    scanf("%d", &czylatac);

    if(czylatac == 0 ) {
        printf("Umiesz latac\n");

    } else if (czylatac == 2) {
        printf("Nie umiesz latac\n");


    } else {
        printf("Jestes dinozaurem\n");


    }

    return 0;


}

int tyranozaur(void) {
    printf("Czy jestes tyranozaurem\n");
    printf("9 = tak\n");
    printf("8 = nie\n");
    short int czytyranozaur;
    scanf("%d", &czytyranozaur);
    if(czytyranozaur == 9) {
        printf("Jestes tyranozaurem\n");
    } else if(czytyranozaur == 8) {
        printf("Nie jestes tyranozaurem");

    }
    return 0;
}

#define zwracana_liczba_naturalna int
#define pusta_przestrzen void
#define drukuj printf
#define zwroc return

zwracana_liczba_naturalna witam(pusta_przestrzen)
{
    drukuj("Czesc!\a\n");
    drukuj("Czesc!\a\n");
    zwroc 0;
}

int czesc(void)
{
    printf("Czesc!\a\n");
    printf("Czesc!\a\n");
    return 0;
}

int plywanie(void) {
    printf("Czy umiesz plywac\n");
    printf("5 = TAK\n ");
    printf("6 = NIE\n");
    short int czyplywac;
    scanf("%d" , &czyplywac);
    if(czyplywac == 5) {
        printf(" Umiesz plywac\n");
    } else if
    (czyplywac == 6) {
        printf("Nie umiesz plywac\n");

    }

    return 0;
}

int  liczba (void)
{
    printf("Moja ulubiona liczba to 7\n");

    return 0;
}

int wielkosc(void) {
    printf("Typ int ma wielkosc %d bajtow\n", sizeof(int));
    printf("Typ char ma wielkosc %d bajtow\n", sizeof(char));
    printf("Typ long ma wielkosc %d bajtow\n", sizeof(long));
    printf("Typ double ma wielkosc %d bajtow\n", sizeof(double));
    return 0;

}

int pensja(void) {
    float pensja;
    printf("Podaj miesieczne wynagrodzenie, na jakie zaslugujesz:");
    printf("________zl\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &pensja);
    printf("\n\t%.2f zl miesieczne to %.2f zl rocznie.", pensja,pensja * 12.0);
    printf("\rHo, ho!\n");
    return 0;
}

short imie(void)
{
    printf("Jak masz na imie?\n");
    printf("Sebastian\n");
    char* seba = "Sebastian";
    //int seba = 9;
    printf("Twoje imie ma %d liter,\n", strlen(seba));
    return 0;
}

int chwali(void) {
    char imie[40];
    printf("Jak masz na imie?\n");
    scanf("%s", imie);
    printf("Witaj, %s. %s %d\n", imie, POCHWALA, strlen(POCHWALA));
    return 0;
}

int pizza(void) {
    float powierzchnia, obwod, promien;

    printf("Ile wynosi promien twojej pizzy?\n");
    scanf("%f",&promien);
    powierzchnia = PI * promien * promien;
    obwod = 2.0 * PI * promien;
    printf("Podstawowe parametry twojej pizzy to:\n");
    printf("obwod = %1.2f, powierzchnia = %1.2f\n",obwod,powierzchnia);
    return 0;
}

int prostokat(void)
{
    float powierzchnia,obwod;
    powierzchnia = 5 * 4;
    obwod = 5 * 2 + 4 * 2;
    printf("obwod = %1.2f,powierzchnia = %1.2f\n",obwod,powierzchnia);
    return 0;

}

int dzialka(void) {
    float powierzchnia;
    powierzchnia = 8*7;
    printf("powierzchnia = %1.2f\n", powierzchnia);
    return 0;
}

int odejmowanie(void) {
    float odejmowanie;
    odejmowanie =  560 - 600;

    printf("odejmowanie = %1.2f\n", odejmowanie);
    return 0;
}

int trapez(void) {
    float powierzchnia;
    powierzchnia = (10 + 10 ) * 4 / 2;
    printf("powierzchnia = %1.2f\n", powierzchnia);
    return 0;
}
int kwadrat(void){

float powierzchnia , obwod;
powierzchnia = 5*5;
obwod  = 5*4;
printf("powierzchnia = %1.2f , obwod = %1.2f", powierzchnia,obwod);
return 0;

}
int samochod(void)

{
printf("Czy masz samochod\n");
printf("5 = TAK\n");
printf("6 = NIE\n");
short int czysamochod;
scanf("%d",&czysamochod);
if(5 == czysamochod){
    printf("Masz samochod\n");

}else if
(6 == czysamochod){
    printf("Nie masz samochodu\n");


}
return 0;

}
int main(void) {
    // kwadrat(10, "DAMIAN ");
    // trojkat(10, "SEBA ");

    //wyliczanka(10);
    //sebastian();
    //suma(0);
    //iloczyn(1);
    //dinozaur();
    //ichtiozaur();
    //pterozaur();
    //tyranozaur();
    //czesc();
    //plywanie();

    //liczba();
    //wielkosc();
    //pensja();
    //imie();
    //chwali();
    //pizza();
    //prostokat();
    //dzialka();
    //odejmowanie();
    // trapez();
    //witam();

    //samochod();
    //      kwadrat();
    return 0;
}




