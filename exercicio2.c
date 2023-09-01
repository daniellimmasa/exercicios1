#include<stdio.h>
int main(){

int A = 12, B = 15, C = 9, D = 22, maior, menor;

if(A>B && A>C && A>D){
    maior = A;

}else if (B>A && B>C && B>D){
    maior = B;

}else if ( C>A && C>B && C>D){
    maior = C;
}else {
    maior = D;
}

if(A<B && A<C && A<D){
    menor = A;

}else if (B<A && B<C && B<D){
    menor = B;

}else if ( C<A && C<B && C<D){
    menor = C;
}else {
    menor = D;
}

printf("maior : %d, menor: %d", maior , menor);
}