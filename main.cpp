#include <cstdlib>
#include <unistd.h>
#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char *argv[]){
    cout<<"Hello world\n";

    write(STDOUT_FILENO, "Ciao\n", 5);

    if (fork() == -1)
       {
           exit(EXIT_FAILURE);
       }
    exit(EXIT_SUCCESS);
}
