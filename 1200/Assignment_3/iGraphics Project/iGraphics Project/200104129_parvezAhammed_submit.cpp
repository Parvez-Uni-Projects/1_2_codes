# include "iGraphics.h"
//#include "object_change.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "bitmap_loader.h"

int frame_width = 640, frame_height= 520 ; //declaring the frame width and height

int pic_red_ballon_y   = frame_height;  //all the ballons will start falling from the top
int pic_green_ballon_y = frame_height;

int pic_green_ballon_x = 225;  //the x axis co-ordinate of the ballons
int pic_red_ballon_x   = 325;

int target_x,target_y; //the co-ordinates of the game

int green_ballon, red_ballon, target,boom_image,background; // variables for storing the pictures

int ballon_flag=1; //which ballon to show

int score = 0; //the point start from 0

int green_ballon_point = 10; //number of point each ballon have
int red_ballon_point = 20;

void iDraw()
{

	iClear();
	iShowImage(0,0, 640, 520, background);

	if(ballon_flag==1)  iShowImage(pic_green_ballon_x, pic_green_ballon_y, 100, 100, green_ballon); //condition for showing the ballons

	if(ballon_flag==2)  iShowImage(pic_red_ballon_x, pic_red_ballon_y, 100, 100, red_ballon);

    if(ballon_flag == 1)
	{
		iShowImage(pic_red_ballon_x, pic_red_ballon_y, 100, 100, boom_image);  //condition for showing the blast image and resetting the value
		pic_red_ballon_y = frame_height;
		iShowBMPAlternativeSkipWhite(pic_red_ballon_x,pic_red_ballon_y,"blast.bmp");
	}

	if(ballon_flag == 2)
	{
		iShowImage(pic_green_ballon_x , pic_green_ballon_y, 100, 100, boom_image);
		pic_green_ballon_y = frame_height;

		iShowBMPAlternativeSkipWhite(pic_green_ballon_x,pic_green_ballon_y,"blast.bmp");
	}
	
	iShowImage(target_x,target_y,100,100,target);	 //picture of the aim

    if (pic_red_ballon_y< -100 || pic_green_ballon_y < -100)  //the game over ends the game
        {
            iSetColor(255, 59, 59);
            iText(290,260,"Game Over");
			iPauseTimer(0);
        }

	iSetColor(6, 194, 112);
	iText(480, 503, "Name        Score    ");

    iSetColor(0, 99, 247);
    iText(480, 485, "Parvez");
  
    char score_char[10 + sizeof(char)];  //variable for converting the int into a char array
    std::sprintf(score_char, "%d", score);

    iSetColor(0, 207, 222);
    iText(580, 485, score_char);

    iSetColor(0, 99, 247);
	iText(10, 10, "Press p for pause, r for resume, END for exit.");
}


void iMouseMove(int mx, int my)
{
	//place your codes here
	//printf("(x,y):%d,%d \n",mx, my); -- this is for debugging the code
}

void iPassiveMouse(int mx, int my)
{
	//printf("(x,y):%d,%d \n",mx, my); -- this is for debugging the code
	target_x = mx -50;  // the co ordinates of the target
	target_y =my -50;
	
}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx >= 225 && mx <= 325)
		{
			//printf("%d\n%d\n",my,pic_green_ballon_y);  -- this is for debugging the code
			if(my >= pic_green_ballon_y && my <= pic_green_ballon_y+80)  //checking if the ballon and the target co-ordinates matches
			{
				ballon_flag=2;
                score+= green_ballon_point;  ///point increasing if the co-ordinate matches
				PlaySound("blast_sound.wav", NULL, SND_ASYNC);
			}
		}
		if(mx >= 325 && mx <=425)
		{
			//printf("%d\n%d\n",my,pic_green_ballon_y);  -- this is for debugging the code
			if(my >= pic_red_ballon_y && my <= pic_red_ballon_y+80)     //checking if the ballon and the target co-ordinates matches
			{
				ballon_flag=1;
                score+= red_ballon_point;
				PlaySound("blast_sound.wav", NULL, SND_ASYNC);
			}
		}
	}
	
}

void iKeyboard(unsigned char key)
{
	if (key == 'p')   //p will pause the game
	{
		
		iPauseTimer(0);
	}
	if (key == 'r')  //r will resume the game
	{
		iResumeTimer(0);
	}

}

void iSpecialKeyboard(unsigned char key)  //special key that will end the game 
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}

}
void objectChange() {


	if(pic_green_ballon_y < -100){
			pic_green_ballon_y = 520;
		}
		else{
			pic_green_ballon_y -=3;
		}

		if(pic_red_ballon_y < -100){
			pic_red_ballon_y = 520;
		}else{
			pic_red_ballon_y -=5;
		}
	}

int main()
{

	iInitialize(frame_width, frame_height, "Ballon Shooter");  //initializing the game frame

	iSetTimer(5,objectChange); //calling the void function after 5ms 
	
	green_ballon = iLoadImage("images\\gb.png");  //loading the images
	red_ballon = iLoadImage("images\\rb.png");
	target = iLoadImage("images\\target.png");
	boom_image = iLoadImage("images\\boom.png");
	background = iLoadImage("images\\background.png");
	
	iStart(); // it will start drawing

	return 0;
}