/*Programa 4: Obtendo o menor elemento de cada vetor. De ao todo 1000 vetores de tamanho 1000*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

int min(vector<int> v){
    
    int min = 100000;


    //Obtendo o menor elemento
    for(int j=0;j<1000;j++){
        if(v[j] < min)
            min = v[j];
    }
    

    return min;
}