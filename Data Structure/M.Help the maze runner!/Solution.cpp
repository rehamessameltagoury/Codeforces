#include <iostream>
#include <string>
#include <queue>
using namespace std;
int n;
 
class QItem {     
public: 
    int row; 
    int col; 
    int dist; 
    QItem(int x, int y, int w) 
        : row(x), col(y), dist(w) 
    { 
    } 
}; 
  
int minDistance(char **grid) 
{ 
    QItem source(0, 0, 0); 
 
    bool **visited;
    visited = new bool* [n];
    for (int i = 0; i < n; i++)
     visited [i] = new bool [n];
     
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
        { 
            if (grid[i][j] == '0') 
                visited[i][j] = true; 
            else
                visited[i][j] = false; 
  
            // Finding source 
            if (grid[i][j] == 's') 
            { 
               source.row = i; 
               source.col = j; 
            } 
        } 
    } 
  
    // applying BFS on matrix cells starting from source 
    queue<QItem> q; 
    q.push(source); 
    visited[source.row][source.col] = true; 
    while (!q.empty()) { 
        QItem p = q.front(); 
        q.pop(); 
  
        // Destination found; 
        if (grid[p.row][p.col] == 'd') 
            return p.dist; 
  
        // moving up 
        if (p.row - 1 >= 0 && 
            visited[p.row - 1][p.col] == false) { 
            q.push(QItem(p.row - 1, p.col, p.dist + 1)); 
            visited[p.row - 1][p.col] = true; 
        } 
  
        // moving down 
        if (p.row + 1 < n && 
            visited[p.row + 1][p.col] == false) { 
            q.push(QItem(p.row + 1, p.col, p.dist + 1)); 
            visited[p.row + 1][p.col] = true; 
        } 
  
        // moving left 
        if (p.col - 1 >= 0 && 
            visited[p.row][p.col - 1] == false) { 
            q.push(QItem(p.row, p.col - 1, p.dist + 1)); 
            visited[p.row][p.col - 1] = true; 
        } 
  
         // moving right 
        if (p.col + 1 < n && 
            visited[p.row][p.col + 1] == false) { 
            q.push(QItem(p.row, p.col + 1, p.dist + 1)); 
            visited[p.row][p.col + 1] = true; 
        } 
    } 
    return -1; 
} 
 
int main() 
{   
    int x1,y1,x2,y2;
    char c;
    char **grid;
    cin>>n;
    grid = new char* [n];
    
 for(int i=0; i<n;i++)
 {
  grid[i] = new char [n];
  for (int j=0; j<n;j++)
  { 
    cin>>c;
    if(c == 'X')
    {/*we can't step on a block*/
    grid[i][j]='0';
    }
    else if (c == '.')
    {
    grid[i][j]='*';
    }
  }
 } 
 
 cin>>x1>>y1>>x2>>y2;
 grid[x1][y1]='s';
 grid[x2][y2]='d';   
  
    cout << minDistance(grid); 
    return 0; 
}
