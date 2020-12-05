#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
int main() {
    char line[1024];
    char* pLine;
    char input[1000];

    int choice;
    printf("Please enter the number\n\n");
    printf("1: file test program(It runs very fast if cached.)\n\n");
    printf("2: read file\n\n");
    printf("3: both (test and read)\n\n");

    printf("select number : ");
    scanf("%d", &choice);
        while (choice == 1 || 2 || 3) {

    printf("\n");
    if (choice == 1) {
        printf("Enter the path to the file you want to test(example : c:\\test\\test.c) : ");
        scanf("%s", input);
        clock_t start, finish;
        double duration;
        start = clock();
        FILE* in = fopen(input, "r");
        if (in == NULL) {
            printf("ERROR!!! Please restart this program and enter the correct path.\n");
            return 1;
        }
        while (!feof(in)) {
            pLine = fgets(line, 1024, in);
        }
        finish = clock();
        duration = (double)(finish - start) / CLOCKS_PER_SEC;
        printf("\nrunning time : %fsecond(s) \n", duration);

        fclose(in);
        return 0;
    }
    else if (choice == 2) {
        printf("Enter the path to the file you want to test(example : c:\\test\\test.c) : ");
        scanf("%s", input);
        FILE* in = fopen(input, "r");
        if (in == NULL) {
            printf("ERROR!!! Please restart this program and enter the correct path.\n");
            return 1;
        }
        while (!feof(in)) {
            pLine = fgets(line, 1024, in);
            printf("%s", pLine);
        }
        fclose(in);
        return 0;
    }
    else if (choice == 3) {
        printf("Enter the path to the file you want to test(example : c:\\test\\test.c) : ");
        scanf("%s", input);
        clock_t start, finish;
        double duration;
        start = clock();
        FILE* in = fopen(input, "r");
        if (in == NULL) {
            printf("ERROR!!! Please restart this program and enter the correct path.\n");
            return 1;
        }
        while (!feof(in)) {
            pLine = fgets(line, 1024, in);
            printf("%s", pLine);
        }
        finish = clock();
        duration = (double)(finish - start) / CLOCKS_PER_SEC;
        printf("\nrunning time : %fsecond(s) \n", duration);

        fclose(in);
        return 0;
    }
    else printf("ERROR!!! Please restart this program and enter the correct number.\n");
        printf("select number : ");
        scanf("%d", &choice);
        }
}
