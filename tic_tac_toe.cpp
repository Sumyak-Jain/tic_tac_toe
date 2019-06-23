#include<iostream>
using namespace std;
char square[10]={'o','1','2','3','4','5','6','7','8','9'};
int win();
void board();
int main()
{
	int player=1,i,choice;
	char mark;
	do{
		board();
		//this if else is for making player 1 and 2 alternate
		if(player%2)
			player=1;//odd
		else
			player=2;//even
		cout<<"    LETS PLAY"<<endl;
		cout<<" PLAYER "<< player <<" enter a number: ";
		cin>>choice;
		//this if else is for making player 1:'X' and player 2:'O'
		if(player==1)
        {mark='X';
		}
		else
		{
			mark='O';
		}
		
	if (choice==1 && square[1]=='1')
		square[1] = mark;
	else if (choice==2 && square[2]=='2')
		square[2] = mark;
	else if (choice==3 && square[3]=='3')
		square[3] = mark;
	else if (choice==4 && square[4]=='4')
		square[4] = mark;
	else if (choice==5 && square[5]=='5')
		square[5] = mark;
	else if (choice==6 && square[6]=='6')
		square[6] = mark;
	else if (choice==7 && square[7]=='7')
		square[7] = mark;
	else if (choice==8 && square[8]=='8')
		square[8] = mark;
	else if (choice==9 && square[9]=='9')
		square[9] = mark;
	else
	{
		cout<<"invalid move"<<endl;
		cin.ignore();
		cin.get();	
	}
	i=win();
	player++;
	}while(i==-1);
    board();
    if(i==1)

        cout<<">>\aPlayer"<<--player<<" win >> ";
    else
        cout<<">>\aGame draw better luck next time";

    cin.ignore();
    cin.get();
    return 0;

}
// 1 FOR GAME IS OVER WITH RESUlT
//  -1 FOR GAME IS IN PROGRESS
//O GAME IS OVER AND NO RESULT //
int win()
{
if(square[1] == square[2] && square[2] == square[3])
	return 1;
else if(square[4] == square[5] && square[5] == square[6])
	return 1;
else if(square[7] == square[8] && square[8] == square[9])
	return 1;
else if(square[1] == square[4] && square[4] == square[7])
	return 1;
else if(square[2] == square[5] && square[5] == square[8])
	return 1;
else if(square[3] == square[6] && square[6] == square[9])
	return 1;
else if(square[1] == square[5] && square[5] == square[9])
	return 1;
else if(square[3] == square[5] && square[5] == square[7])
	return 1;
else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9' )
 return 0;
else 
return -1;


}
void board()
{
    system("cls");
    cout << "\n\n\t..Tic Tac Toe..\n\n";

    cout << "PLAYER 1  (X)  -  PLAYER 2  (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}
