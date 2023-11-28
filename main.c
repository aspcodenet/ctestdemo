#include <stdio.h>
#include <stdbool.h>
#include <time.h>

void test(void);
void test3(void);
int main();

void test(void) {
    // cppcheck-suppress unreadVariable
    int t2 = 0; 
    int arr[100];
    for(int i = 0; i < 100; i++){
        arr[i] = 0;//cppcheck-suppress unreadVariable
    }
}

//cppcheck-suppress unusedFunction
// denna funktion används från blabla.c och måste därför finnas
void test3(void){
    //cppcheck-suppress [misra-c2012-21.3]
    int *a = (int *)malloc(10*sizeof(int));
    free(a);
}

// NÄR NI ÄNDRAR KOD -> måste skapa dump
// "c:\Program Files\Cppcheck\cppcheck.exe" --inline-suppr --enable=all --template "{file}({line}): {severity} ({id}): {message}" --dump  main.c 
// dump -> misra



// int c ;
// void test3(){

// }


//cppcheck-suppress [misra-c2012-8.2] 
int main(){ 
    test();
//     printf("Tjena moss\n");
//     (void)printf("Tjena moss\n");
    

//     int c; // int = 4 bytes
//     c = 12;
//     test3(c);

//     // i C 
//     const int *massaTal = (int *)malloc(100*sizeof(int));
//    test();
//     free(massaTal);
//     return 0;
}