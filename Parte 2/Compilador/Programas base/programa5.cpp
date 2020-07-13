/*Programa 5: ordenando 1000 vetores de tamanho 1000 de forma decrescente*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

void ordena(vector<int> &v){
    //Ordenando
    sort(v.rbegin(),v.rend());

    return;
}