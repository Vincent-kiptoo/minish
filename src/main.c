#include <stdio.h>
#include <string.h>

#define INPUT_SIZE 1024

void print_prompt(void)
{
    printf("minish$ ");
}

int read_command(char *command, size_t size)
{
    if (fgets(command, size, stdin) == NULL)
    {
        return 0;
    }

    command[strcspn(command, "\n")] = '\0';

    return 1;
}

int process_command(const char *command)
{
    if (strcmp(command, "exit") == 0)
    {
        return 0;
    }

    printf("You entered: %s\n", command);

    return 1;
}

int main(void)
{
    char command[INPUT_SIZE];
    int running = 1;

    while (running)
    {
        print_prompt();

        if (!read_command(command, sizeof(command)))
        {
            break;
        }

        running = process_command(command);
    }

    return 0;
}