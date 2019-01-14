#include <stdio.h>
#include <stdlib.h>
int main(void){


    // 一维数组 
    printf("Size of int: %d(byte)\n", sizeof(int));
    printf("Addresses of array\n");
    int arr[3] = {1, 2, 3}, i, j;
    for(i = 0; i < 5; i++){
        printf("%d:\t%d\n", arr + i, *(arr + i));
    }

    // 二维数组
    printf("Addresses of two dimensional array\n");
    int mat[2][5] = {1, 2, 5, 4, 5, 6};
    int *p = mat;
    printf("%d:\t%d\n", &p, p);
    for(i = 0; i < 6; i++){
        printf("%d:\t%d\n", p+i, *(p+i));
    } 
 
     // 一维指针
     printf("Addresses of one dimensional pointer\n");
    p = (int*) malloc(sizeof(int) * 5);
    printf("%d:\t%d\n", &p, p);
    for(i = 0; i < 5; i++){
        *(p + i) = i;
    }
    for(i = 0; i < 5; i++){
        printf("%d:\t%d\n", p+i, *(p+i));
    }

    // 二维指针
    printf("Addresses of two dimensional pointer\n");
    int** ptr = (int**) malloc(sizeof(int*) * 1);
    printf("%d:\t%d\n", &ptr, ptr);
    for(i = 0; i < 1; i++){
        *(ptr + i) = (int*) malloc(sizeof(int) * 1);
    }
    for(i = 0; i < 1; i++){
        for(j = 0; j < 1; j++){
            *(*(ptr+i) + j) = i * 1 + j;
        }
    }
    for(i = 0; i < 1; i++){
        printf("%d:\t%d\n", ptr + i, *(ptr + i));
    }
    printf("==\n");
    for(i = 0; i < 1; i++){
        for(j = 0; j < 1; j++){
            printf("%d:\t%d\t%d\n",*(ptr + i) + j, *(*(ptr + i) + j), ptr[i][j]);
        }
        printf("==\n");
    }
    // 下面的程序是必须的，否则内存泄漏，导致内存占用过多 
    free(p);
    for(i = 0; i < 1; i++){
        free(*(ptr + i));
    } 
    free(ptr);

    return 0;
}
