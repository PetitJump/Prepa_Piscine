/// Ecrit une fonction qui parcours un repertoire donné en argument
#include <stdio.h>
#include <dirent.h>

void read_dir(char* repertoire)
{
    DIR *dossier = opendir(repertoire);
    while(1){
        struct dirent *dir = readdir(dossier);
        if(dir == NULL)
            break;
        printf("%s\n", dir->d_name);
    }
    closedir(dossier);
}