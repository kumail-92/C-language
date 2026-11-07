 #include <stdio.h>

// global variables
char board[3][3] =
    {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};

char player_1_name[10];
char player_2_name[10];

char player_1_symbol;
char player_2_symbol;

int choice, i, j;

// Function to Print Board
void print_board()
{
    printf("\n %c | %c | %c", board[0][0], board[0][1], board[0][2]);
    printf("\n-----------");
    printf("\n %c | %c | %c", board[1][0], board[1][1], board[1][2]);
    printf("\n-----------");
    printf("\n %c | %c | %c", board[2][0], board[2][1], board[2][2]);
}

// Function to convert User's Choice into i and j
void choice_to_i_j(int choice)
{
    if (choice == 1)
    {
        i = 0, j = 0;
    }
    else if (choice == 2)
    {
        i = 0, j = 1;
    }
    else if (choice == 3)
    {
        i = 0, j = 2;
    }
    else if (choice == 4)
    {
        i = 1, j = 0;
    }
    else if (choice == 5)
    {
        i = 1, j = 1;
    }
    else if (choice == 6)
    {
        i = 1, j = 2;
    }
    else if (choice == 7)
    {
        i = 2, j = 0;
    }
    else if (choice == 8)
    {
        i = 2, j = 1;
    }
    else if (choice == 9)
    {
        i = 2, j = 2;
    }
}

// Function to check if position is empty or not
int check_is_empty()
{
    if (board[i][j] == ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// This Function Checks that Any position is empty or not
int check_board_is_full()
{
    if (board[0][0] == ' ' || board[0][1] == ' ' || board[0][2] == ' ' ||
        board[1][0] == ' ' || board[1][1] == ' ' || board[1][2] == ' ' ||
        board[2][0] == ' ' || board[2][1] == ' ' || board[2][2] == ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Check For Winning Condition
int has_won(char symbol)
{
    // for row
    if (board[0][0] == symbol && board[0][1] == symbol && board[0][2] == symbol)
        return 1;
    if (board[1][0] == symbol && board[1][1] == symbol && board[1][2] == symbol)
        return 1;
    if (board[2][0] == symbol && board[2][1] == symbol && board[2][2] == symbol)
        return 1;

    // for column
    if (board[0][0] == symbol && board[1][0] == symbol && board[2][0] == symbol)
        return 1;
    if (board[0][1] == symbol && board[1][1] == symbol && board[2][1] == symbol)
        return 1;
    if (board[0][2] == symbol && board[1][2] == symbol && board[2][2] == symbol)
        return 1;

    // for diagonal
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol)
        return 1;
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol)
        return 1;
    return 0;
}

// Main Function
void main()
{
    int is_empty;
    int turn = 1;

    printf("Enter Player1 Name: ");
    scanf("%s", player_1_name);
    printf("Enter Player1 Symbol(O or X): ");
    scanf(" %c", &player_1_symbol);

    while(player_1_symbol != 'X' && player_1_symbol != 'O')
    {
        printf("You Entered Wrong symbol please Enter O or X only!");
        printf("\nEnter Player1 Symbol(O or X): ");
        scanf(" %c", &player_1_symbol);
    }
    printf("Enter Player2 Name: ");
    scanf(" %s", player_2_name);
    printf("Enter Player2 Symbol(O or X): ");
    scanf(" %c", &player_2_symbol);

    while(player_2_symbol != 'X' && player_2_symbol != 'O')
    {
        printf("You Entered Wrong symbol please Enter O or X only!");
        printf("\nEnter Player2 Symbol(O or X): ");
        scanf(" %c", &player_2_symbol);
    }

    while (player_2_symbol == player_1_symbol)
    {
        printf("You Entered Same symbol as Player_1 so try different one!");
        printf("\nEnter Player2 Symbol(O or X): ");
        scanf(" %c", &player_2_symbol);
    }

    while (check_board_is_full() == 1)
    {
        print_board();

        if (turn == 1)
        {
            printf("\n%s - Enter Choice(From 1 to 9): ", player_1_name); // 4
            scanf("%d", &choice);
        }
        else
        {
            printf("\n%s - Enter Choice(From 1 to 9): ", player_2_name);
            scanf("%d", &choice);
        }

        if (choice >= 1 && choice <= 9)
        {
            choice_to_i_j(choice); // i=1, j=0

            is_empty = check_is_empty(); // 1

            if (is_empty == 1)
            {
                if (turn == 1)
                {
                    board[i][j] = player_1_symbol;
                    if (has_won(player_1_symbol) == 1)
                    {
                        printf("Congratulations %s! You Won the Match!", player_1_name);
                        break;
                    }
                    turn = 2;
                }
                else
                {
                    board[i][j] = player_2_symbol;
                    if (has_won(player_2_symbol) == 1)
                    {
                        printf("Congratulations %s! You Won the Match!", player_2_name);
                        break;
                    }
                    turn = 1;
                }
            }
            else
            {
                printf("This Position is Already Filled!");
            }
        }
        else
        {
            printf("Enter Choice between 1 to 9 only!");
        }
        if (check_board_is_full == 0)
        {
            printf("\nOhh Match Draw!");
        }
    }

    if (has_won(player_1_symbol) == 0 && has_won(player_2_symbol) == 0)
    {
        printf("\nGame is Draw!!! Try Again!");
    }

    if (has_won(player_1_symbol || player_2_symbol) == 1 || check_board_is_full == 0)
    {
    }
    else
    {
        printf("\n");
        print_board();
    }
}