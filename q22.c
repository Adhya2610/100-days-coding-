// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>

int main() {
    float cp, sp, prof, loss, lossp, profp;
    
    printf("enter the cost price:");
    scanf("%f", &cp);
    printf("enter the selling price:");
    scanf("%f", &sp);

    if (sp > cp) {
        prof = sp - cp;
        profp = (prof / cp) * 100;
        printf("Profit %.2f%%\n", profp);
    } else if (cp > sp) {
        loss = cp - sp;
        lossp = (loss / cp) * 100;
        printf("Loss %.2f%%\n", lossp);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}