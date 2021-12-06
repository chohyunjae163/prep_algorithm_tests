/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//Programming for the Puzzled
// by Srini Devadas
// You Will All Conform

char caps_1[13] = { 'F','F','B','B','B','F','B','B','B','F','F','B','F'};
char caps_2[13] = { 'F','F','B','B','B','F','B','B','B','F','F','F','F'};
void pleaseConform(char*);

typedef struct Interval {
    int start;
    int end;
    char label;
} Interval;

typedef struct Node* PNode;
typedef struct Node {
    Interval interval;
    PNode next;
} Node;

int main()
{
    printf("Hello World");
   
    return 0;
}

void pleaseConform(char* caps)
{
    int start, forward, backward = 0;
     
}
