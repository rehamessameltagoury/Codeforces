    # A. Reverse Polish Notation
                                       time limit per test5 seconds
                                    memory limit per test256 megabytes

Reverse Polish notation is a mathematical notation in which every operator follows all of it's operands.

Implement a Reverse Polish Notation calculator, with the following operations: +, -, *, /, x, y, z.

x,y,z are special operators that work as follows:

x: A binary operator equivalent to n1*n1 + n2 (e.g.: "5 2 x" = 27)
y: A unary operator equivalent to 2*n + 1 (e.g.: "6 y" = 13)
z: A ternary operator equivalent to n1 + 2*n2 + 3*n3 (e.g.: "1 2 3 z" = 14)
All operations should be done on integers. You should use the symbols + - * / x y z for the operators.

### Note: You can assume that the final result and any intermediate result can fit in a signed 4-byte integer.

## Input
        A single line s containing numbers and operators separated by spaces. 
        Numbers are in range [-100, 100]. If the string is not parse-able, or it leaves extra symbols, output NO.

## Output
        If the input is parse-able, print the result. Otherwise, print "NO".

## Examples
          input
          3 6 /
          output
          0
          input
          9 -
          output
          NO
