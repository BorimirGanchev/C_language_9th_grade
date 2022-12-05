#include <stdio.h>
#include <stdlib.h>
int isPath(int maze[5][5],int i,int j,int rows,int colums);
int main(void)
{
    int mass[5][5]={{0,1,1,1,1},
                    {0,0,1,1,1},
                    {1,0,0,1,1},
                    {1,1,0,0,1},
                    {1,1,1,0,0}},i = 0,j = 0,rows = 5, colums = 5,result=0;

    result=isPath(mass,i,j,rows,colums);
    if(result == 1)
        printf("There is path.");
    else
        printf("There is no path.");
}
int isPath(int maze[5][5],int i,int j,int rows,int colums)
{
    //проверява дали си на най-долното поле (правилното)
    if(i==rows-1 && j==colums-1)return 1;
    //проверява дали си извън полето
    if(i<0 || j<0 || i>=rows || j>=colums)return 0;
    //проверява дали е единица
    if(maze[i][j] == 1)return 0;
    //това прави полето от нула на единица
    maze[i][j] = 1;


    int up=isPath(maze,i-1,j,5,5);
    int down=isPath(maze,i+1,j,5,5);
    int left=isPath(maze,i,j-1,5,5);
    int right=isPath(maze,i,j+1,5,5);

    return up || down || left || right;
}