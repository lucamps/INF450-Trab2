/*
    Programa auxiliar para criar as entradas do programa mochila.cpp
*/

#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    srand (time(NULL));
    int numItens, cap;
    cin >> numItens >> cap;

    cout << "int W = " << cap << ";\nItem arr[] = {";
    for(int i=0; i<numItens-1; i++){
        cout << "{" << rand()%cap + 1 << ", " << rand()%cap +1 << "}, ";

        if((i+1)%4 == 0)
            cout << "\n\t";
    }
    cout << "{" << rand()%cap + 1 << ", " << rand()%cap +1 << "}};\n";
    return 0;
}