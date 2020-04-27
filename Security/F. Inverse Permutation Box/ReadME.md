# F. Inverse Permutation Box
                                         time limit per test2 seconds
                                        memory limit per test64 megabytes

Given a permutation box, output its inverse permutation box(The permutation box that when given the output of the original permutation box as an input, produces as its output the input to the original permutation box.) If the permutation box is non reversible, output a single line "IMPOSSIBLE".

For this problem, we'll assume that the input and the output of the permutation box are of the same size. Hint: A permutation box having input size equal to the output size does not necessarily mean it is reversible. Think about the conditions that are required to make the permutation box reversible.

# Input
  The input consists of 2 lines. The first line contains a number S that represents the size of the permutation box which also represents the size of its input and output. The second line contains S numbers in decimal format that represent the values inside the permutation box which represent the order of the bits in the output with respect to the order of the bits in the input.

# Output
  In case the given permutation box is reversible, output a single line containing the values in the inverse permutation box as described in the statement. In case the given permutation box is irreversible, output a single line containing "IMPOSSIBLE" without the quotes.

# Example
        input
        16
        8 4 16 12 7 3 15 11 6 2 14 10 5 1 13 9
        output
        14 10 6 2 13 9 5 1 16 12 8 4 15 11 7 3
# Note
     The sample is the problem in Sheet 2.
