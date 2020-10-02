#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i = 0 ;
    string str[] = "07:05:45PM" ;
    char *substring [1];
    string *tok = strtok(str , ":"); // spliting the string on the basis of :
    string *str2[3];

    while (tok != NULL){
        str2[i++] = tok;
        tok = strtok(NULL ,":"); // taking splitted string in the array str2


    }
    for(int i = 0 ; i < 3 ; i++){
        cout<< str2[i] << " "; // printing the str2
    }

   // substring[0] = str2[2];
   // cout<< substring[0];


    return 0;
}
