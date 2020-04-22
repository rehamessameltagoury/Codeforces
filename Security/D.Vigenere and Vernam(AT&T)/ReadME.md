# D. Vigenere and Vernam(AT&T)
                                                time limit per test2 seconds
                                                memory limit per test64 megabytes

In poly-alphabetic ciphers, the key is repeated so as to match the length of the plaintext. 
Each character of the plaintext is operated upon with a corresponding letter in the key so as to produce the corresponding letter in the ciphertext.

While the table might seem complicated, it is in reality very simple. The top column is the characters in the plaintext while the leftmost column is the characters in the key. Given the character J for example in the plaintext and character K in the ciphertext, you'd go to the column of J and the row of K to get the value T.

A closer look at the table would let you guess that Vigenere cipher is in reality very simple to Caesar cipher with the exception that instead of shifting by a constant amount all the letters, each character in the plaintext is shifted by the number that the corresponding letter in the key represents. For example to get the T, you can say J + K = ?, what is the value of K? If A = 0, B = 1, ... etc. K = 10. Shift J by 10 letters and you get T.

Another simple encryption technique is AT&T(Gilbert Vernam Cipher.) This technique is also a poly-alphabetic technique. However, instead of shifting, what we do here is XOR the plaintext character with the key character to get the ciphertext character. In this technique we deal with the English letters as ASCII characters and we do bitwise XORing between the ASCII value of the plaintext character and the ASCII value of the key character. Since the output would be any ASCII character, it is required to print the ASCII value in hex format. See the samples for more information.


Given a plaintext and a key, can you output the result of the encryption in both cases of Vigenere and AT&T encryptions? In addition, we'd like to know whether this is considered a one-time pad encryption or not. Recall that in one-time pad encryption, the length of the key is the same as the length of the plaintext and this provides unconditional security.

# Input
The input consists of 2 lines. The first line consists of a string that contains the key which consists of only English capital letters and its length is less than 10000 characters. It contains at least 1 character. The second line consists of another string that contains the plaintext which consists of only English capital letters and its length is less than 10000 characters. It contains at least one character. The length of the key is guaranteed to be less than or equal to the length of the plaintext.

# Output
Your output should consist of 3 lines. The first line should contain the string(without the quotes) "Vigenere: " followed by the ciphertext produced by encrypting the plaintext with the key using Vigenere encryption technique described above. The second line should contain the string(without the quotes) "Vernam: " followed by the ciphertext produced by encrypting the plaintext with the key using AT&T encryption technique described above. The third line should contain the string(without the quotes) "One-Time Pad: " followed by "YES" if this encryption is considered one-time pad or "NO" otherwise. Note, your output must include the space that follows the ":" in each line.

# Example
              input
              TEST
              CORRECT
              output
              Vigenere: VSJKXGL
              Vernam: 170A0106110607
              One-Time Pad: NO


# Note
For Vernam cipher, note that T = 0x54 and C = 0x43. The result of XORing both of them is 0x17. For the next character E = 0x45 and O = 0x4F. The result of XORing both of them is 0x0A. and so on. Feel free to consult the documentation of the language you're using to understand how to print hex characters in 2 spaces easily.

