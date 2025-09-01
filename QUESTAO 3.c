#include<stdio.h>

int main(){
    int vlr;
    int ced100, ced50, ced20, ced10, ced5, ced2;
    
    printf("Informe o valor que deseje sacar: ");
    scanf("%d", &vlr);
    
    if(vlr == 2 || vlr > 3){
        
        ced100 = vlr / 100;
        vlr = vlr % 100;
        
        
        ced50 = vlr / 50;
        vlr = vlr % 50;
        
        
        ced20 = vlr / 20;
        vlr = vlr % 20;
        
        ced10 = vlr / 10;
        vlr = vlr % 10;
        
        ced5 = vlr / 5;
        vlr = vlr % 5;
        
        ced2 = vlr / 2;
        vlr = vlr % 2;
    }
    else{
    printf("Não vai dá");
    }
        
        if(ced100 > 0){
        printf("Número de cédulas de 100 = %d", ced100);
        
        if(ced50 > 0)
        printf("Número de cédulas de 50 = %d", ced50);
        
        if(ced20 > 0)
        printf("Número de cédulas de 20 = %d", ced20);
        
        if(ced10 > 0)
        printf("Número de cédulas de 10 = %d", ced10);
        
        if(ced5 > 0)
        printf("Número de cédulas de 5 = %d", ced5);
              
        if(ced2 > 0)
        printf("Número de cédulas de 2 = %d", ced2);
        }
        return 0;
}