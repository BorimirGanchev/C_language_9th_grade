#include <stdio.h>
#include <string.h>
#include "processes.h"

extern Process processes[PROCESSES_LENGTH];


static void handleCreateProcess()
{
    char processName[MAX_NAME_LEN];

    printf("Enter the name of the process:\n");
    scanf("%s", &processName);

    int Id = createProcess(processName);

    if (Id == 0)
    {
        printf("Error\n");
        return;
    }

}
static void printProcess(Process process)
{
    if (process.id == 0)
        return;

    printf("ID: %d\n", process.id);
    printf("Name: %s\n\n", process.name);
}

static void handleKillProcess()
{
    int id;

    printf("Input process ID: ");
    scanf("%d", &id);

    int remove = killProcess(id);

    if (remove)
        printf("\nRemoved.\n");
    else
        printf("\nFailed\n");
}
static void getOperationInput(int *operation)
{
    printf("\n\n");

    printf("Please select an operation:\n");
    printf("1. Create\n");
    printf("2. List\n");
    printf("3. Remove\n");
    printf("4. Quit\n");

    printf("> ");

    scanf("%d", operation);

    printf("\n");
}

static void handleListProcesses()
{
    for (int i = 0; i < PROCESSES_LENGTH; i++)
        printProcess(processes[i]);
}

static int handleOperation(int *operation)
{
    switch (*operation)
    {
    case 1:
        handleCreateProcess();
        break;

    case 2:
        handleListProcesses();
        break;

    case 3:
        handleKillProcess();
        break;

    case 4:
        return 1;
        break;

    default:
        printf("Invalid input. Please try again.\n");
        getOperationInput(operation);
    }

    return 0;
}

int main()
{
    int operation;

    while (1)
    {
        getOperationInput(&operation);
        int shouldBreak = handleOperation(&operation);

        if (shouldBreak)
            break;
    }
    return 0;
}