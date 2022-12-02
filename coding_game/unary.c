//https://www.codingame.com/ide/puzzle/unary

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

struct Stack 
{
    int data[1024];
    int top;
};

int main()
{
    char MESSAGE[101];
    scanf("%[^\n]", MESSAGE);
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    int output[1024];
    int output_len = 0;
    for(int i = 0;  MESSAGE[i] != '\0';++i)
    {
        unsigned int c = MESSAGE[i];
        struct Stack s;
        s.top = -1;
        while(c > 0)
        {
            int remainder = c % 2;
            int quotient = c >> 1;
            c = quotient;
            s.data[++s.top] = remainder;
        }
        //if input is a single character and less than 65, padding is needed. add 0 at the beginning. cuz ASCII characters have 7 bits.
        if(MESSAGE[i] < 'A')
        {
            s.data[++s.top] = 0;
        }
        while(s.top > -1)
        {
            output[output_len++] = s.data[s.top];
            s.top--;
        }
    }

    char result[1024];
    int result_index = 0;
    
    for(int i = 0; i < output_len; )
    {
        //process first block
        
        int n = output[i];
        for(int j = 0; j < 2 - n; ++j)
        {
            result[result_index++] = '0';
        }
        result[result_index++] = ' ';
        
        //process second block -  the number of bits in the series
        int count;
        for(count = 1;  output[++i] == n && i < output_len; ++count);

        for(int k = 0; k < count; ++k)
        {
            result[result_index++] = '0';
        }
        result[result_index++] = ' ';
    }
    //the last character has a space, but it is not needed. so just add a null character at that position.
    result[--result_index] = '\0';

    for(int i = 0; i < result_index; ++i)
    {
        printf("%c",result[i]);
    }
    return 0;
}
