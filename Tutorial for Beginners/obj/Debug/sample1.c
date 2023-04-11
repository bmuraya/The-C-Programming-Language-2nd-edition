#include <stdio.h>
#include <unistd.h>
#include <string.h>


// C file Operation
//creat,opening, reading, writing, closing

// proecessing file inpuu fucntion 
// fopen fclose getc,putc getw, putw, fprintf, fscanf, fgets, fputs,feof
/*
int main() {
 
//FILE *fopen(const char *filePath, const char *mode);

FILE *fp;
fp=fopen("filename.txt", "w");
// processing of the files

fprintf(fp, "%s", "hello world");

//end of processing of the file 
fclose(fp);
return 0;
   
}
 */

 int main() {

//FILE Handling  in C 

FILE *fileName; // pointer variable ( step 1 ) for handling files in
char ch[100];
fileName=fopen("filename.txt", "r");
// processing of the files

printf("%s", fgets(ch, 50,fileName));

//end of processing of the file 
fclose(fileName);
return 0;

//getc = reads a character from file
// getw = reading an integer
//fgets = reads strings of characters from file

// writing into the file
// putc, putw, fprint, fputs

}

/*


 int main() {

//FILE opening a file  with pointers in C 
 FILE *fn; // file is a typename , like int

 fn- fopen(filename, mode);  // mode = "r"Read



}





*/

