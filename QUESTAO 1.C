#include <stdio.h>

void main()
{
    
    int a, b, c;
    
    printf("Por gentileza, digite os valores de a, b e c: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if((a == b && c != b) || (b == c && a != b) || (c == a && b != a)) {
       printf("Ele é um triângulo isósceles fião"); 
    }
    
    else if(a == b && b == c && c == a){
       printf("O triângulo é equilátero"); 
    }
    
    else{
       printf("O triângulo é escaleno (claramente um hidrocarboneto com ligação dupla) fião"); 
    }

}