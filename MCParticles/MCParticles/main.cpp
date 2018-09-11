#include <iostream>
#include <stdio.h>

using namespace std;

/*----------------------*/
FILE *cur_file;
string name = "test";
float direction;
float x;
float y;
float x_v;
float y_v;
float v_length;

/*----------------------*/

int main(void)
{
	cur_file = fopen(name.c_str(),"w");
	/*Check for error*/
	if (cur_file == NULL)
	{
		printf("ERROR: Cant open file. Exiting.");
		return(1);
	}


}