#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    system ("chcp 65001");
    int array[N], i;  
    for(i=0; i<N; i+=1){
        printf("Введіть %d ціле значення в масив: ", i+1);
        scanf("%d", &array[i]);
    }

    int *p;
    int *end = array + N;
    int sum = 0;
    int count = 0;
    for(p=array; p < end; p+=1){
        if(*p>0){
            sum += *p;
            count += 1;
        }
    }

    if(count >= 1){
        float average = (float)sum / count; 
        printf("Середнє арифметичне додатніх елементів цілочисленого масиву: %.3f", average);
    }
    else{
        puts("Були введені лише від'ємні значення, спробуйте ще раз!");
    }

    return 0;
}