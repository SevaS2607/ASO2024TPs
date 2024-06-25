#!/bin/bash
echo "Ingresar un nombre para mostrar el genero"
read nombre

genero=$(curl -s https://api.genderize.io/?name=$nombre | jq -r ".gender")
if [[ "$genero" == "male" ]]; then
    echo "$nombre: Hombre"
else echo "$nombre: Mujer" 
fi