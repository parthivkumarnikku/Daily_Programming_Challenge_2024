#include <stdio.h>

//insertion sort function from DAY 1 code
void Insertion_sort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void inorder_merge(int A[], int B[], int m, int n) {
    for (int i = 0; i < m; i++) {
        if (A[i] > B[0]) {
            int temp = A[i];
            A[i] = B[0];
            B[0] = temp;

            Insertion_sort(B, n);
        }
    }

    printf("Array A=");
    for (int i = 0; i < m; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");


    printf("Array B =");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    inorder_merge(arr1, arr2, m, n);

    return 0;
}
