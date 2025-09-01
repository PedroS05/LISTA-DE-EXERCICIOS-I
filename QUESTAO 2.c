#include<stdio.h>

void main(){
    
    int i;
    float p, h, IMC;
 
    printf("Por gentileza, informe seu peso e altura para que eu possa calcular seu IMC: ");
    scanf("%f%f", &p, &h);
    
    IMC = p / (h * h);
    
    printf("Seu IMC foi = à %.2f \n", IMC);
    
    if(IMC < 18.5){
        printf("Você está abaixo do peso!");
    }
    if(IMC >= 18.5 && IMC <= 24.9){
        printf("Você está com peso normal");
    }
    if(IMC >= 25.0 && IMC <= 29.9){
        printf("Sobrepeso");
    }
    if(IMC >= 30.0 && IMC <= 34.9){
        printf("Obesidade grau I");
    }
    if(IMC >= 35.0 && IMC <= 39.9){
        printf("Obesidade grau II");
    }
    if(IMC >= 40.0){
        printf("Obesidade grau III");
    }
    
    return 0;
}
