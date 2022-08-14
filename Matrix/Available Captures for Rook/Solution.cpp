/*
https://leetcode.com/problems/available-captures-for-rook/

On an 8 x 8 chessboard, there is exactly one white rook 'R' and some number of white bishops 'B', black pawns 'p', and empty squares '.'.
When the rook moves, it chooses one of four cardinal directions (north, east, south, or west), 
then moves in that direction until it chooses to stop, reaches the edge of the board,
captures a black pawn, or is blocked by a white bishop. 
A rook is considered attacking a pawn if the rook can capture the pawn on the rook's turn. 
The number of available captures for the white rook is the number of pawns that the rook is attacking.
Return the number of available captures for the white rook.

Input: board = [[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".","R",".",".",".","p"],[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."]]
Output: 3
Explanation: In this example, the rook is attacking all the pawns.
*/


int numRookCaptures(vector<vector<char>>& board) {
    int count=0;
    int row = 0;
    int col = 0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j] == 'R'){
                row = i;
                col = j;
            }
        }
    }
     
    //top check
    int row_top = row;
    while(row_top!= -1){
        if(board[row_top][col] == 'p'){
            count++;
            break;
        }
         else if(board[row_top][col] == 'B'){
            break;
        }
        row_top--;
    }
    //bottom check
    int row_bottom = row;
    while(row_bottom!= 8){
        if(board[row_bottom][col] == 'p'){
            count++;
            break;
        }
         else if(board[row_bottom][col] == 'B'){
            break;
        }
        row_bottom++;
    }
    //left check
    int col_top = col;
    while(col_top!= -1){
        if(board[row][col_top] == 'p'){
            count++;
            break;
        }
         else if(board[row][col_top] == 'B'){
            break;
        }
        col_top--;
    }
    //right check
    int col_bottom = col;
    while(col_bottom!= 8){
        if(board[row][col_bottom] == 'p'){
            count++;
            break;
        }
         else if(board[row][col_bottom] == 'B'){
            break;
        }
        col_bottom++;
    }
    return count;

}

