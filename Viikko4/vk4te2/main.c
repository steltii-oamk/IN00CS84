#include <stdio.h>

int sum(int a, int b);
void second_sum(int a, int b);

int main(){
    int calc;
    int l1, l2, l3, l4;

    l1=100;
    l2=200;
    l3=300;
    l4=400;
    calc=sum(l1,l2);
    printf("The sum is %d\n",calc);
    printf("Luku1 on %i ja Luku2 on %i\n",l1, l2);
    second_sum(l3,l4);
    return 0;
}

int sum(int a, int b){
    int answer=a+b;
    a=1000;
    b=2000;
    return answer;
}

void second_sum(int a, int b){
    int answer=a+b;
    printf("The sum is %d\n", answer);
}
