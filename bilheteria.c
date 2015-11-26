#include<stdio.h>
#include<stdlib.h>
//definir constantes
#define TAMANHO 20
#define IDADEMAIOR 18

//variavel utilizada para menu
int opcao;//strututa de pessoa para armazenar os dados
    struct Pessoa{
        int ocupado;
        char nome[80];
        int idade;
        };


//definindo o vetor onde serão armazenados os dados;
struct Pessoa pessoas[TAMANHO];


//função que faz a inclusão no vetor
void incluir(){

//variavel que verifica a posição no vetor onde a pessoa sera inserida
int i;
for(i=0; i<TAMANHO; i++){

//verifica se a posição esta vazia
if(pessoas[i].ocupado != 1) {

    printf("Digite o nome da Pessoa: \n");

    fflush(stdin);//limpar o buffer
    gets(pessoas[i].nome);//recupera o nome digitado

    printf("Digite o sexo da Pessoa: \n");
    scanf("%d",&pessoas[i].sexo);
    fflush(stdin);//limpar o buffer

    printf("Digite a idade da Pessoa: \n");
    scanf("%d",&pessoas[i].idade);
    fflush(stdin);

    printf("Digite o CPF da Pessoa: \n");
    scanf("%s",&pessoas[i].cpf);
    fflush(stdin);
    pessoas[i].ocupado = 1;

    //Ápos inserir a pessoa não precisa mais percorrer o vetor
    //o break para o fluxo
    printf("A posicao na lista e %d\n",i);
    break;

        }
    }
}
void exibirPessoas(){
    int i;

        for(i = 0; i<TAMANHO; i++){
                if(pessoas[i].ocupado==1){
            printf("A posicao: %d\n",i);

            printf("Nome: %s\n",pessoas[i].nome);
            printf("Idade: %d\n",pessoas[i].idade);
            printf("CPF: %s",pessoas[i].cpf);

            if(pessoas[i].sexo =='M'){
                printf("Sexo: Masculino\n");
            }
            else if(pessoas[i].sexo == 'F'){
                printf("Sexo: Feminino\n");
            }

            }
        }
        //pausa o sistema esperando proximo clique
            system("pause");
            //limpa a tela clear Scrrem
            system("cls");
        }

void exibirMaiorHomens(){

    int i;

        for(i = 0; i<TAMANHO; i++){
                if(pessoas[i].idade >=IDADEMAIOR){
            printf("A posicao: %d\n",i);

            printf("Nome: %s\n",pessoas[i].nome);
            printf("Idade: %d\n",pessoas[i].idade);
            printf("CPF: %s",pessoas[i].cpf);

            if(pessoas[i].sexo =='M'){
                printf("Sexo: Masculino\n");
            }
            else if(pessoas[i].sexo == 'F'){
                printf("Sexo: Feminino\n");
            }

            }

        }
        //pausa o sistema esperando proximo clique
            system("pause");
            //limpa a tela clear Scrrem
            system("cls");
        }




void menu(){
    printf("==============================\n");
    printf("1-INCLUIR PESSOA\n\n");
    printf("2-LISTAR PESSOAS\n\n");
    printf("3-EXIBIR MAIORES\n\n");
    printf("9-SAIR\n\n");
    printf("==============================\n");

    scanf("%d",&opcao);


switch (opcao){
        case 1: incluir();
        break;

        case 2: exibirPessoas();
        break;

        case 3: exibirMaiorHomens();
        break;
}

}

int main(){

    do{

        system("cls");
        menu();
    }while(opcao!=9);

}




