#include<stdio.h>
#include<stdbool.h>
#define N 4

void printSol(int board[N][N])
{
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++)
			printf("%d   ",board[i][j]);
		printf("\n");
			}
		
	printf("\n");
	
}
bool isSafe(int board[N][N],int r,int c)
{
	int i,j;
	
	for(i=0;i<c;i++)
		if(board[r][i])
			return false;
	// check for digonal
	for(i=r,j=c; j>=0 && i<N;j--,i++)
		if(board[i][j])
			return false;
			
	for(i=r,j=c;i>=0 && j>=0;i--,j--)
		if(board[i][j])
			return false;
	return true;
}
bool solveNQ(int board[N][N], int col)
{
	if(col>=N)
		return true;
	
	for(int i=0;i<N;i++)
	{
		//board[i][col]
		if(isSafe(board,i,col))
		{
			board[i][col] = 1;
			
			if(solveNQ(board,col+1))
				return true;
			board[i][col] =0;
		}
		
		
	}
	return false;
	
}
bool solveN()
{
	 int board[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
	printSol(board);
	if (solveNQ(board,0)==false)
	{
		printf("solutution does not exist\n" );
		return false;
	}
	printSol(board);
	return true;
	
}
int main()
{
	solveN();
	return 0;
}

