#include "super_calculator_zh.h"

#define ESC 27

void options(){
    system("cls");
    cout << "Options:\nerror";
    char key = 1;
    while(key != ESC){
        key = getch();
    }
}
