#include <stdio.h>

int main(){
    int secim;
    float kg=0.0;
    float g=0.0;
    float agr=0.0;
    printf("1-kg g'a dönüştürme\n");
    printf("2-g kg'a dönüştürme\n");
    printf("lütfen seçim yapınız:");
    scanf("%d",&secim);
    switch(secim){
        case 1:
        printf("dönüştürmek istediğiniz ağırlığı giriniz(kg):");
        scanf("%f",&agr);
        kg=agr*1000;
        printf("%.2f kg = %.2f g dir",agr,kg);
        break;
        case 2:
        printf("dönüştürmek istediğiniz ağırlığı giriniz(g):");
        scanf("%f",&agr);
        g=agr/1000;
        printf("%.2f g = %.2f kg dir",agr,g);
        break;
        case 0:
        return 0;
    }
    return 0;
}