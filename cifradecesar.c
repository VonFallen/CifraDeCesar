#include <stdio.h>

int main(){
    char alfa[26] = "abcdefghijklmnopqrstuvwxyz";
    char texto[50];
    int chave;
    int nova_posicao;
    int c;
    int i;

    printf("Digite seu texto: ");
    fgets(texto, 50, stdin);

    printf("Digite a chave: ");
    scanf("%d", &chave);

    printf("Resultado: ");

    for(c = 0; texto[c] != '\0' ; c++){
        
        for(i = 0; alfa[i] != '\0'; i++){
            if(alfa[i]==texto[c]){
                nova_posicao=(i - chave + 26)%26;
                printf("%c", alfa[nova_posicao]);
                
            }
        }
    }
    printf("\n");
    return 0;
}