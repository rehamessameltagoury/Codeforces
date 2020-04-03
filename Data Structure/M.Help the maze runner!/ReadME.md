# M. Help the maze runner!
                                            time limit per test2 seconds
                                          memory limit per test256 megabytes

Baher, Islam, Omar, Ebram and Mariam have watched "The maze runner" movie.

The film inspired them to solve simple 2D mazes.

Given a square maze (of size n*n) consisting of . (free cells) and # (blocks), They want to write a program that can find the length of the shortest path between a starting and a goal cell.

The maze runner can't step on a # block.

Additionally, the runner can only move horizontally or vertically (diagonal movements aren't allowed).

## Input
      A single integer n (3<=n<=100) determining the size of the grid.Then n lines describing the square grid will be entered.
      Each line will be of length n and consist only of dots and hashes.The last line will contain 4 integers (startR, startC,
      destinationR, destinationC). All the integers are in range [0, n[ (Zero-indexed grid).

## Output
      A single integer min_dis which indicates the number of steps required to move from the starting cell to the destination one.

## Note: It is guaranteed that there exists a path between the starting and destination cells.

## Examples
       input
           3
          .X.
          .X.
          ...
          0 0 0 2
       output
          6
      input
         3
        ...
        .X.
        .X.
        2 0 2 2
      output
          6 
      input
          10
      .X..XX...X
      X.........
      .X.......X
      ..........
      ........X.
      .X...XXX..
      .....X..XX
      .....X.X..
      ..........
      .....X..XX
      9 1 9 6
       output
          7
          
          
# Note
        The coordinates of the grid's boundaries are:

        Top Left cell(0,0)

        Top Right cell(0,n-1)

        Bottom Left cell(n-1,0)

        Bottom Right cell(n-1,n-1)


          
      
