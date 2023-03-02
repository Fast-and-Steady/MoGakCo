#include <stdio.h>

int main()
{
    char chess_board[8][8];
    int count = 0;

    for (int i = 0; i < 8; i++){
        scanf("%s", chess_board[i]);
        getchar();
    }
    
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            if ((i + j) % 2 == 0 && chess_board[i][j] == 'F'){
                count++;
            }
        }
    }
    printf ("%d", count);
}
