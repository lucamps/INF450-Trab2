/*Programa 3: Obtendo o maior elemento de cada vetor. De ao todo 1000 vetores de tamanho 1000*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

int max(vector<int> v){
    int max = 0;
    //Obtendo o maior elemento
    for(int j=0;j<v.size();j++){
        if(v[j] > max)
             max = v[j];
    }
    

    return max;
}