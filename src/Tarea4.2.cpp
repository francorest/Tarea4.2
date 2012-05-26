//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <stdio.h>
#include <stdlib.h>
#include "FBT.h"

#include <math.h>

using namespace std;

int main() {

	FBT fbt;
	int result;
	
    int N;
    while( scanf( "%d", &N ) != EOF )
    {
        int i;
        for( i = 0 ; i < N ; i++ )
        {
            int D, I;
            scanf( "%d%d", &D, &I );
        
		result = fbt.process(D, I); 
            printf( "%d\n", result);
        }
		return 0;
    }

	return 0;
}
