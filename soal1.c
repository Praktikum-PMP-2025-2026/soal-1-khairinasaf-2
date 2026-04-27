/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 3
 *   Hari dan Tanggal    : Senin, 27 April 2026
 *   Nama (NIM)          : Khairina Safira Nurazizah (13224021)
 *   Nama File           : 
 *   Deskripsi           : soal 1
 * 
 */

#include <stdio.h>
#include <stdlib.h>

void bubbleSorting(int n, int arr[]){
    for(int i = 0; i < n -1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int capacity = 10;
    int n = 0;
    int x;
    int *arr = (int*)malloc(capacity * sizeof(int));

    if(arr == NULL){
        printf("Gagal mengalokasikan memori!");
        return 0;
    }

    scanf("%d", &x);

    while (x != -1){
        if(n == capacity){
            capacity = capacity * 2;
            arr = (int*) realloc(arr, capacity * sizeof(int));
        }

        arr[n] = x;
        n++;
        scanf("%d", &x);
    }

    printf("COUNT %d ", n);
    
    bubbleSorting(n, arr);

    printf("SORTED");
    for(int i = 0; i < n; i++){
        printf(" %d", arr[i]);
    }

    printf(" MEDIAN ");
    if(n%2 == 0){
        float median;
        median = (arr[(n/2) - 1] + arr[n/2]) / 2.0;
        printf("%.2f", median);
    }
    else{
        printf("%d\n", arr[n/2]);
    }

    free(arr);
    return 0;
}


/*
source:
https://www.geeksforgeeks.org/c/c-program-to-sort-an-array-in-ascending-order/
https://www.geeksforgeeks.org/c/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm
https://www.tutorialspoint.com/c_standard_library/c_function_realloc.htm

*/
