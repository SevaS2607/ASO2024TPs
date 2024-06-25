#!/bin/bash
numero_secreto=$((RANDOM % 100 + 1))

advinar(){
    echo "Adivina un numero (entre 1 y 100):"
    while true; do
    read intento
    if [[ $intento -lt $numero_secreto ]]; then
        echo "Demasiado Bajo. Intenta de nuevo:"
    elif [[ $intento -gt $numero_secreto ]]; then
        echo "Demasiado Alto. Intenta de nuevo:"
    else
        echo "MUY BIEN!! Adivinaste el numero: $numero_secreto"
    break
    fi
    done
}
advinar