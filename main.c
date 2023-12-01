#include <stdio.h>

int main() {
    int firstArr[10];
    int secondArr[10];
    for(int i = 0 ; i < 10 ; ++i) {
        printf("i = %d < 10? - True\n", i);
        firstArr[i] = 35 + 3 * i;
        secondArr[i] = 56 - 2 * i;
        printf("firstArr[i] = %d\n", firstArr[i]);
        printf("secondArr[i] = %d\n", secondArr[i]);
    }
    printf("i = 10 < 10 ? False\n");
    int Count = 0;
    int thirdArr[10];
    printf("\nCount = 0\n\n");
    for(int i = 0 ; i < 10 ; ++i) {
        printf("i = %d < 10? - True\n", i);
        for(int j = 0 ; j < 10 ; ++j) {
            printf("j = %d < 10? - True\n", j);
            if(firstArr[i] == secondArr[j]) {
                printf("%d == %d ? - True\n", firstArr[i], secondArr[j]);
                printf("thirdArr[%d] = %d\n", Count, firstArr[i]);
                printf("Count = %d\n", Count + 1);
                thirdArr[Count] = firstArr[i];
                ++Count;
            }
            else {
                printf("%d == %d ? - False\n", firstArr[i], secondArr[j]);
            }
        }
        printf("j = 10 < 10 ? False\n");
    }
    printf("i = 10 < 10 ? False\n");
    int cnt = 0;
    double sum = 0;
    for(int i = 0 ; i < Count ; ++i) {
        printf("i = %d < 10? - True\n", i);
        if(thirdArr[i] > 38) {
            printf("%d > 38 ? - True\n", thirdArr[i]);
            printf("cnt = %d\n", cnt + 1);
            printf("sum = %lf\n", sum + thirdArr[i]);
            ++cnt;
            sum += thirdArr[i];
        }
        else {
            printf("%d > 38 ? - False\n", thirdArr[i]);
        }
    }
    printf("i = 10 < 10 ? False\n");
    printf("Res = %lf", sum / (1.0 * cnt));
    return 0;
}


