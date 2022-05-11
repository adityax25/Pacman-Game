#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

// int c1=14;// color of pacman
// int c2=1;//color of obstacles
// int c3=4;//color of dots
// int c4=0;// color of playfield
// int r1=7;//radius of pacman
// int r2=2;//radius of dots
// int plscore=0;

class game
{
private:
		int c1,c2,c3,c4,r1,r2,plscore;
public:
	game()
	{
		c1=14;// color of pacman
		c2=1;//color of obstacles
		c3=4;//color of dots
		c4=0;// color of playfield
		r1=7;//radius of pacman
		r2=2;//radius of dots
		plscore=0;
	}
	void intro();
	void details();
	void creategrid();
	void createdots();
	void clearblock(int l,int t,int r,int b);
	void gameplay();
	void finalsc();
};

void game :: intro()
{
	 int a[]={4,1,2},i;
	 cleardevice();
	 setcolor(14);
	 setfillstyle(SOLID_FILL,14);
	 circle(320,370,70);
	 floodfill(320,370,14);
	 setcolor(0);
	 circle(335,330,10);
	 for (i = 0; i <=15; i++)
	 {
		 //cleardevice();
	 	setfillstyle(SOLID_FILL,a[i%3]);
		bar(0,0,639,10);
		bar(0,0,10,479);
		bar(0,470,639,479);
		bar(630,0,639,479);
		//
		 setcolor(a[i%3]);
		 settextstyle(7,HORIZ_DIR,6);
		 outtextxy(160,5,"WELCOME TO");
		 outtextxy(161,5,"WELCOME TO");
		 outtextxy(270,75,"THE");
		 outtextxy(271,75,"THE");
		 outtextxy(200,145,"PAC-MAN");
		 outtextxy(201,145,"PAC-MAN");
		 outtextxy(250,215,"GAME");
		 outtextxy(251,215,"GAME");
		 if(i%2==1)
		 {
		  setcolor(14);
		   setfillstyle(SOLID_FILL,14);
		   sector(320,370,5,46,70,70);
		   sector(320,370,314,355,70,70);

		 }
		 else
		 {
		   setcolor(0);
		   setfillstyle(SOLID_FILL,0);
		   sector(320,370,0,45,70,70);
		   sector(320,370,315,360,70,70);
		 }
		 delay(500);
	 }
	 //line(320,0,320,479);
}
void game :: details()
{
	int x=550,y1=90,y2=160,y3=230,y4=300;
	cleardevice();
	setcolor(1);
	setfillstyle(SOLID_FILL,1);
	bar(0,0,639,10);
	bar(0,0,10,479);
	bar(0,470,639,479);
	bar(630,0,639,479);
	setcolor(4);
	settextstyle(8,HORIZ_DIR,4);
	outtextxy(150,5,"Rules for PAC-MAN");
	setcolor(2);
	settextstyle(3,HORIZ_DIR,3);
	outtextxy(30,70,"PRESS 'W' FOR UPWARD MOVEMENT");
	outtextxy(30,140,"PRESS 'S' FOR DOWNWARD MOVEMENT");
	outtextxy(30,210,"PRESS 'A' FOR LEFTWARD MOVEMENT");
	outtextxy(30,280,"PRESS 'D' FOR RIGHTWARD MOVEMENT");
	outtextxy(30,350,"PRESS 'K' FOR STOPING GAME");
	setcolor(3);
	settextstyle(1,HORIZ_DIR,3);
	outtextxy(140,420,"PRESS ANY KEY TO START GAME");
	//
	setcolor(14);
	circle(x,y1,20);
	setfillstyle(SOLID_FILL,14);
	floodfill(x,y1,14);
	setcolor(0);
	setfillstyle(SOLID_FILL,0);
	circle(x-13,y1-4,3);
	sector(x,y1,45,125,20,20);
	//
	setcolor(14);
	circle(x,y2,20);
	setfillstyle(SOLID_FILL,14);
	floodfill(x,y2,14);
	setcolor(0);
	setfillstyle(SOLID_FILL,0);
	circle(x+13,y2+4,3);
	sector(x,y2,225,315,20,20);
	//
	setcolor(14);
	circle(x,y3,20);
	setfillstyle(SOLID_FILL,14);
	floodfill(x,y3,14);
	setcolor(0);
	setfillstyle(SOLID_FILL,0);
	circle(x-4,y3-13,3);
	sector(x,y3,135,225,20,20);
	//
	setcolor(14);
	circle(x,y4,20);
	setfillstyle(SOLID_FILL,14);
	floodfill(x,y4,14);
	setcolor(0);
	setfillstyle(SOLID_FILL,0);
	circle(x+4,y4-13,3);
	sector(x,y4,0,45,20,20);
	sector(x,y4,315,360,20,20);
	getch();
}

void game :: creategrid()
{   
	cleardevice();    
	if(c4!=0)
	{
	 setbkcolor(c4);
	}
	setcolor(c2);
	setfillstyle(SOLID_FILL,c2);
	bar(0,0,639,10);
	bar(0,0,10,479);
	bar(0,470,639,479);
	bar(630,0,639,479);
	bar(30,30,40,230);
	bar(30,250,40,450);
	bar(600,30,610,230);
	bar(600,250,610,450);
	bar(290,260,350,265);//
	bar(290,220,295,260);
	bar(345,220,350,260);
	bar(290,220,310,225);
	bar(330,220,350,225);
	bar(330,30,600,40);
	bar(30,30,310,40);
	bar(330,440,600,450);
	bar(30,440,310,450);
	bar(510,350,570,410);//square1
	bar(510,310,570,330);
	bar(470,350,490,410);
	bar(510,70,570,130);//square2
	bar(470,70,490,130);
	bar(510,150,570,170);
	bar(70,350,130,410);//square3
	bar(70,310,130,330);
	bar(150,350,170,410);
	bar(70,70,130,130); //square4
	bar(150,70,170,130);
	bar(70,150,130,170);
	bar(310,70,330,200);
	bar(200,190,440,200);
	bar(200,280,440,290);
	bar(310,280,330,410);
}
void game :: createdots()
{
	int x,y;
	setcolor(c3);
	setfillstyle(SOLID_FILL,c3);
	for (x=20;x<=625; x=x+20)
	{
		for (y=20;y<=460;y=y+20 )
		{
			if ((x>=290&&x<=350)&&(y>=220&&y<=265))
			{
				continue;
			}
			if (getpixel(x,y)!=c2)
			{
				circle(x,y,r2);
				floodfill(x,y,c3);
				//plscore++;
			}
		}
	}
}
void game :: clearblock(int l,int t,int r,int b)
{
	setcolor(c4);
	setfillstyle(SOLID_FILL,c4);
	bar(l,t,r,b);
}

void game :: gameplay()
{
	int x=320,y=240,xo,yo,k=0,j=4;
	char cm;
	// setcolor(c1);
	// 	circle(x,y,5);
	// 	setfillstyle(SOLID_FILL,c1);
	// 	floodfill(x,y,c1);
	do{
		setcolor(c1);
		circle(x,y,r1);
		setfillstyle(SOLID_FILL,c1);
		floodfill(x,y,c1);
		setcolor(c4);
		setfillstyle(SOLID_FILL,c4);
		if (j==1)
		{
			circle(x-4,y-1,2);
			putpixel(x-4,y-1,c4);
			if (k==1){sector(x,y,45,125,r1,r1);}
			else{line(x,y,x,y-r1);}
		}
		else if (j==2)
		{
			circle(x+4,y+1,2);
			putpixel(x+4,y+1,c4);
			if (k==1){sector(x,y,225,315,r1,r1);}
			else{line(x,y,x,y+r1);}			
		}
		else if (j==3)
		{
			circle(x-1,y-4,2);
			putpixel(x-1,y-4,c4);
			if (k==1){sector(x,y,135,225,r1,r1);}
			else{line(x-r1,y,x,y);}			
		}
		else if (j==4)
		{
			circle(x+1,y-4,2);
			putpixel(x+1,y-4,c4);
			if (k==1){sector(x,y,0,45,r1,r1);sector(x,y,315,360,r1,r1);}
			else{line(x,y,x+r1,y);}
		}
		//creategrid();
		cm=getch();
		xo=x;
		yo=y;
		if(cm=='w'||cm=='W')
		{
			if(getpixel(x,y-10)!=c2&&getpixel(x,y-(r1+1))!=c2&&getpixel(x,y-(r1+11))!=c2)
			{
				y=y-10;
			}
			else{
			 continue;
			}
			j=1;
		}
		else if(cm=='s'||cm=='S')
		{
			if(getpixel(x,y+10)!=c2&&getpixel(x,y+(r1+1))!=c2&&getpixel(x,y+(r1+11))!=c2)
			{
				y=y+10;
			}
			else{
			 continue;
			}
			j=2;
		}
		else if(cm=='a'||cm=='A')
		{
			if(getpixel(x-10,y)!=c2&&getpixel(x-(r1+1),y)!=c2&&getpixel(x-(r1+11),y)!=c2)
			{
				x=x-10;
			}
			else{
			 continue;
			}
			j=3;
		}
		else if(cm=='d'||cm=='D')
		{
			if(getpixel(x+10,y)!=c2&&getpixel(x+(r1+1),y)!=c2&&getpixel(x+(r1+11),y)!=c2)
			{
				x=x+10;
			}
			else{
			 continue;
			}
			j=4;
		}
		else if(cm=='k'||cm=='K')
		{
			break;
		}
		if (getpixel(x,y)==c3)
		{
			plscore++;
		}
		k=(k==1)?0:1;
		delay(40);
		//cleardevice();
		clearblock(xo-r1,yo-r1,xo+r1,yo+r1);
	}while(1);

}

void game :: finalsc()
{
	int i;
	char a[30];
	cleardevice();
	setcolor(1);
	setfillstyle(SOLID_FILL,1);
	bar(0,0,639,10);
	bar(0,0,10,479);
	bar(0,470,639,479);
	bar(630,0,639,479);
	setcolor(4);
	settextstyle(7,HORIZ_DIR,6);
	outtextxy(140,40,"GAME - OVER");
	settextstyle(3,HORIZ_DIR,4);
	// i=sprintf(a,"%d",plscore);
	// a=strcat("YOUR FINAL SCORE IS = ",a);
	//
	sprintf(a,"YOUR FINAL SCORE IS %d", plscore*10);
	outtextxy(140,180,a);
	settextstyle(3,HORIZ_DIR,3);
	outtextxy(140,280,"THANK YOU FOR PLAYING PAC-MAN");
	setcolor(3);
	settextstyle(1,HORIZ_DIR,3);
	outtextxy(140,420,"PRESS ANY KEY TO FINISH GAME");
	getch();
	cleardevice();
}

void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"c:\\tc\\bgi");
 game g;
 g.intro();
 g.details();
 g.creategrid();
 g.createdots();
 g.gameplay();
 g.finalsc();
 closegraph();
}
