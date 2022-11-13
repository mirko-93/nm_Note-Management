
/* Contiene le funzioni che si occupano di stampare a video i dati */

void Help(void){
 
printf("%sNAME%s\n    %s - Notes Management\n\n",GRS,NML,Name);	

 printf("%sSYNOPSIS%s\n    %s [OPTION]... [FILE]...\n"
        "                  %s [OPTION]... [STRING]...\n\n",GRS,NML,Name,Name);
  
printf("%sDESCRIPTION%s\n    Manages and organizes notes, uses tags that allow you to filter searches and link external clipboard files\n\n",GRS,NML);

printf("    -t o --tag    insert tag, default \"T01\"\n");
 printf("    -a o --append   attach file\n");
  printf("    -s o --show   show tags used\n");
   printf("    -p o --print	 print notes\n"); 
    printf("    -r o --remove	 remove notes\n");
   printf("    -i o --invert	 inverted print\n");
  printf("    -x o --index	 indexed notes\n");   
 printf("    -d o --date   print of date\n");
printf("    -f o --file   print file\n\n");

printf("    --setting   set the file notes, default \"~/.NotesManager/Notes.dat\"\n");  
 printf("    --rebuild   rebuilds the notes file\n\n");
  
printf("%sEXAMPLE:%s\n",GRS,NML);
 printf("    %s -t T02 \"notes\"   %s->%s    adds a note tagged h02\n",Name,GRS,NML);
  printf("    %s -t T02 -a \"file.txt\"   %s->%s    adds a file with tag h02\n",Name,GRS,NML);
   printf("    %s -p -t T02   %s->%s    print all notes tagged h02\n",Name,GRS,NML);
    printf("    %s -p -f -x 5   %s->%s    print the file with index 5\n",Name,GRS,NML);
   printf("    %s -s   %s->%s    shows all tags used\n",Name,GRS,NML);
  printf("    %s -r -x 5   %s->%s    remove the file with index 5\n",Name,GRS,NML);
 printf("    %s --setting \"dir/file.dat\"   %s->%s    set up a new notes file\n",Name,GRS,NML);
printf("    %s --rebuild   %s->%s    rebuilds the notes file\n\n",Name,GRS,NML);

printf("%sAUTHOR%s\n    Written by Mirko Catoni\n\n",GRS,NML);

printf("%sVERSION%s\n    1.0\n\n",GRS,NML);}

void PrintDat(void){

if(NDat.Index==0)printf("      %s%-20s%s %s%-11s%s %s%s%s %s%s%s\n",YEL,NDat.Tag,WHT,GRN,NDat.Data,WHT,WHT,NDat.Note,WHT,BLU,NDat.Link_File,WHT);   
 else printf(" %s%-4d%s %s%-20s%s %s%-11s%s %s%s%s %s%s%s\n",RED,NDat.Index,WHT,YEL,NDat.Tag,WHT,GRN,NDat.Data,WHT,WHT,NDat.Note,WHT,BLU,NDat.Link_File,WHT);}
	
void PrintFile(void){ 
	
FILE *input;
 int ch;	

if ((input = fopen (NDat.Link_File, "rb")) == NULL ) Error(ErrorOpenFile,"");	
 ch = fgetc(input); printf("\n\n");

while (!feof(input)) {
 printf("%c",ch);
  ch = fgetc(input);}  
  
printf("\n\n");  
 fclose(input);}
				
	
