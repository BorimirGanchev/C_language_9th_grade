mystrings.exe: mystrings.c 
	gcc mystrings.c -o mystrings.exe 

maths.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o

clean:
	del *.o *.exe