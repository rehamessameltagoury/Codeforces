# I. Parentheses
                                              time limit per test5 seconds
                                            memory limit per test256 megabytes

A bracket is considered to be any one of the following characters: ( , ) , { , } <, >, [ , or ] .

Two brackets are considered to be a matched pair if the an opening bracket (i.e., ( , [ , < or { ) occurs to the left of a closing bracket (i.e., ) , ], >, or } ) of the exact same type .

There are four types of matched pairs of brackets: [] , {} , <> and () .

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, ( , and the pair of parentheses encloses a single, unbalanced closing square bracket, ] .

By this logic, we say a sequence of brackets is balanced if the following conditions are met:

- It contains no unmatched brackets.

- The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.

Given strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, return YES . Otherwise, return NO .

## Input
      The first line contains a single integer n, the number of strings.Each of the next n lines contains a single string , a sequence of brackets.

      Constraints: - 1 <= n <= 1000

      - Each string will have length that is less than 1000.

      - The string contains only the following characters (){}<>[].

## Output
    For each string, print YES or NO.

Note: Make sure you separate the output by newlines (Don't print the outputs in a single line).

## Examples
          input
                3
                {[()]}
                {[(])}
                {{[[(())]]}}
          output
                YES
                NO
                YES
          input
                2
                {{([])}}
                {{)[](}}
          output
                YES
                NO
          input
                3
                {(([])[])[]}
                {(([])[])[]]}
                {(([])[])[]}[]
          output
                YES
                NO
                YES
