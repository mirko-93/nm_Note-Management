# nm_Note-Management

# Description:
nm is a note management system, designed to work from the command line, it simplifies the storage of information and optimizes the search for it.
 
it allows you to save notes by cataloging them with tags, to divide them and organize them better, and it also allows you to link files to make them easily accessible.

NM is designed for situations like CTF (capture the flag) helping in the information gathering stage to quickly fetch and search saved data.


# DOWNLOAD AND COMPILATION:

$ git clone https://github.com/mirko-93/nm_Note-Management.git

$ cd nm_Note management
 
$ gcc -Wall -o nm nm.c

$ ./nm

You can make the program usable anywhere by the user by adding a path to the .bashrc file

open the .bashrc file in the user's home

and paste the path at the end of the file:

export PATH = "$HOME/nm_Note_Manager:$PATH"

save and exit

now you can call the program from anywhere just by typing

$ nm
