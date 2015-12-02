#include<stdio.h>
#include<stdlib.h>
//definir constantes
#define TAMANHO 501
//variavel utilizada para menu
int opcao;

//strututa de pessoa para armazenar os dados
    struct Bilhete{
        int ocupado;
        char nome[80];
        int idade;
        int poltrona[TAMANHO];
        };


//definindo o vetor onde serão armazenados os dados;
struct Bilhete b[TAMANHO];

//função que faz a inclusão no vetor
void venderBilhete(){
//variavel que verifica a posição no vetor onde a pessoa sera inserida
    int i;
    int aux;
        for(i=0; i<TAMANHO; i++){
            //verifica se a posição esta vazia
            printf("Escolha sua poltrona: ");
            scanf("%d",&aux);

            b[aux].poltrona==aux;

                if((aux<=TAMANHO) && (b[aux].ocupado !=1)) {


                        if(aux<=100){
                            printf("\n-------------------------------------------------\n");
                            printf("voce ficara em uma poltrona especial taxa R$30,00 \n");

                            }
                        else{
                            printf("\n-------------------------------------------------\n");
                            printf("voce ficara em uma poltrona simples taxa R$15,00 \n");

                            }
                        printf("------------------------------------\n");
                        printf("NOME: ");
                        fflush(stdin);//limpar o buffer
                        gets(b[aux].nome);//recupera o nome digitado

                        printf("------------------------------------\n");
                        printf("IDADE: ");
                        scanf("%d",&b[aux].idade);
                        fflush(stdin);

                //esta atribuindo o numero 1 idicando que sera ocupada
                            b[aux].ocupado = 1;

                //Ápos inserir a pessoa não precisa mais percorrer o vetor
                //o break para o fluxo
                        printf("---------------------------------------\n");
                        printf("%s,sua poltrona eh a de numero %d\n =======IT'S TIME!!!=======\n",b[aux].nome, aux);
                        printf("---------------------------------------\n\n");
                        system("pause");
                        break;

                }

            else if(aux>=TAMANHO) {
                    printf("====================\n");
                    printf("= MAX 500 LUGARES===\n");
                    printf("====================\n");
                }

            else if ((b[aux].ocupado = 1) && (aux<=TAMANHO)){
                    printf("-------------------------------------------------\n");
                    printf("****POSICAO OCUPADA****\n");
                    printf("-------------------------------------------------\n");}
                }
}




void consultarPoltrona(){
    int i;
    int aux;

        for(i = 0; i<TAMANHO; i++){
             printf("Digite poltrona para consulta: ");
            scanf("%d",&aux);

                if(b[aux].ocupado==1){
                        printf("A Poltrona %d esta ocupada\n",aux);
                        printf("Nome do cliente: %s\n\n",b[aux].nome);
                }

                else if(aux>=TAMANHO) {
                        printf("====================\n");
                        printf("= MAX 500 LUGARES===\n");
                        printf("====================\n");
                }

                else{
                        printf("\na poltrona %d esta disponivel\n",aux);
                break;
                }

        }
                //pausa o sistema esperando proximo clique
                system("pause");
                //limpa a tela clear Scrrem
                system("cls");
    }


void listarPoltronasGrupoEspecial(){
     int i;
     int cont=0;

        for(i = 0; i<101; i++){
            b[i].poltrona==i;

                if(b[i].ocupado==1){
                    printf("Poltrona especial %d \n",i);
                    printf("Nome do cliente: %s\n\n\n",b[i].nome);

                    cont++;

                }
            }
        printf("total de poltronas ocupadas %d\n\n",cont);
        system("pause");
}



void listarPoltronasGrupoSimples(){
     int i;
     int cont=0;

        for(i = 101; i<TAMANHO; i++){
                b[i].poltrona==i;
                if(b[i].ocupado==1){

                printf("Poltrona Simples: %d \n",i);
                printf("Nome do cliente: %s\n\n\n",b[i].nome);

                cont++;

                }
        }

        printf("total de poltronas ocupadas %d\n\n",cont);
        system("pause");
}






/*void estornar(){
    int i;
    int aux;

        for(i = 0; i<TAMANHO; i++){

             printf("Digite poltrona para estorno: ");
                   scanf("%d",&aux);
            b[aux].poltrona==NULL;


                    printf("Poltrona estornada");
                break;
             }

        }

        */

        void sair(){
            printf("==============================\n");
            printf("= O SISTEMA SERA FECHADO!!!  =\n");
            printf("==============================");
                system("exit");
        }



void menu(){
    printf("=====================================\n");
    printf("=====  ===  ===       ===       =====\n");
    printf("=====  ===  ===  ========  ==========\n");
    printf("=====  ===  ===      ====  ==========\n");
    printf("=====       ===  ========       =====\n");
    printf("=====================================\n");
    printf("=============BILHETERIA==============\n");
    printf("=====================================\n");
    printf("1-VENDER BILHETE\n\n");
    printf("2-CONSULTAR POLTRONA\n\n");
    printf("3-ESTORNAR\n\n");
    printf("4-LISTAR POLTRONAS OCUPADAS ESPECIAIS\n\n");
    printf("5-LISTAR POLTRONAS OCUPADAS SIMPLES\n\n");
    printf("99-SAIR\n\n");
    printf("==============================\n");

    scanf("%d",&opcao);


switch (opcao){
        case 1: venderBilhete();
        break;

        case 2: consultarPoltrona();
        break;

        //case 3: estornar();
        //break;

        case 4:listarPoltronasGrupoEspecial();
        break;

        case 5:listarPoltronasGrupoSimples();
        break;

        case 99:sair();
        break;
}

}

int main(){

    do{

        system("cls");
        menu();
    }while(opcao!=99);

}




