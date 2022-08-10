// 프로그래머스 - 없는 숫자 더하기
// https://school.programmers.co.kr/learn/courses/30/lessons/86051
// HYUN JAE CHO
#include <stdio.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    const sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9;
    int given_sum = 0;
    for(int i = 0; i < numbers_len; ++i)
    {
        given_sum += numbers[i];
    }
    return sum - given_sum;
}
