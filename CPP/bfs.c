#include<stdio.h>
#include<stdlib.h>
 
#define MAX 100  
 
#define initial 1
#define waiting 2
#define visited 3
 
int n;    
int adj[MAX][MAX];
int state[MAX]; 
void create_graph();				//create graph function
void BF_Traversal();				//traverse graph using BFS function
void BFS(int v);
 
int queue[MAX], front = -1,rear = -1;
void enqueue(int vertex);
int dequeue();
int isEmpty_queue();
 
int main()
{
	create_graph();
	BF_Traversal();
	return 0;
}
 
void BF_Traversal()
{
	int v;
	
	for(v=1; v<=n; v++) 
		state[v] = initial;
	
	printf("Enter Start Vertex for BFS: \n");
	scanf("%d", &v);
	BFS(v);
}
 
void BFS(int v)					//insert vertexes in queue
{
	int i;
	
	enqueue(v);
	state[v] = waiting;
	
	while(!isEmpty_queue())
	{
		v = dequeue( );
		printf("%d ",v);
		state[v] = visited;
		
		for(i=1; i<=n; i++)
		{
			if(adj[v][i] == 1 && state[i] == initial) 
			{
				enqueue(i);
				state[i] = waiting;
			}
		}
	}
	printf("\n");
}
 
void enqueue(int vertex)
{
	if(rear == MAX-1)
		printf("Queue Overflow\n");
	else
	{
		if(front == -1) 
			front = 0;
		rear = rear+1;
		queue[rear] = vertex ;
	}
}
 
int isEmpty_queue()
{
	if(front == -1 || front > rear)
		return 1;
	else
		return 0;
}
 
int dequeue()
{
	int delete_item;
	if(front == -1 || front > rear)
	{
		printf("Queue Underflow\n");
		exit(1);
	}
	
	delete_item = queue[front];
	front = front+1;
	return delete_item;
}
 
void create_graph()
{
	int count,max_edge,origin,destin;
 
	printf("Enter number of vertices : ");
	scanf("%d",&n);
	max_edge = n*(n-1);
 
	for(count=1; count<=max_edge; count++)
	{
		printf("Enter edge %d : ",count);
		scanf("%d %d",&origin,&destin);
 
		if((origin == -1) && (destin == -1))
			break;
 
		if(origin>n || destin>n || origin<0 || destin<0)
		{
			printf("Invalid edge!\n");
			count--;
		}
		else
		{
			adj[origin][destin] = 1;
		}
	}
}
