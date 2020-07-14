/*
Programa para calcular média dos dados da parte 3 com base nos arquivos de texto gerados
Obs: Para um bom funcionamento valores com . tem que ser removidos */
#include <iostream>
#include <fstream> 
#include <cstring>
using namespace std;

double media(double v[], int tam){
    double soma = 0.0;

    for(int i=0;i<tam;i++)
        soma+= v[i];

    return soma/tam;
}

int main(){
    ifstream ifs[5];
    string aux;

    string fileName;
    cout << "Digite o nome base dos arquivos: ";
    cin >> fileName;
    
    //Inicializando vetor de ifstreams
    for(int i=0; i<5; i++){
        aux = fileName + "_" + to_string(i+1) + ".txt";
        ifs[i].open(aux, ifstream::in);
    }

    //Le linhas desnecessarias
    for(int j=0; j<5; j++){
        for(int i=0; i<2; i++){ //i -> número de linhas puladas
            getline(ifs[j],aux);
        }
    }
    
    double loadsL1[5];
    double missesL1[5];
    double loadsL3[5];
    double missesL3[5];

    for(int i=0; i<5; i++){
        ifs[i] >> loadsL1[i];//Le os loads do L1
        //cout << loadsL1[i] << endl;
        ifs[i] >> aux; //le texto desnecessario

        ifs[i] >> missesL1[i];//Le os misses do L1

        getline(ifs[i],aux);//le texto desnecessario

        ifs[i] >> loadsL3[i];//Le os loads do L3
        ifs[i] >> aux; //le texto desnecessario

        ifs[i] >> missesL3[i];//Le os misses do L3
    }

    cout << /*"Média loadL1 = "*/" " << media(loadsL1,5) << "\t";
    cout << /*"Média missesL1 = "*/ ""<< media(missesL1,5) << "\t";

    cout << /*"Média loadL3 = "*/"" << media(loadsL3,5) << "\t";
    cout << /*"Média missesL3 = "*/"" << media(missesL3,5) << "\n";

    return 0;
}