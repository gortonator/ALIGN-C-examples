using namespace std;

#include <stdio.h>
#include <string.h>
#include <iostream>

//
// function prototypes
//
char * insultManUDangerous (char * strCityCompliment, char * strUnitedInsult);
char * insultManUComplex (char * strCityCompliment, char * strUnitedInsult, char * strResult);
char * insultManU (char * strCityCompliment, char * strUnitedInsult, char * strResult);


//
// global constants (for convenience)
//
const char * AND = " AND ";


main() {
    cout << "Manchester City are a great team. The program is starting" << endl;
    
    // initialize insults
    char strCity[] = "Manchester City Rule";
    char strScum[] = "Manchester United are Scum!!";
    cout << "strCity length is:" << strlen(strCity) << endl;
    cout << "strScum length is:" << strlen(strScum) << endl;
    cout << "AND strlen =" << strlen(AND) << endl;
   
    // allocate empty space as a buffer for insult string that gets built in the function
    char * strInsult = new char [strlen(strCity)  + strlen (strScum) + strlen(AND) + 1];
    // cout << "new string length is: " << strlen(strInsult) << endl;
    
    // construct and print the results. insultManU() and insultManUComplex() will work.
    // they are different implementations of the same functionality
    strInsult = insultManU (strCity, strScum, strInsult);
    cout << "*****" << strInsult << "*****" << endl;
    
    strInsult = insultManUComplex (strCity, strScum, strInsult);
    cout << "*****" << strInsult << "*****" << endl;
    
    // if you uncomment the call to insultManUDeangerous below, the program will crash
    strInsult = insultManUDangerous (strCity, strScum);
    
    delete [] strInsult;
    
    // exit program
    printf("Bye bye Demo - CTID\n");
}

//
// concatenates the first two argumants with " AND "  and returns the result in strResult
// expects strResult to point to valid prellocated space for result
//
char * insultManU (char * strCityCompliment, char * strUnitedInsult, char * strResult)
{
    printf("===Entered insult the scum===\n");
   
    strcpy(strResult, strCityCompliment);
    //cout << strResult << endl ;
    strcat(strResult, AND);
    //cout << strResult << endl ;
    strcat(strResult, strUnitedInsult);
    cout << strResult << endl ;
    
    printf("===Exit insult the scum===\n");
   ;
    return strResult;
}

//
// concatenates the first two argumants with " AND "  and returns the result in strResult
// expects strResult to point to valid prellocated space for result
//
char * insultManUComplex (char * strCityCompliment, char * strUnitedInsult, char * strResult)
{
    printf("===Entered insult the scum in a needlessly complex but illustrative and enjoyable way===\n");
   
    strcpy(strResult, strCityCompliment);
    // cout << strResult << endl ;
    strcat(&strResult[strlen(strResult)], AND);
    // cout << strResult << endl ;
    strcat(&strResult[strlen(strResult)], strUnitedInsult);
    cout << strResult << endl ;
    
    printf("===Exit insult the scum in a needlessly complex but illustrative and enjoyable way===\n");
   ;
    return strResult;
}

//
// This function shows how not to create a string to hold the result!!
//
char * insultManUDangerous (char * strCityCompliment, char * strUnitedInsult)
{
    printf("===Entered insult the scum in a dangerous and reckless manner===\n");
    // allocate space as an empty buffer taht is big enough to hold the result
    char * strResult = new char[strlen(strCityCompliment)  + strlen (strUnitedInsult) + strlen(AND) + 1];
    
    // concatanate the thwo arguments and the global constant AND
    strcpy(strResult, strCityCompliment);
    cout << strResult << endl ;
    strcat(&strResult[strlen(strResult)], AND);
    cout << strResult << endl ;
    strcat(&strResult[strlen(strResult)], strUnitedInsult);
    cout << strResult << endl ;
    
    // make a copy of the pointer to the result to return and be good and delete the memory
    // we allcated in the same scope
    char* temp = strResult;
    delete [] strResult;
    
    printf("===Exit insult the scum in a dangerous and reckless manner===\n");
   
    // this returns an invalid pointer - we deleted it above!!!
    
}
