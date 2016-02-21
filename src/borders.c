#include "headerfile.h"

void drawBorder(int column, int row, int ypos, int xpos){
    /*variable for counter*/
    int y, x;
    /*set color*/
    attron(COLOR_PAIR(1));
    /*draw the border with x*/
    for (y = 0; y < column+2; y++){
		move(y+ypos, 0+xpos);
        printw("X");
    }/*end for*/
    for (x = 0; x < row; x++){
		move(0+ypos, x+1+xpos);
		printw("X");
    }/*end for*/
    for (y = 0; y < column+2; y++){
		move(y+ypos, row+1+xpos);
		printw("X");	
    }/*end for*/
    for (x = 0; x < row; x++){
		move(column+1+ypos, x+1+xpos);
		printw("X");
    }/*end for*/	
}/*end Border*/
