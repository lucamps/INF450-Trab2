#!/bin/bash

entrada="mp3"
saida="wav"
echo "Script para automatizar os testes das caches L1 e L3"
echo "Convertendo $entrada para $saida"

echo "Insira o nome do arquivo a ser convertido: " 
read nome_arquivo

under="_"

for i in {1..5};
    do  
        echo "Executando o $i passo do loop..."
        if ! perf stat -e L1-dcache-loads,L1-dcache-load-misses,LLC-loads,LLC-loads-misses ffmpeg -i $nome_arquivo.$entrada $nome_arquivo.$saida &> $nome_arquivo$under$i.txt
            then echo "Erro!"
                exit 1
        else 
            echo "Removendo $nome_arquivo.$saida para liberar o proximo passo"
            rm $nome_arquivo.$saida
        fi
        #echo “$i”
    done

echo "Concluído!"