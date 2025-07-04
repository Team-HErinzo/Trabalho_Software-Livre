#!/bin/bash
# Gera um número aleatório entre 1 e 100 e salva em test1-primo.in
echo $(( RANDOM % 100 + 1 )) > test1-primo.in
echo "Arquivo test1-primo.in gerado com sucesso!"
