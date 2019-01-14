#include <stdio.h>
#include <stdlib.h> 
int x, y, x1, y1, n, mov=1;
char ll;
int life=1,pp=0;
void afree(char **map)
{
	int i;
	for(i=0;i<n+2;++i)
	 free(map[i]);
	free(map);
}
void move(char **map)
{
	int ptr=0;
	switch(map[x][y])
	{
		case '*':
		 ptr=1; 
		 if(y==0) if(map[x][n]=='#') {y=y1;ll=map[x][y]; map[x][y]='A';return;} else y1=n;
		 if(y==n+1) if(map[x][1]=='#') {y=y1;ll=map[x][y]; map[x][y]='A';return;} else y1=1; 
		 if(x==0) if(map[n][y]=='#') {x=x1;ll=map[x][y]; map[x][y]='A';return;} else x1=n;
		 if(x==n+1) if(map[1][y]=='#') {x=x1;ll=map[x][y]; map[x][y]='A';return;} else x1=1;
		 break;
		case '#': x = x1;  y = y1; pp=1; ll=map[x][y]; map[x][y]='A';break;
		case '@':mov=0; x1 = x;  y1 = y;map[x][y]='A';break; 
		case '$':life=0; break;	 
		case ' ':map[x][y]='A';x1 = x;  y1 = y;
	}
	 
	if(ptr){
		
		x = x1;  y = y1;
		if(map[x][y]==' ') map[x][y]='A';
		else if(map[x][y]=='@') 
		{
			mov=0;map[x][y]='A';
		}
		else if(map[x][y]=='$') 
		{
			printf("Game Over!\n"); 
			afree(map);
			life=0;
		}
		
	}
	//x = x1;  y = y1;
}
void print(char **map)
{
	int i, j;
	for(i=0;i<n+2;++i)
	{
		for(j=0;j<n+2;++j)
	    printf("%c",map[i][j]);
	    printf("\n");
	}
}
int main()
{
	int i,j;
	char **map;
	scanf("%d",&n);	
	getchar();
	map=(char**)malloc(sizeof(*map)*(n+2));
	for(i=0;i<n+2;++i)
	map[i]= (char*)malloc(sizeof(**map)*(n+2));
	for(i=0;i<n+2;++i)
	{
		for(j=0;j<n+2;++j)
	   {
		 scanf("%c",&map[i][j]);
	   }
	      getchar();
	} //print(map);没问题 
	int ptr=1; 
	for(i = 1;i < n+1&&ptr; ++i)
	 {
	 	for(j = 1;j < n+1; ++j)
	    if(map[i][j]== 'A')
	    {
	  	x = i;y = j;
	  	ptr=0;
	    }
	 }
	  //print(map); 问题：出现了A 
	  x1 = x; y1 = y;
	  char op;
	while(~scanf("%c",&op))
	{
	 
		getchar(); 
		{
		   if(mov)
		   {
		     switch(op)
		     {
			   case 'a':if(map[x][y]!='@')  map[x][y]=' ';y--;if(pp&&map[x][y]!='#') {pp=0; map[x1][y1]=ll;} if(map[x][y]=='$') {printf("Game Over!\n"); afree(map); return 0;}break;
			   case 's':if(map[x][y]!='@')  map[x][y]=' ';x++;if(pp&&map[x][y]!='#') {pp=0; map[x1][y1]=ll;} if(map[x][y]=='$') {printf("Game Over!\n"); afree(map); return 0;}break;
			   case 'd':if(map[x][y]!='@')  map[x][y]=' ';y++;if(pp&&map[x][y]!='#') {pp=0; map[x1][y1]=ll;} if(map[x][y]=='$') {printf("Game Over!\n"); afree(map); return 0;}break;
			   case 'w':if(map[x][y]!='@')  map[x][y]=' ';x--;if(pp&&map[x][y]!='#') {pp=0; map[x1][y1]=ll;} if(map[x][y]=='$') {printf("Game Over!\n"); afree(map); return 0;}break;
		     }
			 //map[x][y]=' ';	
		     move(map); 
		    if(life==0) return 0;
			 print(map);
		   } 
		   else
		   {
			 mov=1; 
			 print(map);
			 map[x][y]='@';	
		   } 
		  
		}
	}
	afree(map);
} 
