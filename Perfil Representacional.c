#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define MIN 1
#define MAX 4
#define ERRO "ERRO! Faça novamente. Lembre-se de digitar apenas valores entre 1 e 4 e não use o mesmo número mais de uma vez!"
#define MENS " Nas frases a seguir, pontue com:\n 4 - a que melhor descreve você;\n 3 - a próxima melhor descrição;\n 2 - a próxima melhor;\n 1 - aquela que menos descreve você."

 int teste ()
{

        setlocale(LC_ALL,"");


    int TESTE1[20], TESTE2[4], TESTE3[4], TESTE4[4], TESTE5[4], i = 0, j;

    char letras[4] = {'a', 'b', 'c', 'd'};


        /*system ("mode 60,20");*/ system ("color F0");
        printf("\n\n\n\n\n\n\n\n      BEM-VINDO AO TESTE DE SISTEMA REPRESENTACIONAL!!!      ");
        /*Sleep(2000);*/ system ("cls");


 do{
        system("cls");

            j = 0;

            printf("%s", MENS);
            printf("\n\nEu tomo decisões importantes baseado em:\n a - Intuição\n b - O que me soa melhor\n c - O que me parece melhor\n d - Um estudo preciso e minucioso do assunto\n");

            for (i = MIN; i <= MAX; i++){

                printf(" [%c] -> ", letras[j]);
                j++;
                fflush(stdin);
                scanf("%d", &TESTE1[i]);

            }

                if (TESTE1[1] > MAX || TESTE1[2] > MAX || TESTE1[3] > MAX || TESTE1[4] > MAX){
                printf("%s\n", ERRO);
                system("pause");
                }

                else if(TESTE1[1] == TESTE1[2] || TESTE1[1] == TESTE1[3] || TESTE1[1] == TESTE1[4] || TESTE1[2] == TESTE1[3] || TESTE1[2] == TESTE1[4] || TESTE1[3] == TESTE1[4]){
                    printf("%s\n", ERRO);
                    system("pause");

                }

    }while(TESTE1[1] > MAX || TESTE1[2] > MAX || TESTE1[3] > MAX || TESTE1[4] > MAX || TESTE1[1] == TESTE1[2] || TESTE1[1] == TESTE1[3] || TESTE1[1] == TESTE1[4]);



do{
        system("pause");
        system("cls");

            j = 0;

            printf("%s", MENS);
            printf("\n\nDurante uma discussão eu sou mais influenciado por:\n a - O tom da voz da outra pessoa\n b - Se eu posso ou não ver o argumento da outra pessoa\n c - A lógica do argumento da outra pessoa\n d - Se eu entro em contato ou não com os sentimentos reais do outro.\n");

            for (i = MIN; i <= MAX; i++){

                printf(" [%c] -> ", letras[j]);
                j++;
                fflush(stdin);
                scanf("%d", &TESTE2[i]);

            }

                if (TESTE2[1] > MAX || TESTE2[2] > MAX || TESTE2[3] > MAX || TESTE2[4] > MAX){
                printf("%s\n", ERRO);
                }

                else if(TESTE2[1] == TESTE2[2] || TESTE2[1] == TESTE2[3] || TESTE2[1] == TESTE2[4] || TESTE2[2] == TESTE2[3] || TESTE2[2] == TESTE2[4] || TESTE2[3] == TESTE2[4]){
                    printf("%s\n", ERRO);

                }

    }while(TESTE2[1] > MAX || TESTE2[2] > MAX || TESTE2[3] > MAX || TESTE2[4] > MAX || TESTE2[1] == TESTE2[2] || TESTE2[1] == TESTE2[3] || TESTE2[1] == TESTE2[4]);



do{
        system("pause");
        system("cls");

            j = 0;

            printf("%s", MENS);
            printf("\n\nEu comunico mais facilmente o que se passa comigo:\n a - Do modo como me visto e aparento\n b - Pelos sentimentos que compartilho\n c - Pelas palavras que escolho\n d - pelo tom da minha voz.\n");

            for (i = MIN; i <= MAX; i++){

                printf(" [%c] -> ", letras[j]);
                j++;
                fflush(stdin);
                scanf("%d", &TESTE3[i]);

            }

                if (TESTE3[1] > MAX || TESTE3[2] > MAX || TESTE3[3] > MAX || TESTE3[4] > MAX){
                printf("%s\n", ERRO);
                }

                else if(TESTE3[1] == TESTE3[2] || TESTE3[1] == TESTE3[3] || TESTE3[1] == TESTE3[4] || TESTE3[2] == TESTE3[3] || TESTE3[2] == TESTE3[4] || TESTE3[3] == TESTE3[4]){
                    printf("%s\n", ERRO);

                }

    }while(TESTE3[1] > MAX || TESTE3[2] > MAX || TESTE3[3] > MAX || TESTE3[4] > MAX || TESTE3[1] == TESTE3[2] || TESTE3[1] == TESTE3[3] || TESTE3[1] == TESTE3[4]);




 do{
        system("pause");
        system("cls");

            j = 0;

            printf("%s", MENS);
            printf("\n\n É muito fácil para mim:\n a - Achar o volume e a sintonia ideais num sistema de som\n b - Selecionar o ponto mais relevante relativo a um assunto interessante\n c - Escolher os móveis mais confortáveis\n d - Escolher as combinações de cores mais ricas e atraentes.\n");

            for (i = MIN; i <= MAX; i++){

                printf(" [%c] -> ", letras[j]);
                j++;
                fflush(stdin);
                scanf("%d", &TESTE4[i]);

            }

                if (TESTE4[1] > MAX || TESTE4[2] > MAX || TESTE4[3] > MAX || TESTE4[4] > MAX){
                printf("%s\n", ERRO);
                }

                else if(TESTE4[1] == TESTE4[2] || TESTE4[1] == TESTE4[3] || TESTE4[1] == TESTE4[4] || TESTE4[2] == TESTE4[3] || TESTE4[2] == TESTE4[4] || TESTE4[3] == TESTE4[4]){
                    printf("%s\n", ERRO);

                }

}while(TESTE4[1] > MAX || TESTE4[2] > MAX || TESTE4[3] > MAX || TESTE4[4] > MAX || TESTE4[1] == TESTE4[2] || TESTE4[1] == TESTE4[3] || TESTE4[1] == TESTE4[4]);



do{
        system("pause");
        system("cls");

            j = 0;

            printf("%s", MENS);
            printf("\n\n Eu me percebo assim:\n a - Se estou muito em sintonia com os sons dos ambientes\n b - Se sou muito capaz de raciocinar com fatos e dados novos\n c - Eu sou muito sensível à maneira como a roupa veste o meu corpo\n d - Eu respondo fortemente às cores e à aparência de uma sala\n");

            for (i = MIN; i <= MAX; i++){

                printf(" [%c] -> ", letras[j]);
                j++;
                fflush(stdin);
                scanf("%d", &TESTE5[i]);

            }

                if (TESTE5[1] > MAX || TESTE5[2] > MAX || TESTE5[3] > MAX || TESTE5[4] > MAX){
                printf("%s\n", ERRO);
                }

                else if(TESTE5[1] == TESTE5[2] || TESTE5[1] == TESTE5[3] || TESTE5[1] == TESTE5[4] || TESTE5[2] == TESTE5[3] || TESTE5[2] == TESTE5[4] || TESTE5[3] == TESTE5[4]){
                    printf("%s\n", ERRO);

                }

}while(TESTE5[1] > MAX || TESTE5[2] > MAX || TESTE5[3] > MAX || TESTE5[4] > MAX || TESTE5[1] == TESTE5[2] || TESTE5[1] == TESTE5[3] || TESTE5[1] == TESTE5[4]);


getch();
return(0);


}
