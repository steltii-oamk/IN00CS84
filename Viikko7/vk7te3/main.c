#include <stdio.h>

int sum(int a, int b);
void second_sum(int a, int b);

int main(){

    int calc=sum(5,6);
    printf("The sum is %d\n",calc);
    second_sum(7,8);
    return 0;
}

int sum(int a, int b){
    int answer=a+b;
    return answer;
}

void second_sum(int a, int b){
    int answer=a+b;
    printf("The sum is %d\n", answer);
}
