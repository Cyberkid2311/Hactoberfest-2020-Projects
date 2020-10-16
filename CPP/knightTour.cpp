#include <iostream>
#include <cstring>
using namespace std;
int count=0; 

#define N 5
// Below arrays details all 8 possible movements for a knight.

int row[] = { 2, 1, -1, -2, -2, -1, 1, 2 , 2 };
int col[] = { 1, 2, 2, 1, -1, -2, -2, -1, 1 };

// Check if (x, y) is valid chess board coordinates

bool isValid(int x, int y)
{
	if (x < 0 || y < 0 || x >= N || y >= N)
	return false;
	return true;
}

// Recursive function to perform the Knight's tour using backtracking 

void KnightTour(int visited[N][N], int x, int y, int pos)
{
	visited[x][y] = pos;
	// if all squares are visited, print the solution
	if (pos >= N*N )
	{
		for (int i = 0; i < N; i++)
		{
			if(count == 1)
			{
				for (int j = 0; j < N; j++)
				cout << visited[i][j] << " "; 
	
			cout << endl;
			}
		}
		// cout << endl;
		// backtrack before returning
		visited[x][y] = 0;
		count=count + 1;
		return;
	}
	// check for all 8 possible movements for a knight
	for (int k = 0; k < 8; k++)
	{
		// Get the new position of Knight from current
		// position on chessboard
		int newX = x + row[k];
		int newY = y + col[k];
		// if new position is a valid and not visited yet
		if (isValid(newX, newY) && !visited[newX][newY])
			KnightTour(visited, newX, newY, pos + 1);
	}
	// backtrack from current square and remove it from current path
	visited[x][y] = 0;
}

	// Print all Possible Knight's Tours in a chessboard
int main()
{ 
	// visited[][] serves two purpose -
	// 1. It keep track of squares involved the Knight's tour.
	// 2. It stores the order in which the squares are visited
	
	int visited[N][N];
	// initialize visited[][] by 0 (unvisited)
	
	memset(visited, 0, sizeof visited);
	int pos = 1;
	// start knight tour from square (m, n)
	int m,n;
	cout<<"Enter the starting position of the knight(m , n) :\n";
	cin>>m>>n;
	
	KnightTour(visited, m, n, pos);
	cout<< "Total no. of Solutions are :"<<count;
	return 0;
}	 
