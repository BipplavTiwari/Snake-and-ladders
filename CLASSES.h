//contains the definitions of the classes used

#ifndef CLASSES_H
using namespace std;
class Player
{
private:
    string name;
    int x=0,y=-1;
public:
    int hasWon();
    void makeMove();
    void showit();
    void getname();
    string showname();
};
class board
{
private:
    int arr[10][10];
public:
    board()
    {
        for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=1;i<10;i++)
    {
        if(((i%2)==1)||((i%3)==1))
        {
            arr[i][(7*i+3)%10]=((rand())+7)%(10-i);
        }
        arr[i][(4*i+5)%i]=-1*i;
    }
    }
    void printBoard();
};
class Game: private board, private Player
{
public:
    Game()
    {
    Player A,B;
    cout<<"Enter the name of first player: ";
    A.getname();
    cout<<endl;
    cout<<"Enter the name of second player: ";
    B.getname();
    board b;
    printBoard();
    cout<<endl;
    while(!(A.hasWon()||B.hasWon()))
    {
        A.makeMove();
        A.showit();
        if(A.hasWon())
            break;
        B.makeMove();
        B.showit();
    }
    if(A.hasWon())
    {
        cout<<A.showname()<<" won!";
    }
    else
    {
        cout<<B.showname()<<" won!";
    }
    }
};
#endif
