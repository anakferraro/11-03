int main(){
    float nota;
 
     printf("Digite a nota do aluno :");
    scanf("%f",&nota);
    
    if (nota >=9) {
        puts("conceito = A");
    } else {
        if (nota >=8) {
            puts("conceito = B");
        } else {
            if (nota >=7) {
                puts("conceito = C");
            } else {
                if (nota >=6) {
                    puts("conceito = D");
                } else {
                    puts("conceito = F");
                    }
                }
                
            }
            
        }
        
 return 0;   
}