all: quadriticroots.o main.exe

quadriticroots.o:
	gcc -c quadriticroots.c -o quadriticroots.o
main.exe:quadriticroots.o
	gcc main.c quadriticroots.o -D__USE_MINGW_ANSI_STDIO -o main.exe
clean: 
	del *.o *.exe