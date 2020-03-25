# K. A Directed Graph? (hard)
                                                  time limit per test3 seconds
                                                memory limit per test256 megabytes

After managing to solve the easy version of the problem, Amr and Khaled decided to challenge some of their colleagues.

They chose to challenge k3rnel-pan1c, hazem.m62, GM91 and zeez– since their account names indicate that they are smart!

Again, They will pick a random area from google maps. However they will choose a much bigger area this time. Then, they will ask k3rnel-pan1c, hazem.m62, GM91 and zeez– to decide whether they need to represent the roads using directed edges or undirected ones.

Can you help them do the decision?

## Input
      The first line will contain two integers n, m (2<=n<=10,000 , 0<=m<= min(n *(n-1), 100,000) ) where n represents the number of nodes in the graph and m represents the number of edges.

      The following m lines will contain two integers a, b (0<=a, b < n , a!=b).

      Each of these lines indicate that there is a one-way road from node a to node b.

## Note: The graph won't have neither multiple edges https://en.wikipedia.org/wiki/Multiple_edges nor self loops https://en.wikipedia.org/wiki/Loop_(graph_theory).

## Output
    Print "DIR" if the graph can only be represented using a directed graph.

    Otherwise, print "BOTH".

## Note: Don't print the double quotes ""!

## Examples
          input
              6 5
              0 1
              2 3
              3 2
              4 5
              5 4
          output
              DIR
          input
              3 6
              0 1
              0 2
              1 0
              1 2
              2 0
              2 1
          output
              BOTH
          input
              2 1
              1 0
          output
              DIR
          input
              2 0
          output
              BOTH
          input
              5 20
              2 0
              3 0
              4 2
              4 3
              2 1
              3 1
              1 0
              1 3
              0 4
              3 4
              1 2
              0 2
              0 3
              4 1
              2 3
              1 4
              3 2
              0 1
              4 0
              2 4
          output
              BOTH
## Note
   The graph may not be connected (There is no guarantee that there is a path between any pair of nodes).

