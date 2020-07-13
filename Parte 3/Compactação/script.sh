#!/bin/bash

entrada="txt"
saida="zip"
echo "Script para automatizar os testes das caches L1 e L3"
echo "Compactando $entrada para $saida"

echo "Insira o nome do arquivo a ser convertido: " 
read nome_arquivo

under="_"

for i in {1..5};
    do  
        echo -e "\nCompactando $nome_arquivo$entrada em $saida pela $i vez..."
        if ! perf stat -e L1-dcache-loads,L1-dcache-load-misses,LLC-loads,LLC-loads-misses zip $nome_arquivo.$saida $nome_arquivo.$entrada &> $nome_arquivo$under$i.txt
            then echo "Erro!"
                exit 1
        else 
            echo "Removendo $nome_arquivo.$saida para liberar o proximo passo"
            rm $nome_arquivo.$saida
        fi
        #echo “$i”
    done

echo -e "\nConcluído!"