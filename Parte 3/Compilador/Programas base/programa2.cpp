/*Programa 2: somando elementos de cada vetor.*/
#include <iostream>
#include <vector>

using namespace std;

int soma(vector<int> v){
    int result = 0;

    //Somando
    for(int j=0;j<1000;j++){
        result += v[j];
    }

    return result;
}