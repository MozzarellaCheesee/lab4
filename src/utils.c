#include "../include/utils.h"

void clear() {
#ifdef _WIN32
    system("cls"); //win
#else
    system("clear"); //unix
#endif
}