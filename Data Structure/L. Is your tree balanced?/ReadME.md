# L. Is your tree balanced?
                                                 time limit per test1 second
                                              memory limit per test256 megabytes

Ahmed and Mostafa liked the idea of Binary Search Trees.

Instead of storing a set of key, value pairs in a contiguous data-structure such as an array, a Binary Search Tree is a special binary tree that is used to store the values so that the cost of searching for a certain key is reduced.

They encountered a set of n numbers so they decided to build a BST using these values in the same order at which they are listed. Then, they had a better idea. They decided to determine whether the tree is balanced or not.

## Note:
    "A binary tree is balanced if: (1) both sub-trees are balanced and (2) the height of the two sub-trees differ by **at most** one."

## Input
     A single integer n (1<=n<=1000) representing the number of values in the BST.The second line contains n unique values all in range [1, n].
     These values indicate the order of insertions to the BST. (The first value is inserted into the BST followed by the second value and so on).

## Output
     A single string "YES" if the tree is balanced or "NO" if the tree isn't balanced.

## Examples
          input
              7
              4 2 1 3 6 5 7
          output
              YES
          input
              6
              1 2 3 4 5 6
          output
              NO
          input
              5
              3 4 5 1 2
          output
              YES
          input
              2
              2 1
          output
              YES
          input
              1
              1
          output
              YES
