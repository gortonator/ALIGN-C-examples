#include <stdio.h>
// prototypes

void addNumsLocal(int x, int y);
void addNums(int *x, int *y) ;
int addNumsReturn(int x, int y) ;



main() {
    int iNum1 = 6;
    int iNum2 = 5;
    int iTotal = 0;

    // start of main execution
    printf("Hello Demo!\n");
    
    // call addNumsLocal and print results
    addNumsLocal(iNum1, iNum2);
    printf("iNum1=%d: iNum2=%d\n", iNum1, iNum2 );
    
    // call addNums and print result
    addNums(&iNum1, &iNum2);
    printf("iNum1=%d: iNum2=%d\n", iNum1, iNum2);
   
    // call addNums Return and print results
    iTotal= addNumsReturn(iNum1, iNum2);
   
    printf("iNum1=%d: iNum2=%d\n", iNum1, iNum2);
    printf("total=%d\n", iTotal);
    
    // exit program
    printf("Bye bye Demo\n");
}

//
// add the two integer parameters together and prints result but returns nothing
// this isn't a very useful function :) for illustration only
//
void addNumsLocal(int x, int y) 
{
    printf("===entered addNumsLocal===\n") ;
    
    printf("x=%d: ", x);
    printf("y=%d\n", y);
    
    x=x+y;
    printf("x+y=%d\n", x);
    
    printf("===exit addNumsLocal===\n") ;
}

//
// add the two integer parameters together, prints result and returns total in first parameter
// illustrates passing parameters as pointers in order to change the parameter values in the function.
// works but not great code
//
void addNums(int *x, int *y) 
{
    int _iTotal;
    printf("===entered addNums===\n") ;
    
    printf("x=%d: ", *x);
    printf("y=%d\n", *y);
    
    *x=*x+*y;
    _iTotal = *x;
    printf("x+y=%d\n", *x);
    
    printf("===exit addNums===\n") ;
}

//
// add the two integer parameters together, prints result and returns total 
// This is a good way to do it!
//
int addNumsReturn(int x, int y) 
{
    printf("===entered addNumsReturn===\n") ;
    
    printf("x=%d: ", x);
    printf("y=%d\n", y);
    
    x=x+y;
    printf("x+y=%d\n", x);
    printf("===exit addNumsReturn===\n") ;
    return (x);
}


