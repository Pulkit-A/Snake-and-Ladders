#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void comment(int a)
{
	int var=0;
	randomize();
	var=random(3)+1;
	if(a>=10)
	{
		switch(var)
		{
			case 1:cout<<"\nYou are having a strong luck.";     //quotes for player in lead
			break;
			case 2:cout<<"\nNow keep your lead permanent.";
			break;
			case 3:cout<<"\nIts your day.";
			break;
		}
	}
	else if(a<=-10)
	{
		switch(var)
		{
			case 1:cout<<"\nYou need a lucky locket.";         //quotes for player lying behind
			break;
			case 2:cout<<"\nWake up! You are losing.";
			break;
			case 3:cout<<"\nIs you planning to sprint if not, then plan it.";
			break;
		}
	}
}
void snake()
{
	randomize();                                        //for snake
	int r=random(3)+1;
	switch(r)
	{
		case 1:cout<<"\nI think you need antivenom.";
		break;
		case 2:cout<<"\nOh! A snake bites you.";
		break;
		case 3:cout<<"\nOh!!! A snake attack";
		break;
	}
}
void ladder()
{
	randomize();                                        //for ladder
	int r=random(3)+1;
	switch(r)
	{
		case 1:cout<<"\nHey! you got a ladder";
		break;
		case 2:cout<<"\nNow! its shortcut";
		break;
		case 3:cout<<"\nPlease don't smile, you just got a ladder";
		break;
	}
}
void main()
{
	int i,c,j,stopper,co,pla=0,comp=0,k=1,bite=0,a[10][10],count=0;
	clrscr();                             //for table of snakes and ladders
	{
		for(j=9;j>=0;j--) {a[0][j]=k;k++;}
		for(j=0;j<10;j++) {a[1][j]=k;k++;}
		for(j=9;j>=0;j--) {a[2][j]=k;k++;}
		for(j=0;j<10;j++) {a[3][j]=k;k++;}
		for(j=9;j>=0;j--) {a[4][j]=k;k++;}
		for(j=0;j<10;j++) {a[5][j]=k;k++;}
		for(j=9;j>=0;j--) {a[6][j]=k;k++;}
		for(j=0;j<10;j++) {a[7][j]=k;k++;}
		for(j=9;j>=0;j--) {a[8][j]=k;k++;}
		for(j=0;j<10;j++) {a[9][j]=k;k++;}
	}
	for(i=0;i<10;i++)
	{
		textcolor(2);                       //for printing snakes and ladders
		clrscr();
		textcolor(4);
		for(j=0;j<=i;j++)
		cout<<"\n                                   ";
		for(j=0;j<9000;j++);                     //delay
		for(j=0;j<2000;j++)
			cout<<"SNAKE"<<"\b\b\b\b\b";
	}
	cout<<"\n";
	for(i=0;i<37;i++)
	{
		for(j=0;j<4000;j++);
		cout<<" ";
		for(j=0;j<900;j++)
			cout<<"&"<<"\b";
	}
	cout<<"\n                                                                       ";
	for(i=0;i<38;i++)
	{
		for(j=0;j<30000;j++)
		for(k=0;k<10;k++);
		cout<<"LADDERS "<<"\b\b\b\b\b\b\b\b\b";
	}
	cout<<"\n\n\n\n\n";
	cprintf("                           PRESS ANY KEY TO CONTINUE");
	getch();
	textcolor(5);
	clrscr();
	cout<<"\n\n\n\n\n\n\n\n\n\n\n                                 LOADING...";
	for(i=0;i<15000;i++)
	for(j=0;j<10000;j++);
	rules:
	textcolor(GREEN);
	{
		clrscr();                               //for rules in game
		textcolor(RED);
		cout<<"\n";
		for(i=0;i<38;i++)
		{
			for(j=0;j<4000;j++);
				cout<<" ";
			for(j=0;j<900;j++)
				cprintf("RULES\b\b\b\b\b");
		}
		cout<<"RULES\n\nThis game consists of numbers 1-100 that indicates the Position in Path, Snakes";
		cout<<"\nand the Ladders are at some Positions if you moved on lower ends of Ladders you\n";
		cout<<"will be be able to jump to the other end. If you move to the mouth of Snake,\n";
		cout<<"You will be demoted to tale of Snake. Computer will play as your opponent, who";
		cout<<" \nfirst crosses the 100th position will win the game.";
		cout<<"\n\nThe Positions of Snakes and Ladders are as follows\n\n";
		textcolor(YELLOW);
		cprintf("Snakes 99-10 91-52 73-3 55-11 48-7 32-5 \nLadders 6-36 21-97 41-80 61-95 76-87");
		cout<<"\n\n\n\n\n\t\t\t  PRESS ANY KEY TO CONTINUE";
		getch();
	}
	while(i>0)
	{
		textcolor(GREEN);
		clrscr();
		textcolor(RED+BLINK);
		for(i=9;i>=0;i--)
		{
			for(j=9;j>=0;j--)
			{
				if(pla==a[i][j])
				{
					cprintf("P");
					cout<<"\t";
				}
				else if(comp==a[i][j])
				{
					cprintf("C");
					cout<<"\t";
				}
				else
					cout<<a[i][j]<<"\t";
			}
			cout<<"\n";
		}
		textcolor(12);
		count++;
		cprintf("Press any key to revolve dice");
		getch();
		cout<<"\n";
		textcolor(YELLOW);
		cprintf("You Rolled ");
		for(i=0;i<9000;i++)
		{
			for(j=0;j<7;j++)                   //for dice of player
			cout<<j<<"\b";
		}
		randomize();
		c=random(6)+1;
		pla+=c;
		cout<<c<<"\t";
		cprintf("Computer Rolled ");
		for(i=0;i<9000;i++)
		{
			for(j=0;j<7;j++)                    //for dice of computer
				cout<<j<<"\b";
		}
		c=random(6)+1;
		comp+=c;
		cout<<c;
		for(int l=0;l<20000;l++)
			for(int v=0;v<850;v++);
		if(pla==99)	{pla=10;snake();}		 //cases for ladder and ladders in game
		if(comp==99)	comp=10;
		if(pla==91)	{pla=52;snake();}
		if(comp==91)	comp=52;
		if(pla==73)	{pla=3;snake();}
		if(comp==73)	comp=3;
		if(pla==55)	{pla=11;snake();}
		if(comp==55)	comp=11;
		if(pla==48)	{pla=7;snake();}
		if(comp==48)	comp=7;
		if(pla==32)	{pla=5;snake();}
		if(comp==32)	comp=5;
		if(pla==6)	{pla=36;ladder();}
		if(comp==6)	comp=36;
		if(pla==21)	{pla=97;ladder();}
		if(comp==21)	comp=97;
		if(pla==41)	{pla=80;ladder();}
		if(comp==41)	comp=80;
		if(pla==61)	{pla=95;ladder();}
		if(comp==61)	comp=95;
		if(pla==76)	{pla=87;ladder();}
		if(comp==76)	comp=87;
		if(pla>100)	goto result;
		if(comp>100)	goto result;
		textcolor(CYAN);
		cout<<"\n";
		cprintf("YOUR NEW POSITION = ");         //for positions of player and computer
		cout<<pla<<"\t";
		cprintf("COMPUTER NEW POSITION = ");
		cout<<comp;
		co=(pla-comp);
		comment(co);
		cout<<"\n";
		textcolor(6);
		cprintf("Press '0' to exit and '1' for rules else enter any number ");
		cin>>stopper;
		if(stopper==0)
			exit(0);
		else if(stopper==1)
			goto rules;
	}
	result:
	{
		if(pla>comp)
		{
			pla=101;                       //when player wins
			clrscr();
			cout<<"\n                                   ";
			for(i=0;i<200;i++)
				for(j=0;j<100;j++)
					cout<<"Y"<<"\b";
			cout<<"Y";
			for(i=0;i<200;i++)
				for(j=0;j<100;j++)
					cout<<"O"<<"\b";
			cout<<"O";
			for(i=0;i<200;i++)
				for(j=0;j<100;j++)
					cout<<"U "<<"\b\b";
			cout<<"U ";
			for(i=0;i<200;i++)
				for(j=0;j<100;j++)
					cout<<"WIN!"<<"\b\b\b\b";
			cout<<"WIN!";
			cout<<"\n\n\t\t\t\t    STATS\n\n\n";
			cout<<"\nYou did it in "<<count<<" turns";
			cout<<"\n\nThe difference between your Position and computer position is "<<co;
			if(co>50)
				cout<<"\n\nWOW! You are champion";
			else if(co>30)
				cout<<"\n\nYou played really well!";
			else if(co>10)
				cout<<"\n\nI like your game.";
			else
				cout<<"\n\nWon by chance.";
			getch();
			cout<<"\nNo. of times snake tastes you"<<bite;
			getch();
		}
		else
		{
			cout<<"\n                               ";
			for(i=0;i<200;i++)                    //when player loses
				for(j=0;j<100;j++)
					cout<<"Y"<<"\b";
			cout<<"Y";
			for(i=0;i<200;i++)
				for(j=0;j<100;j++)
					cout<<"O"<<"\b";
			cout<<"O";
			for(i=0;i<200;i++)
				for(j=0;j<100;j++)
					cout<<"U "<<"\b\b";
			cout<<"U ";
			for(i=0;i<200;i++)
				for(j=0;j<100;j++)
					cout<<"LOSE!"<<"\b\b\b\b\b";
			cout<<"LOSE!";
			getch();
		}
	}                             //end of the program
	getch();
}