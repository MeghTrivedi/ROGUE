#include "headerfile.h"

void objects(char *word, int column, int row, int y, int x){
	/*declare variables*/
	int doorPosition;
	char doorLocation;
	int ypos = 0, xpos = 0;
	/*int yHero = 0, xHero = 0;*/
	
	/*doorway*/
	attron(COLOR_PAIR(col.white));
	if(word[0] == 'd'){	
		doorLocation = word[1];
		if(doorLocation == 'e'){ 
			doorPosition = atoi(&word[2]);		
			move(doorPosition+y, row+1+x);
			printw("d");
		}else if(doorLocation == 'w'){
			doorPosition = atoi(&word[2]);		
			move(doorPosition+y, 0+x);
			printw("d");	
		}else if(doorLocation == 'n'){
			doorPosition = atoi(&word[2]);		
			move(0+y , doorPosition+x);
			printw("d");
		}else if(doorLocation == 's'){
			doorPosition = atoi(&word[2]);		
			move(column+1+y ,doorPosition+x);
			printw("d");
		}/*end else if*/
	}else if(word[0] == 's'){
		ypos = atoi(&word[3]);
		xpos = atoi(&word[1]);
		attron(COLOR_PAIR(col.white));
		move(ypos+y, xpos+x);
		printw("s");
	}else if(word[0] == 'g'){
		ypos = atoi(&word[3]);
		xpos = atoi(&word[1]);
		attron(COLOR_PAIR(col.yellow));
		move(ypos+y, xpos+x);
		printw("g");
	}else if(word[0] == 'm'){
		ypos = atoi(&word[3]);
		xpos = atoi(&word[1]);
		attron(COLOR_PAIR(col.blue));
		move(ypos+y, xpos+x);
		printw("m");
	}else if(word[0] == 'p'){
		ypos = atoi(&word[3]);
		xpos = atoi(&word[1]);
		attron(COLOR_PAIR(col.green));
		move(ypos+y, xpos+x);
		printw("p");
	}else if(word[0] == 'w'){
		ypos = atoi(&word[3]);
		xpos = atoi(&word[1]);
		attron(COLOR_PAIR(col.cyan));
		move(ypos+y, xpos+x);
		printw("w");
	}/*end else if*/
}/*end doorway*/
