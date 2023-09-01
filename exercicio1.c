#include<stdio.h>
#include<math.h>
int main(){
double numero, resultado;

printf("digite o numero ");
scanf("%lf", &numero);

if(numero >= 0){
    resultado = sqrt(numero);
    printf("raiz quadrada de %3lf e: %3lf", numero, resultado);


}else{
    resultado = pow(numero, 2);
    printf("o quadrado de %3lf e: %3lf", numero, resultado);


}



}