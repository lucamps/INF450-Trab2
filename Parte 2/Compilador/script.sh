#!/bin/bash

entrada="cpp"
saida="txt"
echo "Script para automatizar os testes do perf"
echo "Compilando programas"

echo -e "\nInsira o nome do arquivo a ser compilado: " 
read nome_arquivo

under="_"

for i in {1..5};
    do  
        echo -e "\nRodando $nome_arquivo.$entrada pela $i vez..."
        if ! perf stat g++ $nome_arquivo.cpp &> $nome_arquivo$under$i.$saida
            then echo "Erro!"
                exit 1
        else 
            echo "Ok"
            
        fi
        
    done

echo -e "\nConcluído!"