#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int , int );
void printMaze();
void playerMove(int x, int y);

main()
{ 
   system("cls");
   printMaze();
   int x = 3;
   int y = 1;
   while(true)
  {
   playerMove(x,y);
   
   if(x < 77)
  {
     x = x + 1;
  }
   
   
   if(x == 77)
  {
      gotoxy(x-1, y);
      cout << " ";
       x = 1;
  }
  }
  
}
 
void printMaze()
{cout << " ############################################################################### " <<endl;
 cout << " ||.. ............................................................  ........  || " <<endl;
 cout << " ||.. %%%%%%%%%%%%%%%%        ...      %%%%%%%%%%%%%%        |%|..   %%%%%%   || " <<endl;
 cout << " ||..        |%|   |%|     |%|...      |%|        |%|        |%|..     |%|    || " <<endl;
 cout << " ||..        |%|   |%|     |%|...      |%|        |%|        |%|..     |%|    || " <<endl;
 cout << " ||..       %%%%%%%%%  . . |%|...      %%%%%%%%%%%%%%           ..   %%%%%%.  || " <<endl;
 cout << " ||..       |%|        . . |%|...     ...............       |%| ..         .  || " <<endl;
 cout << " ||..       %%%%%%%%%%%. . |%|...     %%%%%%%%%%%%          |%| ..   %%%%%%.  || " <<endl;
 cout << " ||..               |%|.              |%|......             |%| ..      |%|.  || " <<endl;
 cout << " ||..     ........  |%|.        P     |%|......|%|              ..      |%|.  || " <<endl;
 cout << " ||..|%|  |%|%%|%|. |%|. |%|             ......|%|              ..|%|   |%|.  || " <<endl;
 cout << " ||..|%|  |%|  |%|. .    %%%%%%%%%%%%%   ......|%|               .|%|.        || " <<endl;
 cout << " ||..|%|  |%|  |&|. .           ...|%|      %%%%%%              . |%|.        || " <<endl;
 cout << " ||..|%|            .           ...|%|                      |%| ..|%|.        || " <<endl;
 cout << " ||..|%|  %%%%%%%%%%%%%         ...|%|%%%%%%%%%%            |%| ..|%|%%%%%%%  || " <<endl;
 cout << " ||.................................................        |%| ............  || " <<endl;
 cout << " ||  ...............................................               .........  || " <<endl;
 cout << " ||..|%|  |%|  |%|. .    %%%%%%%%%%%%%  .......|%|        |%|   ..|%|.        || " <<endl;
 cout << " ||..|%|  |%|  |%|. .           ...|%|      %%%%%%        |%|   ..|%|.        || " <<endl;
 cout << " ||..|%|            .     G     ...|%|                    |%|   ..|%|.        || " <<endl;
 cout << " ||..|%|  %%%%%%%%%%%%%%        ...|%|%%%%%%%%%%%         |%|   ..|%|%%%%%%%  || " <<endl;
 cout << " ||................................................       |%|   ............  || " <<endl;
 cout << " ||  ..............................................                .........  || " <<endl;
 cout << " ############################################################################### ";
}


void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void playerMove(int x, int y)
{
    gotoxy(x-1, y);
    cout << " ";
    gotoxy(x,y);
    cout << "P";
    Sleep(200);
}