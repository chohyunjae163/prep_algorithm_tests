//https://school.programmers.co.kr/learn/courses/30/lessons/42626
//프로그래머스 문제 풀이 더 맵게 C+++ 
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;

    //프라이오리티큐로 만든다
    //탑 엘리먼트가 가장 작은 값이 되게 std::greater를 넣어준다.
    priority_queue<int, std::vector<int>, std::greater<int>> pq (scoville.begin(),scoville.end());

    //가장 작은 값과 두번째 작은값을 얻은다음 새로운 스코빌 값을 얻어주고 다시 넣어주는걸 반복한다
    while(!pq.empty())
    {
        if(pq.size() == 1) break; // 음식이 1개라면 새로운 음식을 만들수 없으므로 섞는것을 그만한다.
        if(pq.top() >= K) break; //가장 작은 값이 K와 같거나 크다면 모든 음식의 스코빌 지수를 K 이상으로 만든것이므로 그만 섞는다.

        int first_min_val = pq.top();
        pq.pop();
        int second_min_val = pq.top();
        pq.pop();
        int new_scoville = first_min_val + (second_min_val * 2);
        pq.push(new_scoville);
        answer++;
    }
    //섞는게 끝났는데도 불구하고 가장 작은 값이 K값보다 낮다면 정답은 -1이다.
    if(pq.top() < K)
    {
        answer = -1;
    }

    return answer;
}
