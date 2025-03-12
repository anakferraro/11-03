#include <stdio.h> 

int main(){
    float imc;
    printf("Digite seu IMC:");
    scanf("%f", &imc);
    
    if(imc <18.5) {
        puts("Fora do intervalo normal");
    } else {
        if(imc>24.9){
            puts("Fora do intervalo normal");
        } else {
            puts("intervalo normal");
        }
    }

return 0;
}