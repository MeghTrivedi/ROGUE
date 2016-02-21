#include "headerfile.h"

BOOLEAN outOfBound(char *next, int row, int col){
	int xpos, ypos;
	getyx(stdscr, ypos,xpos);
	*next = mvinch(row,col);
	move(ypos,xpos);
	if((*next == 'X' || *next == 'M')){
		return TRUE;
	}else{
		return FALSE;
	} /*end if*/
}/*end out of bound function*/

void userControl(char direction){
	int xpos, ypos;
	char nextChar;
	getyx(stdscr, ypos,xpos);
	if (UP == direction){
		ypos = ypos - 1;
	}else if (DOWN == direction){
		ypos = ypos + 1;
	}else if (RIGHT == direction){
		xpos = xpos + 1;
	}else if (LEFT == direction){
		xpos = xpos - 1;
	}/*end of if statement for key control*/
		
	if(outOfBound(&nextChar,ypos,xpos)){
	}else{
		move(ypos, xpos);
    }/*does not allow to move out of border*/
	
	refresh();
}/*end user*/
