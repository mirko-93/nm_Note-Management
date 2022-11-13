
/* Programma per la gestione delle note, permette di prendere, organizzare e catalogare appunti
*  direttamente dal terminale e ritrovarli rapidamente grazie all' ausilio di tag;
*  permette inoltre di linkare interi file per poterli visualizzare a piacimento */

#include <stdio.h>
 #include "Source/Global.h"
 
int main(int argc, char **argv){
	
memset(&NDat,0,sizeof (NotesData));

Direct = getenv("HOME"); strcat(Direct,Dir);   // carica in "Direct" la home utente e accoda la directori "Dir" (/home/utente/.NotesManager) 
 strcpy(Setting,Direct); strcat(Setting,SetFile); // copia la "Direct" e accoda il file "SetFile" (/home/utente/.NotesManager/.config)
  strcpy(DefaultFile,Direct); strcat(DefaultFile,FileNotes);  // copia la "Direct" e accoda il file "FileNotes" (/home/utente/.NotesManager/Notes.dat)

if ((PtrFile = fopen (Setting, "r")) == NULL ){  // verifica se il file "Setting" esiste
 Primo_Avvio(); Help(); exit(0); } // se non esiste lancia Primo_Avvio() 
 
else{ fclose( PtrFile );
    
if (argc < 2 ){ Help(); return 0;}
 SetRead(); Scanner(argc, argv);} // SetRead() legge il file di configurazione; Scanner() verifica gli argomenti inseriti
  return 0;}

