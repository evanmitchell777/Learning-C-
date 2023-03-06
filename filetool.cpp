#include <iostream>  // for input/output
#include <string>    // for working with strings
#include <fstream>   // for reading and writing files
#include <dirent.h>  // for working with directories
#include <unistd.h>  // for working with system calls
#include <pwd.h>     // for working with user accounts
#include <grp.h>     // for working with groups
#include <sys/stat.h>  // for working with file permissions
#include <sys/types.h> // for working with file types
#include <sys/wait.h>  // for working with child processes
#include <algorithm>   // for working with vectors and strings
#include <vector>      // for working with vectors
#include <cstring>     // for working with C-style strings
#include <cstdlib>     // for working with system calls and environment variables
#include <iomanip>     // for formatting output
#include <sstream>     // for working with streams
#include <ctime>       // for working with dates and times
#include <chrono>      // for working with time durations and clocks
#include <zlib.h>      // for compressing and decompressing files using zlib
#include <memory>
#include <cctype>
#include <string>
#include <stdlib.h>
/*
Listing the contents of a directory
Changing the current working directory
Searching for files with specific names or extensions
Setting file permissions
Compressing or decompressing files
Viewing the content of a file
Editing the content of a file
Sorting files in a directory by size, date, or name
Filtering files in a directory by name or extension
Displaying information about a file, such as its size and last modification date.
*/

using namespace std;
string the_file;

//this creates a file
void create_file() {
    cout << "enter file you want to edit: ";
    cin >> the_file;
    cin.ignore();
    cout << "Type here: ";
    string add_to_file;
    getline(cin, add_to_file);

    unique_ptr<ofstream> file(new ofstream(the_file, ios::app));

    *file << add_to_file << endl;
    file->close();
}

//this creates a directory
void create_directory(){
cout<<"Enter Directory you want to create: ";
string directory_path;
cin>>directory_path;
string command="mkdir "+directory_path;
system(command.c_str());

}

//this deletes a dirctory 
void remove_directory(){
cout<<"Enter Directory you want to delete: ";
string directory_path;
cin>>directory_path;

cout<<"Are you sure you want to delete this directory? Enter y or n: ";
char choice;
cin>>choice;
 
 
 switch(tolower(choice)){
    case 'y':{
        string command="rm -r "+directory_path;
        system(command.c_str());
        break;
    }
 
 case 'n':{
    cout<<"directory will not be deleted.";
    break;
 }
 default:{
    "enter a valid choice.";
 }}}

void move_file_directory(){
    cout<<"Do you wanna move a file or directory? Enter 'f' or 'd': ";
    char choice;
    cin>>choice;

    switch(tolower(choice)){
        case 'f':{
            cout<<"enter the file/file path of the file you want to move: ";
            cin>>the_file;
            cout<<"enter the destination file: ";
            string destination;
            cin>>destination;
            string command = "mv " + the_file + " " + destination;
            system(command.c_str());
            break;
        }
       case 'd':{
        cout<<"enter the directory you would like to move: ";
        string the_directory;
        cin>>the_directory;

        cout<<"enter the destination directory: ";
        string dest_directory;
        cin>>dest_directory;

        string command="mv "+the_directory+" "+dest_directory;
        system(command.c_str());
        break;
}
        default:{
            cout<<"enter a valid choice!";
            break;
        }
    }
}



void copy_file_directory(){
 cout<<"Do you wanna copy a file or directory? Enter 'f' or 'd': ";
    char choice;
    cin>>choice;

    switch(tolower(choice)){
        case 'f':{
            cout<<"enter the file/file path of the file you want to copy: ";
            cin>>the_file;
            cout<<"enter the destination file: ";
            string destination;
            cin>>destination;
            string command = "cp " + the_file + " " + destination;
            system(command.c_str());
            break;
        }
       case 'd':{
        cout<<"enter the directory you would like to copy: ";
        string the_directory;
        cin>>the_directory;

        cout<<"enter the destination directory: ";
        string dest_directory;
        cin>>dest_directory;

        string command="cp "+the_directory+" "+dest_directory;
        system(command.c_str());
        break;
}
        default:{
            cout<<"enter a valid choice!";
            break;
        }
    }


}


void delete_file(){
    cout << "enter the file you would like to delete: ";
    cin >> the_file;

    cout << "Are you sure you want to delete " << the_file << " y or n: ";
    char choice;
    cin >> choice;

    switch(tolower(choice)){
        case 'y':{
            string command="rm "+the_file;
            system(command.c_str());
            break;
        }
        case 'n':{
            cout<<"The file will not be deleted.";
            break;
        }
        default:{
            cout<<"enter a valid choice.";
            break;
        }
    }
}


void list_directory_contents{
cout<<"enter the directory you want to list the contents of";
string directory;
cin>>dirctory;

string command="ls -a "+ directory;
system(command.c_str());


}


int main(){
    list_directory_contents();
}
