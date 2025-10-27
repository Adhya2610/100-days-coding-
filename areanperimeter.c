//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter ;

    printf("Enter the length of the rectangle:");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle:");
    scanf("%d",&breadth);

    area = length*breadth;
    printf("the area of the rectangle is : %d\n ", area);
    perimeter = 2*(length + breadth);
    printf("the perimeter the rectangle is: %d" , perimeter);
    
    return 0;
}