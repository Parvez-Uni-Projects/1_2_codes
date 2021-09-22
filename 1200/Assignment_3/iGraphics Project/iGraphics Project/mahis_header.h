#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED


int dx, dy;

int frame_width = 640, frame_height= 520 ;

int pic_red_ballon_y =frame_height;
int pic_green_ballon_y=frame_height;

int pic_green_ballon_x = 225;
int pic_red_ballon_x= 325;


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
	

	

#endif // !MYHEADER_H_INCLUDED