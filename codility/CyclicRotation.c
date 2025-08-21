/*
An array A consisting of N integers is given. 
Rotation of the array means that each element is shifted right by one index, and 
the last element of the array is moved to the first place. 
For example, 
the rotation of array A = [3, 8, 9, 7, 6] is [6, 3, 8, 9, 7] 
(elements are shifted right by one index and 6 is moved to the first place).
The goal is to rotate array A K times; 
that is, each element of A will be shifted to the right K times.
https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/
*/




struct Results solution(int A[], int N, int K) {
    // Implement your solution here
    struct Results result; 
    result.A = A; 
    result.N = N; 
    if (N < 2) { return result; } 
    K %= N;
    if (K == 0 ) { return result; } 
    int* C = (int*)malloc(sizeof(int) * N); 
    for(int i = 0; i < N; ++i) { C[i] = A[( N - K + i) % N]; } 
    result.A = C; 
    return result;
}
