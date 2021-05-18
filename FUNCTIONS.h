//contains definitions of member functions of various classes defined in CLASSES.h

void Player::showit()      //to show position of a player
{
    cout<<showname()<<" you are at: ("<<x<<","<<y<<") "<<endl;
}
int Player::hasWon()       //to check if a player has won or not
{
    if((x==9)&&(y==9))
        return 1;
    return 0;
}
void Player::makeMove()    //to roll a die pseudo-randomly
{
    cout<<"Now its turn of "<<showname()<<"!. Please press 1 to make your move: ";
    int a;
    cin>>a;
    int myMove=(rand())%6+1;
    cout<<"You got "<<myMove<<" on dice!"<<endl;
    if((y+myMove)<10)
        y+=myMove;
    else
    {
        if(x<9)
        {
            x++;
            y=myMove+y-10;
        }
    }
}
void Player::getname()      //to input name of player
{
    cin>>name;
}
string Player::showname()   //to show name of a player
{
    return name;
}
void board::printBoard()    //to print the board generated pseudo-randomly
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
