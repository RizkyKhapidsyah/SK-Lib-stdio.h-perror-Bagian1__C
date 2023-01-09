#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    FILE* pFile;
    pFile = fopen("unexist.ent", "rb");

    if (pFile == NULL) {
        perror("The following error occurred");
    } else {
        fclose(pFile);
    }
      
    _getch();
    return 0;
}