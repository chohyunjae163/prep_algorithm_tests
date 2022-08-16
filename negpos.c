//https://school.programmers.co.kr/learn/courses/30/lessons/76501
//코딩테스트 연습 월간 코드 챌린지 시즌2 음양 더하기

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int answer = 0;
    for(int i = 0; i < absolutes_len;++i)
    {
        answer += signs[i] ? absolutes[i] : -absolutes[i];
    }
    return answer;
}
