#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int n;
    int option_selected = 0; // 옵션 선택 여부

    extern char *optarg;

    while((n = getopt(argc, argv, "pn:h")) != -1) { // 옵션 뒤에 콜론(:)은 옵션이 필요하다는 것을 의미
        option_selected = 1;

        switch(n) {
            case 'p':
                printf("Welcome to Linux Server Programming!\n");
                break;
            case 'n':               
                printf("Nice to meet you %s!\n", argv[2]); // argv[2] -> optarg도 가능
                break;
            case 'h':
                printf("Available Options\n");
                printf("[p Welcome to Linux Server Programming!]\n");
                printf("[n Nice to meet you, ???]\n");
                printf("[h Help!]\n");
                break;
        }
    }

    if (!option_selected) {
        printf("Available Options:\n");
        printf("[p Welcome to Linux Server Programming!]\n");
        printf("[n Nice to meet you, ???]\n");
        printf("[h Help!]\n");
    }

    return 0;
}
