//Main
#include"Declaration.h"
#include"Menu.h"
#include"CreateFile.h"
//#include"ShowFile.h"
int main() {
    menu();
    scanf("%d",&ch);
    switch(ch) {
        case 1:NewFile();
        //case 2:PrevFile();
        case 3:exit(0);
        default:printf("Invalid Choice\n");
    }
    return 0;
}