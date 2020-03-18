# C. Codeforces Rating
                                            time limit per test2 seconds
                                          memory limit per test64 megabytes

Tourist likes competitive programming and he has his own Codeforces account. He participated in lots of Codeforces Rounds, solved so many problems and became "Legendary Grand Master" (the highest rank on Codeforces). One day, he logged in to check his account. Something wrong happened: his name was in black, like he never participated in any Codeforces Rounds and his rating was incorrect. He received an e-mail from Mike Mirzayanov (the founder of the website), "we are very sorry for this mistake, everything will be fixed in few minutes" Mike said. Tourist is relaxed now. He decided to have some fun until the bug is fixed, he also would like to help the founders of the website to fix all the bugs, so he will select a random user on Codeforces, open his contests page and start to sum the rating changes. Finally, he will make sure the sum is equal to the final rating of this user. Note: when someone creates a new Codeforces account, the initial rating is 1500.

## Input

      The input consists of several test cases. 
      The first line of the input contains a single integer T, the number of the test cases.
      Each test case starts with a single line containing two space-separated integers N and R: N is the number of rating changes and
      R is the final rating of the user. (1 ≤ N ≤ 100, 0 ≤ R ≤ 4000). 
      The next line contains N space-separated integers a0, a1, ..., an - 1
      where  - 2000 ≤ ai ≤ 2000, 0 ≤ i < N (ai represents the change in rating in the ith contest where 0 ≤ i < N)

## Output

     For each test case, print a single line: "Correct" if the sum of rating changes (plus 1500) is equal to the final rating of the user 
     and "Bug" otherwise.

## Example

          ### Input

                  3
                  5 2000
                  100 100 100 100 100
                  2 1600
                  100 5
                  3 100
                  100 -1800 300
          ### output

                  Correct
                  Bug
                  Correct
