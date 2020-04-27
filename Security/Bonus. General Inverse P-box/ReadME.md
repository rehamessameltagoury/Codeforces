# Bonus. General Inverse P-box
                                                  time limit per test2 seconds
                                                  memory limit per test64 megabytes

Given a permutation box, output its inverse permutation box(The permutation box that when given the output of the original permutation box as an input, produces as its output the input to the original permutation box.) If the permutation box is non reversible, output a single line "IMPOSSIBLE".

The input and output sizes of the permutation box are NOT necessarily equal. Note: Multiple solutions might exist, you should output the one that is lexicographically smaller. See Notes for extra details.

# Input
  The first line consists of 2 numbers which, respectively, represent the size of the input of the P-box (in) and the size of the output of the P-box (out). 1 ≤ in, out ≤ 128. The second line contains out numbers that represent the P-box. Each number is between 1 and in.

# Output
   Output 1 line that contains in numbers which represent the inverse P-box.

# Example
      input
      1 2
      1 1
      output
      1
# Note
  In the first sample, 2 possible inverse P-boxes are: 1, 2. You should output 1 not 2 because it is lexicographically smaller.
