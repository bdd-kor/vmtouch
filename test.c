#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <sys/time.h>
#include <unsitd.h>

int main() {
    char line[1024];
    char* pLine;
    char input[1000];

    int choice;
     struct timeval start_time;
    struct timeval end_time;
    double execution_time;
    printf("Please enter the number\n\n");
    printf("1: file test program(It runs very fast if cached.)\n\n");
    printf("2: read file\n\n");
    printf("3: both (test and read)\n\n");

    printf("select number : ");
    scanf("%d", &choice);
        while (choice == 1 || 2 || 3) {

    printf("\n");
    if (choice == 1) {
        gettimeofday(&start_time, NULL);
        printf("Enter the path to the file you want to test(example : c:\\test\\test.c) : ");
        scanf("%s", input);
        
        FILE* in = fopen(input, "r");
        if (in == NULL) {
            printf("ERROR!!! Please restart this program and enter the correct path.\n");
            return 1;
        }
        while (!feof(in)) {
            pLine = fgets(line, 1024, in);
        }
       gettimeofday(&end_time, NULL);
            execution_time = (double)(end_time.tv_sec) + (double)(end_time.tv_usec) / 1000000.0 - (double)(start_time.tv_sec) - (double)(start_time.tv_usec) / 1000000.0;
        printf("\nrunning time : %fsecond(s) \n", execution_time);
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
        gettimeofday(&start_time, NULL);
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
        gettimeofday(&end_time, NULL);
        execution_time = (double)(end_time.tv_sec) + (double)(end_time.tv_usec) / 1000000.0 - (double)(start_time.tv_sec) - (double)(start_time.tv_usec) / 1000000.0;
        printf("\nrunning time : %fsecond(s) \n", execution_time);

        fclose(in);
        return 0;
    }
    else printf("ERROR!!! Please restart this program and enter the correct number.\n");
        printf("select number : ");
        scanf("%d", &choice);
        }
}
