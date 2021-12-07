// Programming for the Puzzled by Srini Devadas
// Chapter 1 : You Will All Conform
// generate the minimum number of commands.
// conflate contiguous people with the same cap orientations by grouping them into an interval. After the intervals have been determined,
// we have exactly the same situation as the alternating people above -- there will be m forward intervals interspersed between m, m-1, or
// m + 1 backward intervals. choose the orientation that results in fewer commands.

#include <stdio.h>

// input samples
char caps_1[13] = {'F', 'F', 'B', 'B', 'B', 'F', 'B', 'B', 'B', 'F', 'F', 'B', 'F'};  // 3
char caps_2[13] = {'F', 'F', 'B', 'B', 'B', 'F', 'B', 'B', 'B', 'F', 'F', 'F', 'F'};  // 2

int pleaseConform(char *);
int main()
{
    int numCommands = pleaseConform(caps_2);
    printf("numCommands : %d \n", numCommands);
    return 0;
}

int pleaseConform(char *caps)
{
    // get the size of array
    size_t size = sizeof(caps_1) / sizeof(char);
    printf("cap length : %d \n", size);
    char latest = *caps;
    int forward = latest == 'F' ? 1 : 0;
    int backward = forward ^ 1;
    for (int current = 1; current < size; ++current)
    {
        if (latest != *(caps + current))
        {
            if (*(caps + current) == 'F')
            {
                ++forward;
            }
            else if (*(caps + current) == 'B')
            {
                ++backward;
            }
        }
        latest = *(caps + current);
    }
    printf("forward : %d \n", forward);
    printf("backward : %d \n", backward);
    return forward <= backward ? forward : backward;
}
