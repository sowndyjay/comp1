#include <stdio.h>

void clear_keyboard_buffer(void)
{
    char c;
    scanf("%c", &c);
    while (c != '\n')
    {
        scanf("%c", &c);
    }
}
void Game();

int main(int argc, char * argv[]){

    Game();


}


void Game(){


    char game;
    char playerone;
    char playertwo;
    printf("Player 1 it is your turn!\n");
    printf("Please choose (r)ock, (p)aper, or (s)cissors: ");
    scanf(" %c", &playerone);
    clear_keyboard_buffer();
    while(playerone != 'r' && playerone != 'R' && playerone != 'S' && playerone != 's' && playerone != 'P' && playerone != 'p')
  {
        printf("I'm sorry but you must enter 'r', 'p', 's'\n");
        printf("Please choose (r)ock, (p)aper, or (s)cissors: ");
        scanf("%c", &playerone);
        clear_keyboard_buffer();
  }
    printf("Player 2 it is your turn!\n");
    printf("Please choose (r)ock, (p)aper, or (s)cissors: ");
    scanf("%c", &playertwo);
    clear_keyboard_buffer();
    while(playertwo != 'r' && playertwo != 'R' && playertwo != 'S' && playertwo != 's' && playertwo != 'P' && playertwo != 'p')
  {
        printf("I'm sorry but you must enter 'r', 'p', 's' \n");
        printf("Please choose (r)ock, (p)aper, or (s)cissors: ");
        scanf("%c", &playertwo);
        clear_keyboard_buffer();
  }

  switch (playerone)
{
  case 'R':
  case 'r':
    playerone = 'R';
  break;
  case 'P':
  case 'p':
    playerone = 'P';
  break;
  case 'S':
  case 's':
    playerone = 'S';
  break;
}
switch (playertwo)
{
  case 'R':
  case 'r':
    playertwo = 'R';
  break;
  case 'P':
  case 'p':
    playertwo = 'P';
  break;
  case 'S':
  case 's':
    playertwo = 'S';
  break;
}
  if(playerone == playertwo)
  {
    printf("draw, nobody wins");
  } else if(playerone == 'P' && playertwo == 'R')
  {
    printf("paper covers rock, player one wins!");
  } else if(playertwo == 'P' && playerone == 'R')
  {
    printf("paper covers rock, player two wins!");
  } else if(playerone == 'S' && playertwo == 'P')
  {
    printf("Scissors cut paper, player one wins!");
  } else if(playertwo == 'S' && playerone == 'P')
  {
    printf("Scissors cut paper, player two wins!");
  } else if(playerone == 'R' && playertwo == 'S')
  {
    printf("Rock breaks Scissors, player one wins!");
  } else if(playertwo == 'R' && playerone == 'S')
  {
    printf("Rock breaks Scissors, player twp wins!");
  }
  do
  {
  printf("\ndo you wish to play again? (y/n): ");
  scanf("%c", &game);
  clear_keyboard_buffer();
  if(game == 'y' || game == 'Y')
  {
    Game();
  }else if (game == 'N' || game == 'n')
  {
    printf("goodbye!");
  }
  else
  {
    printf("I'm sorry, but you must enter either 'y' or 'n': ");
  } 
  } while (game != 'y' && game && 'Y' && game != 'N' && game != 'n');
}






