# include "iGraphics.h"
#include "mahis_header.h"
#include "file_line.h"

#include <iostream>
#include <stdio.h>

int a=1,pic_b_x,pic_b_y;
int pic_x,pic_y;
int green_ballon, red_ballon, target,boom_image,background;
int b_x, b_y;

int c_x,c_y;

int old_user= total_user;

int score = 0;
int gb_point = 20;
int rb_point = 10;

int stop =0 ;

int file_stop =0;

void iDraw()
{

	iClear();
	iShowImage(0,0, 640, 520, background);

	if(a==1){
		
		iShowImage(225, pic_gb_y, 100, 100, green_ballon);
	}

	if(a==2)
	{
		iShowImage(325, pic_rb_y, 100, 100, red_ballon);
	}


    if(a == 1)
	{
		iShowImage(325, pic_rb_y, 100, 100, boom_image);
		iShowImage(325, pic_rb_y, 100, 100, boom_image);
		iShowImage(325, pic_rb_y, 100, 100, boom_image);
		iShowImage(325, pic_rb_y, 100, 100, boom_image);
		iShowImage(325, pic_rb_y, 100, 100, boom_image);
		pic_rb_y = 520;
	}

	if(a == 2)
	{
        
		iShowImage(225, pic_gb_y, 100, 100, boom_image);
		iShowImage(225, pic_gb_y, 100, 100, boom_image);
		iShowImage(225, pic_gb_y, 100, 100, boom_image);
		iShowImage(225, pic_gb_y, 100, 100, boom_image);
		iShowImage(225, pic_gb_y, 100, 100, boom_image);

		pic_gb_y = 520;
	}
	
	iShowImage(c_x,c_y,100,100,target);	

    if (pic_rb_y< -100 || pic_gb_y < -100)
        {
            iText(290,260,"Game Over");
            

			if (stop ==0 ){
                //printf("Score is %d\n",score);
				//printf("User is %d\n",old_user);
				FILE *user_data =fopen("user_data.txt","a");
				fprintf(user_data,"ID %d \npoint %d\n",old_user+1,score);
                stop=1;
                }
			iPauseTimer(0);
        }
	
	

   // iUnRotate();
	iSetColor(255, 255, 255);
	iText(512, 503, "Score: ");
  
    char score_char[10 + sizeof(char)];
    std::sprintf(score_char, "%d", score);

    iText(565, 503, score_char);

	iText(10, 10, "Press p for pause, r for resume, END for exit.");
}


void iMouseMove(int mx, int my)
{
	//place your codes here
	//printf("(x,y):%d,%d \n",mx, my);
}

void iPassiveMouse(int mx, int my)
{
	//printf("(x,y):%d,%d \n",mx, my);
	c_x = mx -50;
	c_y =my -50;
	
}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(mx >= 225 && mx <= 325)
		{
			//printf("%d\n%d\n",my,pic_gb_y);
			if(my >= pic_gb_y && my <= pic_gb_y+80)
			{
				a=2;
                score+= gb_point;
               
			}
		}
		if(mx >= 325 && mx <=425)
		{
			//printf("%d\n%d\n",my,pic_gb_y);
			if(my >= pic_rb_y && my <= pic_rb_y+80)
			{
				a=1;
                score+= rb_point;
			}
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

void iKeyboard(unsigned char key)
{
	if (key == 'p')
	{
		//do something with 'q'
		iPauseTimer(0);
	}
	if (key == 'r')
	{
		iResumeTimer(0);
	}

}

void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}

}

void file_handling_function(){

	file_scanner();

	 point_array_modified =sort_decreasing_order( delete_duplicate_element(point_array) );

	 highest_score_printer();
	
}

int main()
{

	iInitialize(640, 520, "Ballon Shooter");
	pic_x =0;
	pic_y =640;

	file_handling_function();
	iSetTimer(5,objectChange);
	
	green_ballon = iLoadImage("images\\gb.png");
	red_ballon = iLoadImage("images\\rb.png");
	target = iLoadImage("images\\c.png");
	boom_image = iLoadImage("images\\boom.png");
	background = iLoadImage("images\\sky.jpg");

	iStart(); // it will start drawing

	return 0;
}