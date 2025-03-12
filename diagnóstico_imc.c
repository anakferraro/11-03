#include <stdio.h>

int main() {
    float peso;
    float altura; 
    float imc;
    
    printf ("Digite o peso (em kg): ");
    scanf ("%f", &peso);
    printf ("Digite a altura (em metros): ");
    scanf ("%f", &altura);
    
    imc = peso/ (altura * altura);
    
    if (imc < 18.5) {
        puts("Diagnóstico: Baixo peso");
    } else {
        if (imc <= 24.9) {
            puts("Diagnóstico: Peso normal");
        } else {
            if (imc < 30) {
                puts("Diagnóstico: Sobrepeso");
            } else {
                if (imc < 35) {
                    puts("Diagnóstico: Obesidade classe 1");
                } else {
                    if (imc < 40) {
                        puts("Diagnóstico: Obesidade classe 2");
                    } else {
                        puts("Diagnóstico: Obesidade classe 3");
                        }
                }
            }
        }
    }

                   return 0;
}

