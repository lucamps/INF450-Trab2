/*Programa 1: preenchendo 1000 vetores de tamanho 1000*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    srand (time(NULL));
    for(int i=0; i<1000;i++){
        vector<int> v;

        //Preenchendo o vetor de forma randomica
        for(int j=0;j<1000;j++){
            v.push_back(rand()%100000);
        }

    }

    return 0;
}