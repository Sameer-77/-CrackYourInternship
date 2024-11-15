//Problem Link : https://leetcode.com/problems/game-of-life/description/



class Solution {
public:
    int countLiveNeighbours(vector<vector<int>> board, int x, int y) {
        int liveNeighbours=0;
        int m=board.size(), n=board[0].size();
        for(int i=-1; i<=1; i++) {
            for(int j=-1; j<=1; j++) {
                if(i==0 && j==0) continue;
                
                int nx=x+i, ny=y+j;
                //Checking if it is within bounds if neighbour was alive
                if(nx>=0 && nx<m && ny>=0 && ny<n && (board[nx][ny]==1 || (board[nx][ny]==-1))) {
                    liveNeighbours++;
                }
            }
        }
        return liveNeighbours;
    }
    void gameOfLife(vector<vector<int>>& board) {
        //Before dead --> after live 2
        //Before alive --> after death -1
        int m=board.size(), n=board[0].size();
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                int liveNeighbours = countLiveNeighbours(board,i,j);

                if(board[i][j]==1) {
                    if(liveNeighbours<2 || liveNeighbours>3) {
                        board[i][j]=-1;
                    }
                }
                else {
                    if(liveNeighbours==3) board[i][j]=2;
                }
            }
        }
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(board[i][j]>0) {
                    board[i][j]=1;
                }
                else {
                    board[i][j]=0;
                }
            }
        }
    }
};
