#include <string.h>
#include <limits.h>
#include "processes.h"

int count = 0;

static int generateProcessId()
{
    static int nextId = 1;

    if (nextId == INT_MAX)
        return 0;

    return nextId++;
}

int createProcess(char processName[MAX_NAME_LEN])
{
    int id = generateProcessId();

    Process newProcess;
    newProcess.id = id;
    strcpy(newProcess.name, processName);

    if (count >= 5)
        return 0;

    processes[count++] = newProcess;

    return id;
}

static void pushEmptyProcessesToEnd()
{
    int j = 0;

    for (int i = 0; i < PROCESSES_LENGTH; i++)
    {
        if (processes[i].id != 0)
        {
            Process temp = processes[i];
            processes[i] = processes[j];
            processes[j++] = temp;
        }
    }
}

int killProcess(int processId)
{
    int found = 0;

    for (int i = 0; i < PROCESSES_LENGTH; i++)
        if (processes[i].id == processId)
        {
            processes[i].id = 0;
            count--;
            found = 1;
        }
    if (found == 1)
    {
        pushEmptyProcessesToEnd();
        return 1;
    }
    else
        return 0;
}