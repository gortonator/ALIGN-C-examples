using namespace std;

#include <string.h>
#include <iostream>
#include <stdlib.h>

//
// function prototypes
//
void    initScores(int * iaScores, int max);
float   calcAverage (int * iaScores, int max);
int *   calcOccurrences(int * iaScores, int max );
int *   calcPercentiles(int * iaOccurrences, inumPercentiles);
int *   calcMode(int * iaOccurrences);

//
// global constants (for conevenience)
//
const int MAX_SCORES = 200;

main() {

    cout << "Calc Scores is starting" << endl;
    int * iaScores = new int [MAX_SCORES];
    initScores(iaScores, MAX_SCORES);
   
    
    
    
    delete [] iaScores;
    cout << "Calc Scores is over and out" << endl;
}

void    initScores(int * iaScores, int MAX)
{
    srand(MAX); // need to make more random
    for (int i = 0; i< MAX; i++) {
        iaScores[i] = rand() % 100;
        cout << i << ":score = " << iaScores[i] << endl;
    }
    
}

float   calcAverage (int * iaScores, int max)
{
    
}

bool    calcModePercentiles(int * iaScores, int MAX, int * iaPercentiles, int iMode)
{
    
}