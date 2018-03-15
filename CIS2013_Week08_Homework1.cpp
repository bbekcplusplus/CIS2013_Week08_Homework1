#include <iostream>

#include <stdlib.h>

#include <time.h>

using namespace std;
// line 13-15 source: http://www.chegg.com/homework-help/questions-and-answers/need-create-basic-battleship-game-c-10x10-grid-using-arrays-program-needs-generate-game-bo-q6227607
int main()

{

     char grid[10][10], ship;

     int count = 0, randi, randj, ch=0, loop=0;

     srand(time(0));

     for(int i=0; i<10; i++)

          for(int j=0; j<10; j++)

              grid[i][j]='-';

     //display empty board

     cout<<"The board before placing the ships (empty board)..."

<<endl<<endl;

     for(int i=0; i<10; i++)

     {

          for(int j=0; j<10; j++)

              cout<<grid[i][j]<<" ";

          cout<<endl;

     }

     cout<<endl<<endl;

     //prompt and read the choice of ship to be placed on the board

     cout<<"1.Carrier\n2.Battleship\n3.Submarine"

          <<"\n4.Destroyer\n5.Cruiser"<<endl;

     //read the choice of ship

     do

     {

          cout<<"What kind of SHIP do you want to place? :";

          cin>>ch;

     }while(ch<0 || ch>5);

     switch(ch)

     {

     case 1:

          count = 5;

          ship = 'C';

          break;

     case 2:

          ship = 'X';

          count = 4;

          break;

     case 3:     

          ship = 'S';

          count = 3;

          break;

     case 4:

          count = 3;

          ship = 'D';

          break;

     case 5:

          count = 2;

          ship = 'U';

          break;  

     }

     //loop to place carrier ships on the

     while(loop<count)

     {

          //selecting random locations to place ships

          randi=rand()%10;

          randj=rand()%10;

          //check the location is enpty or not

          if(grid[randi][randj]=='-')

          {

              grid[randi][randj] = ship;

              loop++;

          }

     }

     cout<<endl<<endl;

     //display the board after placing the ship

     cout<<"The board after placing the selected ship..."

<<endl<<endl;

     for(int i=0; i<10; i++)

     {

          for(int j=0; j<10; j++)

              cout<<grid[i][j]<<" ";

          cout<<endl;

     }

     system("PAUSE");

     return 0;

}