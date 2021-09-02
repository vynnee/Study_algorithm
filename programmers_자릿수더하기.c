#include stdio.h
#include stdbool.h
#include stdlib.h

int solution(int n) {
    int answer = 0;
    
    int sum = 0;
    while(n0){
        sum += n%10;
        n = 10;
    }
    answer = sum;
    
    return answer;
}