#ifndef MYHEADER_H_INCLUDED
#define MYHEADER_H_INCLUDED


int dx, dy;

int pic_rb_y =640;
int pic_gb_y=640;
int b;


void objectChange() {


	if(pic_gb_y < -100){
			pic_gb_y = 520;
		}
		else{
			pic_gb_y -=2;
		}
		if(pic_rb_y < -100){
			pic_rb_y = 520;
		}else{
			pic_rb_y -=2;
		}
	}
	

	

#endif // !MYHEADER_H_INCLUDED