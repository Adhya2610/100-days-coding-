// Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/

#include <stdio.h>
int main(){
    int units , amount ;
    printf("enter the number of units:");
    scanf("%d",&units);

     if (units>=1 && units<=100){
        amount = units * 5 ;
        printf("bill rs. %d", amount);
    }
    else if (units>=101 && units<=200){
        amount = 500 + ((units-100)*7);
        printf("bill rs. %d", amount);
    }
    else if (units>=201 && units<=300){
        amount = 1200 +((units - 200)*10);
        printf("bill rs. %d", amount);
    }  
    else if(units >= 300 ) {
        amount = ((units-300)*12)+2200 ;
        printf("bill rs. %d", amount);
    }
    return 0;
}