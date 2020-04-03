# Binary Search
                                          time limit per test1 second
                                        memory limit per test256 megabytes

Given a Sorted Array, test the existence of a number in it showing the array you're searching through at each step. In case the array had an even number of elements(For example 4 elements), you should look at the number just less than half(The second element in our example.)

## Input
      The input consists of 3 lines. The first line contains a single number X(0 ≤ X ≤ 1000000), the number we are searching for. 
      The second lines contains a single number N(0 ≤ N ≤ 100), the size of the array. The third line contains N numbers which represent 
      the numbers in the array. It is guaranteed that the numbers are ascending as the array is sorted. Each number is between 0 and 1000000.

## Output
        You should output the values in the array after each iteration of the binary search.
        At the last line you should output "YES" if the element exists in the array and "NO" if the element does not exist in the array.

## Examples
          input
              3
              10
              1 2 3 4 5 6 7 8 9 10
          output
              1 2 3 4
              3 4
              YES
          input
              3
              5
              1 3 5 6 7
          output
              1 3
              3
              YES
          input
              2
              6
              1 3 5 7 9 10
          output
              1 3
              3
              NO
