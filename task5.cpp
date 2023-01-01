#include <iostream>
#include <windows.h>
using namespace std;

void name();

void gotoxy(int x , int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

main()
{ 
 system("cls");
 name();
}

void name()
{
 gotoxy(45,4);
 cout << "         **           **               ** ** **                          " ;gotoxy(45,5);            
 cout << "       **  **         **                  **                             " ;gotoxy(45,6);
 cout << "      **    **        **                  **                             " ;gotoxy(45,7);
 cout << "     **      **       **                  **                             " ;gotoxy(45,8);
 cout << "    **        **      **                  **                             " ;gotoxy(45,9);
 cout << "    ** ** **  **      **                  **                             " ;gotoxy(45,10);
 cout << "    **        **      **                  **                             " ;gotoxy(45,11);
 cout << "    **        **      **                  **                             " ; gotoxy(45,12);
 cout << "    **        **      ** ** ** **         **                             " ;gotoxy(45,13);
 cout << "    **        **      ** ** ** **      ** ** **                          " ;gotoxy(45,14);
} 