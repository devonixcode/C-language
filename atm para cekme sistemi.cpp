#include <stdio.h>
#include <stdlib.h>

int main(){
    float bakiye=5000;
    float cekim;
    printf("Mevcut bakiyeniz= %2f TL'dir.\n",bakiye);
    while(cekim>0){
        printf("çekmek istediğiniz tutarı giriniz(0=çıkış)=");
        scanf("%f",&cekim);
        if(cekim==0){
            printf("çıkış yapılıyor...\n");
            break;
        }
        if(cekim>bakiye){
            printf("hesabınızda yeterli bakiye yoktur:( )");
        }else 
        bakiye-=cekim;
        printf("yeni bakiyeniz=%f",bakiye);
    }
}