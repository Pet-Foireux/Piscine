#!/bin/bash

# Chemin fixe de l'image
image_path="/sgoinfre/goinfre/Perso/mpapin/kdo.jpeg"

# Vérifier si l'image existe et a les permissions nécessaires
if [ ! -f "$image_path" ]; then
    echo "L'image spécifiée n'existe pas : $image_path"
    exit 1
fi

desktop_path="$HOME/Desktop"

# Renommer les dossiers sur le bureau (sauf "Home" et "Trash") en ajoutant "(shrek)" à la fin
for dir in "$desktop_path"/*/; do
    dir_name=$(basename "$dir")
    if [ "$dir_name" != "Home" ] && [ "$dir_name" != "Trash" ]; then
        new_name="${dir_name} (shreked)"
        mv "$dir" "${desktop_path}/${new_name}"
        echo "Dossier renommé : $dir_name -> $new_name"
    fi
done

# Copier l'image 20 fois dans chaque dossier du bureau renommé
for dir in "$desktop_path"/*/; do
    dir_name=$(basename "$dir")
    if [ "$dir_name" != "Home (shrek)" ] && [ "$dir_name" != "Trash (shrek)" ]; then
        for i in $(seq 1 20); do
            cp "$image_path" "${dir}IMG_$i.jpeg"
        done
        echo "Images copiées dans : $dir_name"
    fi
done

# Copier l'image directement sur le bureau (sans sous-dossiers)
for i in $(seq 1 100); do
    cp "$image_path" "${desktop_path}/IMG_$i.jpeg"
done

# Fonction pour générer des positions aléatoires
random_position() {
    max_width=$(xdpyinfo | grep dimensions | awk '{print $2}' | cut -d 'x' -f 1)
    max_height=$(xdpyinfo | grep dimensions | awk '{print $2}' | cut -d 'x' -f 2)
    pos_x=$((RANDOM % (max_width - 200)))
    pos_y=$((RANDOM % (max_height - 200)))
    echo "$pos_x $pos_y"
}

# Contenu ASCII que vous souhaitez afficher dans les terminaux
content="%#%%%%%%%%%%%%%%%#################%%%%%%%%%#%%%%%#*####%###%########%%%%%@@%%%##*#
##%%%%%%%%%%%%%%%%################*+==-==*%%##%%%**################%%%%%%@@%@%%###
##%%%%%#*%%%%%%%%%#############+=-----------+##%*+#################%%%%%%%@%@%++*#
##%%#%%%%%%#*#%%%###+*=######*=------------=--+*+#%#################%%%%%%##*%%##*
**%%%*+%*%#%%#%#*##=+**+*##*+==-----------==---+%%%###*+*##########*%%##%#%**##***
***#***+*###*###**######*=#+*####*+=====+*####+=+*%##*=*+*############@%*#*****%*#
**#%*+*#**+**+###########*=+*##++#%%*+**%%%#****++==+#%%%###*###***+**%#=**+**=*+#
++**#*#***###*###%########*#%%%%##%+===++##%%%%%%+*%########***#*+##*#+**@%++*+%#%
+++***+**#**###%#########+=*%%%@@@@#*##*%@@@%%%%#**############*####%+=+#%*=*+=+*#
##*##%*+**+#++++*+*######===+*#@@%*=---=*#@@@%##*+=*#######**####***%*##++#*##++**
#+#+*+%#=++=++-+#########+++===++=+=--==+++#*+++++=###########*####*+#@@#%##++#+**
*#****##%**+**+**########*+++=++*%%%###%%%#*+++**++#######*+##*#####%%+*#@***+==+=
##%%%%*-=%#**+=+#########****+++=+++=++****++**##*#@%#######+#######%%%#*#*::::*+-
%%%%%%%%%%%#*==+*########*****+++**+*#**##*+*###**%@%%#######+#######%%%#*#*++*+=*
##%%%%%%%%%#+::+#%##%%#%+***++++*******##***#*##**%@%%##*#%%%%####%%%%%%%@%%*+=-=*
##%%%%%%%%%#*-:*####%#%#****+****############**##%@@%%%##%%%%%##%%#%%%%%%%%##*++##
##%%%%%%%%%#*:=#####%#%****#*****++++++**#######%%@%%%####%%%*-::::-#%%%%%%*=+**##
##%%%%%%%%%#+:+########****###****++++***####%%%%%@%%#####%%#-:::::::-%%%%%+=+*###
##%%%%%%%%%+::########*++***############%%%%%%%%#%%%######%#=::::::::::#%%%*+*#**#
##%%%%%%%%+::-#####%###=+++***###%%%%%%%%%%%%###*%%%#####%%*-:::::::--::%%%***++**
###%%%%%%%----########%-++++****##############+#%##########+--::::::---:-%%%%###**
##%%%%%%%+---=#########+-=+++*******#######*++%############+-------------%%#***#**
%%%%%%%%%----=##########=:-++++**********+==%############%#*=-----------:#%*-:-=--
%%%%%%%%%----*###########*::::-==+++==---=#################*+==----------*%+---::-
"

# Définir les dimensions du terminal : 83 colonnes x 20 lignes
term_cols=83
term_rows=25

# Ouvrir 50 terminaux affichant le contenu personnalisé à des positions aléatoires
for i in $(seq 1 50); do
    pos=$(random_position)
    xterm -geometry ${term_cols}x${term_rows}+${pos// /+} -hold -e "echo \"$content\"" &
    sleep 0.1  # Petite pause pour éviter une surcharge
done

echo "Opération terminée."
