# F. Keyboard
                                                     time limit per test5 seconds
                                                  memory limit per test256 megabytes

As a malicious hacker you are trying to steal your mother's password, and therefore you have installed a keylogger 
on her PC (or Mac, so you like). You have a log from your mother typing the password,
but unfortunately the password is not directly visible because she used the left and right arrows to change the position of the cursor,
and the backspace to delete some characters. Write a program that can decode the password from the given keylog.

## Input
          • One line with a string L, satisfying 1 ≤ Length(L) ≤ 1, 000, 000, consisting of:

          '-' representing backspace: the character directly before the cursor position is deleted, if there is any.
          '<' (and '>') representing the left (right) arrow: the cursor is moved 1 character to the left (right), if possible.
          alphanumeric characters, which are part of the password, unless deleted later. We assume 'insert mode': 
          if the cursor is not at the end of the line, and you type an alphanumeric character,
          then all characters after the cursor move one position to the right. Every decoded password will be of length > 0.
## Output
        For every test case in the input, the output should contain a single string, on a single line: the decoded password.

## Examples
          input
          <<BP<A>>Cd-
          output
          BAPC
          input
          a-b
          output
          b
