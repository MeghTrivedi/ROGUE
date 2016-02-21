/***************************************************************************
Student Name: Megh Trivedi			Student Number:0886172  
Date: 02/12/16                 		Course Name: cis2500

I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
     1) I have read and understood the University policy on academic integrity;
     2) I have completed the Computing with Integrity Tutorial on Moodle; and
     3) I have achieved at least 80% in the Computing with Integrity Self Test.
I assert that this work is my own. I have appropriately acknowledged any and all material
(data, images, ideas or words) that I have used, whether directly quoted or paraphrased.
Furthermore, I certify that this assignment was prepared by me specifically for this course.
****************************************************************************/

/*Include a library*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ncurses.h>

/*define the key buttons*/
#define UP	    'w'
#define DOWN	's'
#define LEFT	'a'
#define RIGHT	'd'
#define SELECT  'x'

/*define for boolean operator*/
#define TRUE 1
#define FALSE 0
#define BOOLEAN int

struct color{
    int red;
    int white;
    int blue;
    int green;
    int yellow;
    int cyan;
}col;

BOOLEAN outOfBound(char * next, int row, int col);
void userControl(char direction);
void objects(char *word, int column, int row, int y, int x);
void drawBorder(int column, int row, int ypos, int xpos);
