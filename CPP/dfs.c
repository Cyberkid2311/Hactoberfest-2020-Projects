#include<stdio.h>
#include<stdlib.h>

typedef struct listnode									// node for queue
{
	int data;
	struct listnode* next;
}listnode;

typedef struct list										//queue
{
	listnode *head;
}list;

typedef struct graph
{
	int vertices;
	list* array;
}graph;

int visited[1000];

graph* creategraph(int n)								//creating graph
{
	int i;
	graph* G=(graph *)(malloc(sizeof(graph)));			
	G->vertices = n;
	
	G->array = (list *)malloc(n * sizeof(struct list));
	
	for(i=0; i<n; i++)
		G->array[i].head = NULL;						//vertex = null
	return G;
}

void addedge(graph* G, int src, int dest)
{
	listnode* newnode;
	newnode=(listnode *)(malloc(sizeof(listnode)));
	newnode->data=dest;
	newnode->next=G->array[src].head;					//creating edges
	G->array[src].head=newnode;
}

void traverse(graph* G, int n)
{
	graph* temp=G;
	int i;
	list* temp_list;
	listnode* temp_node;
	for(i=0; i<n; i++)
	{
		temp_node=temp->array[i].head;					
		while(temp_node!=NULL)
		{
			temp_node=temp_node->next;			
		}
		printf("\n");
	}
	return;
}

void dfs(graph* G, int v)
{
	int i, j;
	printf("%d ", v);
	visited[v]=1;
	listnode* temp_node=G->array[v].head;
	while(temp_node!=NULL)
	{
		if(!visited[temp_node->data])						//run while temp-node->data is not visited
		{
			dfs(G,temp_node->data);							
		}
			
		temp_node=temp_node->next;							//move to next 
	}
	return;
}

int main()
{
	int n, i, j, k, temp, m, a, b;
	printf("Enter the number of nodes : ");
	scanf("%d", &n);
	printf("Enter the number of edges : ");
	scanf("%d", &m);
	printf("Enter the edges : "); printf("\n");
	int ini=n+1;
	graph* G=creategraph(n+1);									//creating graph
	for(i=0;i<m;i++)
	{
		scanf("%d", &a); scanf("%d", &b);
		addedge(G,a,b);
		if(a<ini)
			ini=a;
	}
	traverse(G,n);

	printf("DFS traversal starting with %d : ", ini);printf("\n");
	dfs(G,ini);
	printf("\n");
	return 0;
}

