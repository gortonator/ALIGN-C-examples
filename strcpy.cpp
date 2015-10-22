#include <string.h>
#include <stdio.h>

// prototypes

char * stringCopy (char * );

const int SIZE = 50;

main() 
{
   
    char *strThing;
    
    strThing = new char[SIZE];
    strcpy(strThing, "test222222");
    char * strResult = stringCopy(strThing);
    printf ("result=%s", strResult);
    delete strResult;

}

//
// returns a copy of the string passed as a parameter
//
char * stringCopy (char *strToCopy )
{
    char * strTemp;
    
    strTemp = new char[ strlen(strToCopy)];
    strcpy(strTemp, strToCopy);
    printf("strtemp is %s\n", strTemp);

    return (strTemp);
}