// Writing to a File
// write.c

#include <stdio.h>
 
 int main(void)
 {

 	FILE *newfile = NULL; // creates a pointer(varible) to a file type
 	int item = 4664;
 	double cost = 1.49

 	newfile = fopen("beta.txt, w"); // give ermission to read from the text file
 	if(newfile != NULL){
 		fprintf("newfile, item -%d cost = %10.2lf\n." sku, cost);
 		fclose(newfile);
 	} else {
 		printf("Failed to open\n");
	} 
	return 0;
 }
