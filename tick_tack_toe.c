#include <stdio.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

void displayBoard()
{
    int i, j;

    printf("\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf(" %c ", board[i][j]);

            if(j < 2)
                printf("|");
        }

        printf("\n");

        if(i < 2)
            printf("---|---|---\n");
    }
}

int checkWinner()
{
    int i;

    for(i = 0; i < 3; i++)
    {
        if(board[i][0] == board[i][1] &&
           board[i][1] == board[i][2])
            return 1;

        if(board[0][i] == board[1][i] &&
           board[1][i] == board[2][i])
            return 1;
    }

    if(board[0][0] == board[1][1] &&
       board[1][1] == board[2][2])
        return 1;

    if(board[0][2] == board[1][1] &&
       board[1][1] == board[2][0])
        return 1;

    return 0;
}

int main()
{
    int choice, player = 1, moves = 0;
    char mark;

    while(moves < 9)
    {
        displayBoard();

        mark = (player == 1) ? 'X' : 'O';

        printf("\nPlayer %d (%c), enter position: ", player, mark);
        scanf("%d", &choice);

        if(choice < 1 || choice > 9)
        {
            printf("Invalid position! Try again.\n");
            continue;
        }

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if(board[row][col] == 'X' || board[row][col] == 'O')
        {
            printf("Position already occupied! Try again.\n");
            continue;
        }

        board[row][col] = mark;
        moves++;

        if(checkWinner())
        {
            displayBoard();
            printf("\nCongratulations! Player %d wins!\n", player);
            return 0;
        }

        player = (player == 1) ? 2 : 1;
    }

    displayBoard();
    printf("\nGame Draw!\n");

    return 0;
}
