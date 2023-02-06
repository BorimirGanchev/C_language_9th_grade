all: taskmanager.exe

processes.o: processes.c processes.h
    gcc -c processes.c

taskManager.exe: taskmanager.c processes.o
    gcc -o taskmanager.exe taskmanager.c processes.o

clean:
    del *.o
    del *.exe
