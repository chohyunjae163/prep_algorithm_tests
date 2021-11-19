//question:
//https://programmers.co.kr/learn/courses/30/lessons/77484#fn1
// given a lottery ticket and the winning numbers, get the possible highest and the possible lowest prizes
using System;

public class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        bool[] storage = new bool[45];
        int match_count = 0;
        int joker_count = 0;
        foreach (int my_number in lottos)
        {
            if(my_number == 0) //zero can be any number.
            {
                joker_count += 1;
            }
            else
            {
                storage[my_number - 1] = true; 
            }
        }
        
        foreach (int win_num in win_nums)
        {
            if(storage[win_num - 1])
            {
                match_count += 1;
            }
        }
        int highest = joker_count + match_count;
        int lowest = match_count;
        int[] answer = new int[2] {0,0};
        
        for(int i =0 ; i < 2; ++i)
        {
            switch(i == 0 ? highest : lowest)
            {
                case 6: answer[i] = 1;break;
                case 5: answer[i] = 2;break;
                case 4: answer[i] = 3;break;
                case 3: answer[i] = 4;break;
                case 2: answer[i] = 5;break;
                default:answer[i] = 6;break;
            }
        }        
        return answer;
    }
}
