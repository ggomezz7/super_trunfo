#include <stdio.h>

    int main(){

    struct Carta1{
        char a[50];
        char 01[50];
        char Amazonas[50];    
        int população = 105000;
        float área = 6500;
        float pib = 350100;
        int pontos_turisticos = 30;
    }

    struct Cart2{ 
        char b[50];
        char 02[50];
        char Pará[50];
        int população = 8000;
        float área = 7000;
        float pib = 450000;
        int pontos_turisticos = 15;
    }

    struct Cart3{
        char c[50];
        char 03[50];
        char Mato Grosso[50];
        int população = 200000;
        float área = 6700;
        float pib = 150000;
        int pontos_turisticos = 15;
    }


    struct Cart4{
        char d[50];
        char 04[50];
        char Paraná[50];
        int população = 100000;
        float área = 5000;
        float pib = 3000;
        int pontos_turisticos = 20;
    }

    struct Cart5{
        char e[50];
        char 05[50];
        char Santa Catarina[50];
        int população = 180000;
        float área = 6000;
        float pib = 5000;
        int pontos_turisticos = 15;
    }

    struct Cart6{
        char f[50];
        char 06[50];
        char Bahia[50];
        int população = 200000;
        float área = 5800;
        float pib = 150000;
        int pontos_turisticos = 12;
    }

    struct Cart7{
        char g[50];
        char 07[50];
        char São Paulo[50];
        int população = 300000;
        float área = 9000;
        float pib = 500000;
        int pontos_turisticos = 35;
    }

    struct Cart8{
        char h[50];
        char 08[50];
        char Rio de Janeiro[50];
        int população = 310000;
        float área = 9500;
        float pib = 700000;
        int pontos_turisticos = 50;
    }
}

    int main(){

        printf("O pib do Rio de janeiro é %f", Cart8.pib);
        return 0;
    }
    