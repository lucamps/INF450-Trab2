#!/bin/bash

entrada="txt"
saida="txt"
echo "Script para automatizar os testes das caches L1 e L3"
echo "Ordenando caracteres dos arquivos de texto"

echo -e "\nInsira o nome do arquivo a ser ordenado: " 
read nome_arquivo

under="_"

for i in {1..5};
    do  
        echo -e "\nOrdenando $nome_arquivo.$entrada pela $i vez..."
        if ! perf stat -e L1-dcache-loads,L1-dcache-load-misses,LLC-loads,LLC-loads-misses ./a.out < $nome_arquivo.$entrada &> $nome_arquivo$under$i.txt
            then echo "Erro!"
                exit 1
        else 
            echo "Removendo out.txt para liberar o proximo passo"
            rm out.txt
        fi
        #echo “$i”
    done

echo -e "\nConcluído!"