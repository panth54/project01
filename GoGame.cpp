#include <iostream>
#include <cmath>
using namespace std;

int board[] = {
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7
};

int board_size = 9;
int margin = 2;
int board_range = board_size + margin;

int square, stone;
char pieces[] = {'.','#','o',' ',' ','b','w',' ','+'};

void print_board(){
    // loop rows
    for (int row=0; row<board_range; row++){
        //loop columns
        for (int col=0; col<board_range; col++){
            square = row * board_range + col;
            stone = board[square];

            //print rank
            if (col == 0 && row > 0 && row < board_range - 1){
                cout <<" " <<10-row <<" ";
            }
            //print board
            cout << pieces[stone] <<" ";
        }
        //print new line
        cout <<"\n";
    }
    //print notation
    cout <<"     a b c d e f g h i";
}

int main(){
    print_board();

    return 0;
}
