# include "iGraphics.h"
#include <iostream>

int a=1;

int green_ballon, red_ballon, target,boom_image,background; //variables for the images


int c_x,c_y; //for the target co-ordinate

int score;           //score printing
char score_char[10];

int pic_rb_y =640;
int pic_gb_y=640;

int point = 10;

void iDraw()
{

	//iClear();

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
		pic_rb_y = 520;
	}

	if(a == 2)
	{ 
		iShowImage(225, pic_gb_y, 100, 100, boom_image);
		pic_gb_y = 520;
	}
	
	iShowImage(c_x,c_y,100,100,target);	

    if (pic_rb_y< -100 || pic_gb_y < -100)
        {
            iText(290,260,"Game Over");
            iPauseTimer(0);
        }
	
    
	iSetColor(255, 255, 255);
	iText(512, 503, "Score: ");

    std::sprintf(score_char, "%d", score);

    iText(565, 503, score_char);

	iText(10, 10, "Press p for pause, r for resume, END for exit.");
}


void iMouseMove(int mx, int my)
{

}

void iPassiveMouse(int mx, int my)
{
	printf("(x,y):%d,%d \n",mx, my);
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
				score += point;
               
			}
		}
		if(mx >= 325 && mx <=425)
		{
			//printf("%d\n%d\n",my,pic_gb_y);
			if(my >= pic_rb_y && my <= pic_rb_y+80)
			{
				a=1;
				score+= 2*point;
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

void load_image(){

    //! change the images 
    green_ballon = iLoadImage("images\\gb.png");
	red_ballon = iLoadImage("images\\rb.png");
	target = iLoadImage("images\\c.png");
	boom_image = iLoadImage("images\\boom.png");
    background = iLoadImage("images\\sky.jpg");

}

void objectChange_1() {

	if(pic_gb_y < -100){
			pic_gb_y = 520;
		}
		else{
			pic_gb_y -=3;
		}
}

void objectChange_2(){

    if(pic_rb_y < -100){
			pic_rb_y = 520;
		}else{
			pic_rb_y -=5;
		}
}


int main()
{

	iInitialize(640, 520, "Ballon Shooter");
    load_image();

	iSetTimer(5,objectChange_1);
    iSetTimer(5,objectChange_2);
    

	iStart(); // it will start drawing

	return 0;
}