#include <stdio.h>
#include <ctype.h>


void print_grid(char arr[5][5]){
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("\'%c", arr[i][j]);
		}
		printf("\n");
	}

}



int main(){
	char grid[5][5] = {
			  {' ', ' ', 'I', 'X', ' '},
			  {' ', 'X', ' ', ' ', ' '},
			  {'I', ' ', 'X', 'X', ' '},
			  {' ', ' ', ' ', 'I', 'X'},
			  {' ', 'X', ' ', ' ', 'P'}
			  };

	char userinp;
	int player_posx = 4;
        int player_posy = 4;
	int want_to_exit = 0;

	print_grid(grid);

	while(want_to_exit == 0){

		printf("Press W for up, S for down, A for left, D for right, Q for quit\n");
		printf("Enter your letter: ");
		scanf(" %c", &userinp);
		userinp = toupper(userinp);
		switch(userinp){

			case 'W':
				printf("Going up\n");
				grid[player_posy][player_posx] = ' ';
				player_posy--;
				if (grid[player_posy][player_posx] == 'X') player_posy++;
				if (player_posy > 4) player_posy = 4;

				printf("Player_posy: %d\n", player_posy);
				grid[player_posy][player_posx] = 'P';
				print_grid(grid);
				break;
			case 'S':
				printf("Going down\n");
				grid[player_posy][player_posx] = ' ';
				player_posy++;
				if (grid[player_posy][player_posx] == 'X') player_posy--;

				if (player_posy < 0) player_posy = 0;

				printf("Player_posy: %d\n", player_posy);
				grid[player_posy][player_posx] = 'P';
				print_grid(grid);
				break;
			case 'D':
				printf("Going right\n");
				grid[player_posy][player_posx] = ' ';
				player_posx++;
				if (grid[player_posy][player_posx] == 'X') player_posx--;
				if (player_posx > 4) player_posx = 4;

				printf("Player_posx: %d\n", player_posx);
				grid[player_posy][player_posx] = 'P';
				print_grid(grid);
				break;
			case 'A':
				printf("Going left\n");
				grid[player_posy][player_posx] = ' ';
				player_posx--;
				if (grid[player_posy][player_posx] == 'X') player_posx++;

				if (player_posx < 0) player_posx = 0;

				printf("Player_posx: %d\n", player_posx);
				grid[player_posy][player_posx] = 'P';
				print_grid(grid);
				break;
			case 'Q':
				want_to_exit = 1;
				break;
			default:
				break;
		}

		

	}




	return 0;
}