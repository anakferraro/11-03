#include <stdio.h> 

int main(){
    float imc;
    printf("Digite seu IMC:");
    scanf("%f, &imc");
    
    if(imc>=18.5){
        if(imc<=24.9){
            puts("intervalo normal");
        }else{
            puts("Acima do intervalo normal");
        }
        return 0;
        }
}

