#include <unistd.h>
#include <sys/types.h>
#include <stadio.h>
#include <sys/wait.h>

int main( ){
    pid_t child_pid;

    child_pid = fork (); //Crea nuevo proceso hijo

    if (child_pid < 0) {
        printf("FALLO EL FORK!  ")

        return 1;
    }
    else if (child_pid == 0 ) {
        printf ("ME ACABAN DE CREAR, SOY UN PROCESO HIJO!, MI PROCESS ID ES = %d, Y EL DE MI PADRE ES = %d\n", get pid(), getppid());
    }
    else{
        wait(NULL); //Bloquea al padre hasta que todos los hijos finalicen

        printf ("SOY EL PROCESO PADRE !")
        printf ("MI PROCESS ID ES = %d, Y EL DE MI PADRE = %d, Y EL DE MI HIJO RECIEN CREADO = %d\n", getpid(), getppid(), child_pid)
    }

 sleep(10);

 return 0;
}