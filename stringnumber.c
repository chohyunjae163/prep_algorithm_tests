//https://school.programmers.co.kr/learn/courses/30/lessons/81301?language=c
//숫자 문자열과 영단어
//author : hyunjaecho

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    char digits[100];
    int index = 0;
    while(*s != '\0')
    {
        if(*s >= '0' && *s <= '9')
        {
            digits[index] = *s;
            ++s;
        }
        else if(*s == 'z')
        {
            digits[index] = '0';
            s +=4;
        }
        else if(*s == 'o')
        {
            digits[index] = '1';
            s+=3;
        }
        else if(*s == 't')
        {
            if(*(s + 1) == 'w')
            {
                digits[index] = '2';
                s+=3;
            }
            else if(*(s + 1) =='h')
            {
                digits[index] = '3';
                s+=5;
            }
        }
        else if(*s == 'f')
        {
            printf("four %c\n",*s);
            if(*(s + 1) == 'o')
            {
               
                digits[index] = '4';
                s+=4;
            }
            else if(*(s + 1) =='i')
            {
                digits[index] = '5';
                s+=4;
            }
        }
        else if(*s == 's')
        {
            if(*(s + 1) == 'i')
            {
                digits[index] = '6';
                s+=3;
            }
            else if(*(s + 1) =='e')
            {
                digits[index] = '7';
                s+=5;
            }
        }
        else if(*s == 'e')
        {
            digits[index] = '8';
            s+=5;
        }
        else if(*s == 'n')
        {
            digits[index] = '9';
            s+=4;
        }
        ++index;
    }
    answer = atoi(digits);
    return answer;
}
