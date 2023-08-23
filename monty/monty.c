#include <monty.h>

int main(int argc,char *argv[])
{
    if (argc !=2) 
    {
        fprintf(stderr," USAGE: monty file\n");
        exit(EXIT_FAILURE);

    }
    char *filepath * argv[1];

    FILE *file = fopen(filepath, "r");

    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file" );
        exit(EXIT_FAILURE);
    }

    char *buffer_line = NULL;
    size_t len = 0;
    int line_number = 0;
    

    while(getline(buffer_line, &len, file) != -1)
    {
       line_number++;
       char *opcode = strtok(&buffer_line, "\t\n");
       
       if (opcode == NULL || strlen(opcode)== o)
       {
          continue;
       }
       fprintf(stderr, "L%d: unknown instruction %s\n", line number, opcode;)
        exit(EXIT_FAILURE);
    }
    free(buffer_line);
    fclose(file)
    exit(EXIT_FAILURE
    return(0);
}
