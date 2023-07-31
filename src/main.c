#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arvoreBinaria.h"

// int main()
// {
//     typedef struct camisa{
//         int tamanho;
//         float preco;
//     }Camisa;

//     ArvoreBinaria a = Inicializar();
//     Camisa *obj = (Camisa *)malloc(sizeof(Camisa));
//     obj->tamanho = 40;
//     obj->preco = 2.5;
//     Inserir(a, 1, obj, -1, 'e', sizeof(Camisa));
//     obj->tamanho = 36 ;
//     Inserir(a, 2, obj, 1, 'e', sizeof(Camisa));
//     obj->tamanho = 34 ;
//     Inserir(a, 3, obj, 1, 'd', sizeof(Camisa));
//     obj->tamanho = 42  ;
//     Inserir(a, 4, obj, 2, 'e', sizeof(Camisa));
//     obj->tamanho = 44 ;
//     Inserir(a, 5, obj, 3, 'e', sizeof(Camisa));

//     ImprimirEmLargura(a);

//     printf(Existe(a,4)?"Existe\n":"Não Existe\n");
//     printf(Existe(a,5)?"Existe\n":"Não Existe\n");

//     printf(Balanceada(a)?"É balanceada\n":"Não é balanceada\n");
//     printf("A altura é: %d\n", Altura(a));

//     Camisa *busca = (Camisa*)Buscar(a, 4);
//     printf("%d\n", busca->tamanho);
//     printf("%f\n", busca->preco);

// return 0;
// }

int main()
{
    typedef struct carro
    {
        int ano;
        char placa[7];
        int codigoModelo;
    } Carro;

    ArvoreBinaria a = Inicializar();
    Carro *obj = (Carro *)malloc(sizeof(Carro));

    obj->ano = 2010;
    obj->codigoModelo = 123;
    strcpy(obj->placa, "ABC1234");
    Inserir(a, 1, obj, -1, 'e', sizeof(Carro));

    obj->codigoModelo = 124;
    strcpy(obj->placa, "DEF1235");
    Inserir(a, 2, obj, 1, 'e', sizeof(Carro));

    obj->codigoModelo = 125;
    strcpy(obj->placa, "GHI2222");
    Inserir(a, 3, obj, 1, 'd', sizeof(Carro));

    obj->ano = 2001;
    obj->codigoModelo = 126;
    strcpy(obj->placa, "JKL3333");
    Inserir(a, 4, obj, 2, 'e', sizeof(Carro));

    obj->ano = 2002;
    obj->codigoModelo = 127;
    strcpy(obj->placa, "MNO12345");
    Inserir(a, 5, obj, 3, 'e', sizeof(Carro));

    ImprimirEmLargura(a);

    printf(Existe(a, 4) ? "Existe\n" : "Não Existe\n");
    printf(Existe(a, 5) ? "Existe\n" : "Não Existe\n");

    printf(Balanceada(a) ? "É balanceada\n" : "Não é balanceada\n");
    printf("A altura é: %d\n", Altura(a));

    Carro *busca = (Carro *)Buscar(a, 4);
    printf("%d\n", busca->ano);
    printf("%d\n", busca->codigoModelo);
    printf("%s\n", busca->placa);

    return 0;
}