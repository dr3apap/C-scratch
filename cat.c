#include <unistd.h>
#include <fcntl.h>


#define BUFFER_SIZE 80
char buffer[BUFFER_SIZE];

int main()
{
    ssize_t len;
   while ((len =  read(STDIN_FILENO, buffer, BUFFER_SIZE))){;
   write(STDOUT_FILENO, buffer, len);

   }
    
}
