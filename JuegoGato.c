#include <stdio.h>
#include <conio.h>

int i,j,ganador;
void imprimir_gato(char gato[3][3])
{
	printf("\n\n\n\t   1\t   2\t   3");
	printf("\n\t_______________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t|  %c  |",gato[i][j]);
		}
		printf("\n\t_______________________\n");
	}
	
}
void quien_gana(char gato[3][3])
{
	ganador=0;
	if(gato[0][0]=='X'&&gato[0][1]=='X'&&gato[0][2]=='X'){ganador=1;}
	if(gato[1][0]=='X'&&gato[1][1]=='X'&&gato[1][2]=='X'){ganador=1;}
	if(gato[2][0]=='X'&&gato[2][1]=='X'&&gato[2][2]=='X'){ganador=1;}
	if(gato[0][0]=='X'&&gato[1][0]=='X'&&gato[2][0]=='X'){ganador=1;}
	if(gato[0][1]=='X'&&gato[1][1]=='X'&&gato[2][1]=='X'){ganador=1;}
	if(gato[0][2]=='X'&&gato[1][2]=='X'&&gato[2][2]=='X'){ganador=1;}
	if(gato[0][0]=='X'&&gato[1][1]=='X'&&gato[2][2]=='X'){ganador=1;}
	if(gato[2][0]=='X'&&gato[1][1]=='X'&&gato[0][2]=='X'){ganador=1;}
	
	if(gato[0][0]=='O'&&gato[0][1]=='O'&&gato[0][2]=='O'){ganador=2;}
	if(gato[1][0]=='O'&&gato[1][1]=='O'&&gato[1][2]=='O'){ganador=2;}
	if(gato[2][0]=='O'&&gato[2][1]=='O'&&gato[2][2]=='O'){ganador=2;}
	if(gato[0][0]=='O'&&gato[1][0]=='O'&&gato[2][0]=='O'){ganador=2;}
	if(gato[0][1]=='O'&&gato[1][1]=='O'&&gato[2][1]=='O'){ganador=2;}
	if(gato[0][2]=='O'&&gato[1][2]=='O'&&gato[2][2]=='O'){ganador=2;}
	if(gato[0][0]=='O'&&gato[1][1]=='O'&&gato[2][2]=='O'){ganador=2;}
	if(gato[2][0]=='O'&&gato[1][1]=='O'&&gato[0][2]=='O'){ganador=2;}
	
	
	

}

main()
{
	int k=1, fil, col, opcion;
	char gato[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '}; 
	
	do
	{
		imprimir_gato(gato);
		do
		{		
			printf("\nEste es el turno numero %d", k);
			if(k%2 !=0)
			{
				do
				{
					do
					{		
						printf("\nEs turno del jugador 1");
						printf("\nIngrese la coordenada de la casilla (fila y columna):  ");
						scanf("%d",&fil);
						scanf("%d",&col);
						if(fil>3 ||col>3)
						{
							printf("\nError en la coordenada");
						}
					}
					while(fil>3 ||col>3);
				}
				while(gato[fil-1][col-1] !=' ');
				gato[fil-1][col-1]='X';
				imprimir_gato(gato);
				quien_gana(gato);					
			}
			if(k%2==0)
			{
				do
				{
					do
					{
						printf("\nEs turno del jugador 2");
						printf("\nIngrese la coordenada de la casilla (fila y columna): ");
						scanf("%d",&fil);
						scanf("%d",&col);
						if(fil>3 ||col>3)
						{
							printf("\nError en la coordenada");
						}
						
					}
					while(fil>3 ||col>3);
				}
				while(gato[fil-1][col-1] !=' ');
				gato[fil-1][col-1]='O';
				imprimir_gato(gato);
				quien_gana(gato);	
			}
			k=k+1;
			
		}while(k<10 && ganador==0);
		if(ganador==1)
		{
			printf("\nEl ganador jugador  1");
		}
		if(ganador==2)
		{
			printf("\nEl ganador jugador  2");
		}
		if(ganador==0)
		{
			printf("\nESTO ES UN EMPATE!!");
		}
				
		printf("\n¿Les gustaria intentar de nuevo?. Escribe 1 para repetir: ");
		scanf("%d",&opcion);
		k=1;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				gato[i][j]=' ';	
			}
		}
	}
	while(opcion==1);	
	return 0;
}

	
