#define MAXROW 20
#define MAXCOL 60
#include "common.h"

typedef enum state
{
  DEAD,
  ALIVE
} State;

typedef State Grid[MAXROW + 2][MAXCOL + 2];

void CopyMap(Grid map, Grid newMap);
Boolean userSaysYes(void);
void initialize(Grid map);
int neighCount(Grid map, int row, int col);
void writeMap(Grid map);

//dfinitions

void CopyMap(Grid map, Grid newMap)
{
  for (int i = 0; i <= MAXROW + 1; i++)
  {
    for (int j = 0; j <= MAXCOL + 1; j++)
    {
      map[i][j] = newMap[i][j];
    }
  }
}

Boolean userSaysYes()
{
  int c;
  printf("(y,n)?\n");
  do
  {
    while ((c = getchar()) == '\n');
    if (c == 'y' || c == 'Y' || c == 'n' || c == 'N')
      return (c == 'y' || c == 'Y');
    printf("Please respond by typing one of the letters y or n!\n");
  } while (1);
}

// the initialization function, will ask the user which cells are alive initially

void initialize(Grid map)
{
  int row, col; //coordinates of the cell

  // priting shit----------------
  printf("This program is a simulation of the game of Life.\n"
         "The grid has a size of %d rows and"
         " %d columns.\n",
         MAXROW, MAXCOL);
  //-----------------------------

  //two loops for assigning all the cells DEAD first--------------------
  for (row = 0; row <= MAXROW + 1; row++)
  {
    for (col = 0; col <= MAXCOL + 1; col++)
    {
      map[row][col] = DEAD; //setting every cell to dead
    }
  }

  printf("Give the pair of coordinates of the alive cells.\n"
         "Give speach '0 0' pair to end!\n");

  scanf("%d %d", &row, &col);
  while (row != 0 || col != 0) // while the 0 0 is not entered by the user do the following
  {
    if (row >= 1 && row <= MAXROW && col >= 1 && col <= MAXCOL)
    {
      map[row][col] = ALIVE;
    }
    else
    {
      printf("Values are not within range!\n");
    }
    scanf("%d %d", &row, &col);
  }
  while (getchar() != '\n');
}

// This function will count the number of alive neighbours for each cell

int neighCount(Grid map, int row, int col)
{
  int count = 0;
  for (int i = row - 1; i <= row + 1; i++)
  {
    for (int j = col - 1; i <= col + 1; j++)
    {
      if (map[i][j] == ALIVE)
        count++;
    }
  }
  if (map[row][col] == ALIVE)
    count--;

  return count;
}


void writeMap(Grid map)
{
  printf("\n\n");
  for (int i = 1; i <= MAXROW; i++)
  {
    for (int j = 0; j <= MAXCOL; j++)
    {
      if (map[i][j] == ALIVE)
        putchar('*');
      else
        putchar('-');
    }
    printf("\n");
  }
}
