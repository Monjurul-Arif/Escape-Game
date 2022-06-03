#include <iostream>
#include "windows.h"

using namespace std;

char map[10][20] = {

    "-------------------",
    "|@                |",
    "|                 |",
    "|                 |",
    "|                 |",
    "|                 |",
    "|                 |",
    "|                 |",
    "-------------------"

};
char c='@';

int x=1;
int y=1;


bool game_running = true;

int main()
{
char d='#';



    while(game_running == true){


        system("cls");

        cout<<"\n\n\n\n\n\n"<<endl;
        cout <<"                                  "<<"Play"<<endl;
        for(int display=0; display<10; display++){

            cout <<"                                  "<<map[display] << endl;
        }


       system("pause>null");
       int i,num,num2;

          num=1 + (rand() % 14);

       if(GetAsyncKeyState(VK_DOWN)){
            int y2 = y+1;
            if(map[y2][x] == ' '){
                map[y][x] = ' ';
                y++;
                map[y][x] =c;

               map[5][num]=d;
               map[7][num]=d;

                num2=1 + (rand() % 14);

    map[5][num2]=d;
     map[5][num]='  ';

     num2=1 + (rand() % 14);

		//cout<<num<<endl;
    map[7][num2]=d;
     map[7][num]='  ';




for(int i=0;i<9;i++)
{
    for(int j=0;j<15;j++)
    {

if(  map[7][1]=='@'||map[7][2]=='@'||map[7][3]=='@'||
   map[7][4]=='@'||map[7][5]=='@'||map[7][6]=='@'||
   map[7][7]=='@'||map[7][8]=='@'||map[7][9]=='@'||
   map[7][10]=='@'||map[7][11]=='@'||map[7][12]=='@'||
   map[7][13]=='@'||map[7][14]=='@'||map[7][15]=='@'||
   map[7][16]=='@'||map[7][17]=='@'||map[7][18]=='@'||
   map[7][19]=='@')

{
    system("cls");
     cout<<"\n\n\n\n\n\n\n\n\n\n"<<endl;
    cout<<"                                  "<<"Game Over"<<endl;
    cout<<"                                  "<<"You Won"<<endl;
    cout<<"                                  "<<"Enter any key to exit"<<endl;
     game_running = false;
}

    }
}
}
}
        num=1 + (rand() % 14);

        if(GetAsyncKeyState(VK_UP)){
            int y2 = y-1;
            if(map[y2][x] == ' '){
                map[y][x] = ' ';
                y--;
                map[y][x] = c;
                map[5][num]=d;
               map[7][num]=d;

     num2=1 + (rand() % 14);

    map[7][num2]=d;
     map[7][num]='  ';

            }
        }
        num=1 + (rand() % 14);

        if(GetAsyncKeyState(VK_RIGHT)){
            int x2 = x+1;
            if(map[y][x2] == ' '){
                map[y][x] = ' ';
                x++;
                map[y][x] = c;
                 map[5][num]=d;
                map[7][num]=d;
                 num2=1 + (rand() % 14);

     map[5][num2]='  ';
     map[5][num]=d;
     num2=1 + (rand() % 14);


    map[7][num2]=d;
     map[7][num]='  ';

            }
        }

        num=1 + (rand() % 14);

        if(GetAsyncKeyState(VK_LEFT)){
            int x2 = x-1;
            if(map[y][x2] == ' '){
                map[y][x] = ' ';
                x--;
                map[y][x] = c;
                 map[5][num]=d;
                 map[7][num]=d;
                 num2=1 + (rand() % 14);

     map[5][num2]='  ';
     map[5][num]=d;
     num2=1 + (rand() % 14);

    map[7][num2]=d;
     map[7][num]='  ';

            }
        }

   //system("cls");
   //cout << "GAME OVER";
    }
    return 0;
}

