#include <stdio.h>
#include <stdlib.h>

extern int addnums(int *nums, int n);

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);

    int *nums = (int *)malloc(n * sizeof(int)); // 메모리 할당
    int *ptr = nums;

    for(int i=0; i<n; i++) {
        ptr[i] = i+1;
    }
    printf("%d ", addnums(ptr, n));

    free(nums);
    nums = NULL;

    nums = (int *)realloc(nums, m * sizeof(int)); // 메모리 재할당
    ptr = nums;

    for(int i=0; i<m; i++) {
        ptr[i] = n+i+1;
    }
    printf("%d\n", addnums(ptr, m));

    free(nums);

    return 0;
}

