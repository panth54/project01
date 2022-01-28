#include <iostream>
#include "board.cpp"
using namespace std;

void print_board(int board[], int board_size, char pieces[], char files[]){

    int board_range = board_size + 2;
    int square, stone, rank;

    // loop rows
    for (int row=0; row<board_range; row++){
        //loop columns
        for (int col=0; col<board_range; col++){
            square = row * board_range + col;
            stone = board[square];

            //print rank
            if (col == 0 && row > 0 && row < board_range - 1){
                rank = board_range - 1 - row;
                if (rank < 10) cout <<" " <<rank <<" ";
                else cout <<rank <<" ";
            }
            //print board
            cout << pieces[stone] <<" ";
        }
        //print new line
        cout <<endl;
    }
    //print files
    for (int i=0; i<board_range*2; i++) cout <<files[i];
}

int main(){
    int board_size;
    char pieces[] = {'.','#','o',' '};
    char files[] = "     a b c d e f g h i j k l m n o p q r s t";

    //loop ask board size
    do {
    cout << "Select board size (9, 13, 19) : ";
    cin >> board_size;
    }while (board_size != 9 && board_size != 13 && board_size != 19);

    //print board
    if (board_size == 9) print_board(board_9x9, board_size, pieces, files);
    else if (board_size == 13) print_board(board_13x13, board_size, pieces, files);
    else if (board_size == 19) print_board(board_19x19, board_size, pieces, files);

    return 0;
}
