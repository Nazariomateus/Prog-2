#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

//struct s_numero
//{
//    int16_t i;
//    double r;
//};
//union u_numero
//{
//    int16_t i;
//    double r;
//};
//
//int main()
//{
//    union u_numero ex_u;
//    struct s_numero ex_s;
//
//    ex_s.i = 10;
//    ex_u.i = 10;
//
//    printf("Union -> tamanho: %lu\td: %.2lf\ti: %d\n", sizeof(ex_u), ex_u.r, ex_u.i);
//    printf("Struct-> tamanho: %lu\td: %.2lf\ti: %d\n", sizeof(ex_s), ex_s.r, ex_s.i);
//
//    ex_u.r = 5.2;
//    ex_s.r = 5.2;
//
//    printf("Union -> tamanho: %lu\td: %.2lf\ti: %d\n", sizeof(ex_u), ex_u.r, ex_u.i);
//    printf("Struct-> tamanho: %lu\td: %.2lf\ti: %d\n", sizeof(ex_s), ex_s.r, ex_s.i);
//
//    return 0;
//}

//int main(int argc, char *argv[])
//{
//
//    int *vetor, tamanho = 2;
//
//    // aloca memória para um vetor de inteiros
//
//    vetor = (int *)calloc(tamanho, sizeof(int));
//
//    if (vetor == NULL)
//    {
//        printf("Não foi possível alocar memória\n");
//        exit(EXIT_FAILURE);
//    }
//
//    vetor[0] = 10; vetor[1] = 20;
//
//    tamanho = 4;
//
//    vetor = realloc(vetor, tamanho * sizeof(int));
//
//    vetor[2] = 30; vetor[3] = 40;
//
//    for (int i = 0; i < tamanho; ++i)
//    {
//        printf("%d\n", *(vetor + i)); // ou vetor[i]
//    }
//
//    free(vetor);
//
//    return 0;
//}