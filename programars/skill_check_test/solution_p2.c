#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double sum = 0, answer = 0;
        
    for(int i = 0; i < arr_len; i++){
        sum = sum + arr[i];
    }
    answer = sum / arr_len;
    
    return answer;
}