#!/bin/bash
# Gera um vetor de tamanho 5 com números aleatórios entre 0 e 99
echo 5 > test1-vetor.in
for i in {1..5}; do
    echo -n "$(( RANDOM % 100 )) " >> test1-vetor.in
done
echo "" >> test1-vetor.in
echo "Arquivo test1-vetor.in gerado com sucesso!"
