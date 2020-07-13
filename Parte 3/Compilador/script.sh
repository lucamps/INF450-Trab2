#!/bin/bash

entrada="cpp"
saida="txt"
echo "Script para automatizar os testes das caches L1 e L3"
echo "Compilando programas"

echo -e "\nInsira o nome do arquivo a ser compilado: " 
read nome_arquivo

under="_"

for i in {1..5};
    do  
        echo -e "\nRodando $nome_arquivo.$entrada pela $i vez..."
        if ! perf stat -e L1-dcache-loads,L1-dcache-load-misses,LLC-loads,LLC-loads-misses g++ $nome_arquivo.cpp &> $nome_arquivo$under$i.$saida
            then echo "Erro!"
                exit 1
        else 
            echo "Ok"
            
        fi
        
    done

echo -e "\nConcluído!"