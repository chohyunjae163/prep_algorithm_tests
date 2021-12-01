// This is a basic program on C
//
// Try to modify and run it and check out
// the output in the terminal below
//
// Happy coding! :-)

#include <stdio.h>

int loop_fibo(int);
int recur_fibo(int);
int memo_fibo(int);
int memo[100];

int main() {
  printf("Hello, World!\n");
  memo[0] = 0;
  memo[1] = 1;
  for(int i = 2; i < 100;i++)
  {
    memo[i] = -1;
  }
  printf("fibo value  : %d", loop_fibo(10));
  return 0;
}

int loop_fibo(int num)
{
  if (num < 2) return num;
  int sum = 0;
  int n1 = 0;
  int n2 = 1;
  for( int i = 0; i <= num-2;++i)
  {
    sum = n1 + n2;
    n1 = n2;
    n2 = sum;
  }
  return sum;
}

int recur_fibo(int num)
{
  if (num < 2) //base case
  {
     return  num;
  }
  return recur_fibo(num -1) + recur_fibo(num -2); //recursive case

}


int memo_fibo(int num)
{
  if (memo[num] == -1)
  {
     memo[num] = memo_fibo(num - 1) + memo_fibo(num -2);
  }
  return memo[num];
}
