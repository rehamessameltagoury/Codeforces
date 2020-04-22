# C. Hill Cipher
                                                  time limit per test2 seconds
                                                memory limit per test1024 megabytes

Playfair Cipher tried to solve the frequency analysis vulnerability by taking each 2 letters together. However, frequency analysis on 2 letters is still possible. Hill cipher completely overcomes the frequency analysis vulnerability by allowing you to choose the number of letters to take together. For a description of Hill Cipher, you can skim through this website.(Please use the website only for description. You can't count on its simulator since it's different than what's required here. We append X whenever we need extra characters.)

Note that the key is usually a bunch of English letters that you can map into numbers from A(0) to Z(25) and then use them to form the matrix. In this problem, you'll be given the key as a bunch of numbers(ranging from 0 to 109) instead.

While encrypting, if you happen to need some extra characters, append the character X as many times as you need.

We'd like to implement Hill Cipher encryptor. You might find the following hints useful:



# Input
    The input consists of 3 lines. The first line contains the length of the key L(0 < L ≤ 104) L is guaranteed to be a perfect square. 
    The second line contains L numbers X(0 ≤ X ≤ 109) which represent the key. You can use these numbers to form the key matrix of
    Hill Cipher. The last line contains the plaintext to encrypt. It is a single string that consists of at most 100 characters. 
    Each character is a capital English alphabetical character.

# Output
    You should print the result of Hill Cipher encryption of the plain text using the key described above. 
    The output should be a string of size that is bigger than or equal to the size of the plaintext(since you might need to append Xs 
    while encrypting) and that consists only of capital English alphabetical letters.

# Example
        input
            4
            7 8 11 11
            SHORT
        output
            APADFU
