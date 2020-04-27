# E. Permutation Box
                                                       time limit per test2 seconds
                                                      memory limit per test64 megabytes

Given a permutation box and an input plaintext(in Hex format), print the output of the permutation box(in Hex format). It is worth noting that the given permutation box doesn't have to be a straight permutation box(Where the size of the input is equal to the size of the output.) It can be either an expansion permutation box(Where the output is larger than the input, in this case, some bits of the input are repeated in the output.) or a contraction permutation box(Where the output is smaller than the input, in this case, some bits of the input do not appear in the output.)

# Input
  The input consists of 4 lines. The first line consists of a single number S that represents the size of the output of the permutation box (4 ≤ S ≤ 256) also S is a multiple of 4. The second line contains S numbers in decimal format separated by spaces which represent the values inside the permutation box that represent the order in which the output should be with respect to the input The values will be always within the size of the input (From 1 to N). The third line consists of a single number N that represents the size of the input of the permutation box (4 ≤ N ≤ 64) also N is a multiple of 4. The fourth line contains N / 4 Hex characters that represent the input to the permutation box.

# Output
    The output should be a single line that consists of the output of the permutation box in hex format.
    It would be S / 4 characters. All Hex characters should be in Capital not small. Small letters might get you a wrong answer.

# Examples
      input
          16
          8 4 16 12 7 3 15 11 6 2 14 10 5 1 13 9
          16
          A0AF
      output
          2727
      input
          8
          1 1 1 1 1 1 1 1
          4
          A
      output
          FF
      input
          8
          1 2 3 4 5 6 7 16
          16
          FFFF
      output
          FF
# Note
   The first sample is the first problem in Sheet 2

