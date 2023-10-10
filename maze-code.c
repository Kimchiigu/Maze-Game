#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

// Function Declarations
void mainMenu();
void difficultyMenu();
void menuExit();
void playEasyGame();
void playMediumGame();
void playHardGame();
void displayMap(char map[20][100], int rows, int cols);
int rows = 20, cols = 100;

int main() {
    mainMenu();
    char input = _getch();
    system("cls");
	
	char command;
    while (1) {
	    difficultyMenu();
	    printf("Choose your difficulty: ");
	    scanf(" %c", &command);  
	    getchar();
	    
	    if (command == '1' || command == '2' || command == '3') {
	        system("cls");
	        break;  
	    } else {
	        system("cls");
	    }
	}

    switch(command) {
        case '1':
            playEasyGame();
            break;
        case '2':
            playMediumGame();
            break;
        case '3':
            playHardGame();
            break;
    }
	
	system("cls");
	menuExit();
    char exit = _getch();
    
    return 0;
}

void mainMenu() {
    printf(" _      ____ ____  ____ ____  ____ ____  ______ __ __\n");
	printf("| |    /    |    \\|    |    \\|    |    \\|      |  |  |\n");
	printf("| |   |  o  |  o  )|  ||  D  )|  ||  _  |      |  |  |\n");
	printf("| |___|     |     ||  ||    / |  ||  |  |_|  |_|  _  |\n");
	printf("|     |  _  |  O  ||  ||    \\ |  ||  |  | |  | |  |  |\n");
	printf("|     |  |  |     ||  ||  .  \\|  ||  |  | |  | |  |  |\n");
	printf("|_____|__|__|_____|____|__|\\_|____|__|__| |__| |__|__|\n");
	printf("_--___-^_^-_--__^-_--__^-_--____-^_^-_-^_^-_---__^--__-\n\n");
	
	printf("Welcome to labIRinth!\n\n");
	
	printf("One day, you wake up in a cursed labyrinth and want to escape.\n");
	printf("But, you realize that it might not be that easy.\n");
	printf("As you look around, you realize that there are mummies roaming the place.\n");
	printf("Try to get to the exit without getting caught by the mummies.\n");
	printf("Good luck and have fun!\n\n");
	
	printf("Press any key to continue...");
}

void difficultyMenu() {
    printf(" _      ____ ____  ____ ____  ____ ____  ______ __ __\n");
	printf("| |    /    |    \\|    |    \\|    |    \\|      |  |  |\n");
	printf("| |   |  o  |  o  )|  ||  D  )|  ||  _  |      |  |  |\n");
	printf("| |___|     |     ||  ||    / |  ||  |  |_|  |_|  _  |\n");
	printf("|     |  _  |  O  ||  ||    \\ |  ||  |  | |  | |  |  |\n");
	printf("|     |  |  |     ||  ||  .  \\|  ||  |  | |  | |  |  |\n");
	printf("|_____|__|__|_____|____|__|\\_|____|__|__| |__| |__|__|\n");
	printf("_--___-^_^-_--__^-_--__^-_--____-^_^-_-^_^-_---__^--__-\n\n");
	
	printf("Difficulty Level\n");
    printf("____________________\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
}

void menuExit() {
    printf("                            .:^:.. ..^^:..\n");
    printf("                          ...   ...:.     .......    .\n");
    printf("                            .   . ^.   :..:~~77~~~::..::.. ..\n");
    printf("                          ::::..~..:..:~7~.: :^ ~^:~..:....:^~^:^~^\n");
    printf("                        ..      .. .^!777^~~!?~^~7:^::.  .5BGB##&#7.\n");
    printf("                             .:~!!. .:~^.77?P57P7!^::~::?5B&&#GGG5.\n");
    printf("                          .:^~~^^: YJJGBGP5YY7J7!^^^?7YG##P7^7#&B~:\n");
    printf("                        .^~~:  ~J55PJ~:.       ..~JPBBBY^. .:.JG!:!!^..\n");
    printf("                     ..^7~  .::???.         .~!JG&&#J:       .7!:.^77?!^..\n");
    printf("                   .:~7!:. ^Y^.  ..      .!JPB&&#Y:          .  :7!: ~G5?!:.\n");
    printf("                 .:~7?7..~!!       .:..^?YP&&&G7         .        ~J: .BP7J!:.\n");
    printf("               .:^777~^::7^          :JB&&#BG^ .                   .J! !YYYJ?^~!^.\n");
    printf("              .:!JJJJ: :7G.         ?#&&&&B~                         ?5..^!~~!!:.\n");
    printf("             .:!YYY5~ .J&Y      . .5BBBBBG^                           YP  :?J!~!^.\n");
    printf("             .:!J?YJ^..P&!        P&&&&&#!             ..              #7 .^55?^~:.\n");
    printf("              .^7!??^..P#? .  .   ~#&&&&&J:..   ...  .   ..  ...     . 5#..:J57~!:.\n");
    printf("              .:!J~~^.?G#5      .:.^JGBBBP5Y!^75GBGP5PJYPGPP5YYJ?!^    !&:.:??~?~:.\n");
    printf("               .^?5^:.JPBP!       .:::.. .!YYY&&&###&&&&YG##&&&&#B5:   !&:.^~!5J~.\n");
    printf("                .^??:.^^?77..                 ^:.  ..P&G:^&&&&&&&&7    PG ~7:JP7:.\n");
    printf("                .:^7? .~~J?7!                 .      7#^ P&&&&&&G^    :&^ 7?5?!:.\n");
    printf("                  .^J5.:!JPBBY            .:.       ^5^ 7###&#P^      G7..7G5!:.  \n");
    printf("                   .^?5~^~:~PBP~.?!~: ^^7~^!^     .7: ~#&&#5~        ~~:.:PY~:.\n");
    printf("                    .^!5J7..~!B&PJY?J^J?YGY?7!:..^^:?#@&G7.        .~.::^Y!^.\n");
    printf("                     .:^??J!77JY57 .: :?#BYGG!7~:7G&#5~.           ... ^?Y57:.\n");
    printf("                       .:~?JY~..... :.^!J^^!7~7PGPJ~.          ... ^?Y57:.\n");
    printf("                          :~75P~:.  ^^!!^~!JYJ57:..^^....:^!:  ...5GP7^.\n");
    printf("                          ::.:~^7.JY^?77Y5Y7^..::~??5J???5J: :?Y!J5!:.  \n");
    printf("                           .  .^.7G&###B5!^:.:.::......~?J?YB#BY7^:.\n");
    printf("                              .^^YJ5###BG5J7!7JYPPGYJ??YPPPY?7~:.\n");
    printf("                              ..:^~^^........^~!~!!!!~^^::...\n\n\n");
    printf("\t\t\to---------------------------------------------o\n");
    printf("\t\t\t|      Breaking and Overcoming Challenges     |\n");
    printf("\t\t\t|    Through Courage Hardwork and Persistence |\n");
    printf("\t\t\t|           ~~ Bluejackets 23-1 ~~            |\n");
    printf("\t\t\to---------------------------------------------o\n");
    printf("\t\t\t\t     Press any key to exit...");
}

void winDisplay(){
	printf(" __      __ __   ___   __ __      __    __  ____  ____       __\n");
	printf("|  |    |  |  | /   \\ |  |  |    |  |__|  ||    ||    \\     |  |\n");
	printf("|  |    |  |  ||     ||  |  |    |  |  |  | |  | |  _  |    |  |\n");
	printf("|__|    |  ~  ||  O  ||  |  |    |  |  |  | |  | |  |  |    |__|\n");
	printf(" __     |___, ||     ||  :  |    |  `  '  | |  | |  |  |     __\n");
	printf("|  |    |     ||     ||     |     \\      /  |  | |  |  |    |  |\n");
	printf("|__|    |____/  \\___/  \\__,_|      \\_/\\_/  |____||__|__|    |__|\n");
	
	Sleep(2000);
}

void loseDisplay(){
	printf(" __      __ __   ___   __ __      _       ___    _____ ______      __\n");
	printf("|  |    |  |  | /   \\ |  |  |    | |     /   \\  / ___/|      |    |  |\n");
	printf("|  |    |  |  ||     ||  |  |    | |    |     |(   \\_ |      |    |  |\n");
	printf("|__|    |  ~  ||  O  ||  |  |    | |___ |  O  | \\__  ||_|  |_|    |__|\n");
	printf(" __     |___, ||     ||  :  |    |     ||     | /  \\ |  |  |       __\n");
	printf("|  |    |     ||     ||     |    |     ||     | \\    |  |  |      |  |\n");
	printf("|__|    |____/  \\___/  \\__,_|    |_____| \\___/   \\___|  |__|      |__|\n");
	
	Sleep(2000);
}

int randomDirection() {
    return rand() % 2;
}

void playEasyGame() {
    char map[20][100] = {
        "######################################",
        "#                                    #",
        "#  P        #                        #",
        "#           #   l                    #",
        "#           #                        #",
        "#           # ######                 #   W  S  A  D   to  move",
        "#                                    #",
        "#                                    #",
        "#      # ######                   l  #   LEGENDS",
        "#      #                             #   ------------------------------",
        "#      #                     ###     #   P  player",
        "#      #                     ###     #   l  mummy",
        "#                            ###     #   o  escape",
        "#  l                                 #",
        "#                ####                #",
        "#                #  #                #   Press ENTER to exit",
        "#                ####              O #",
        "#                                    #",
        "######################################"
    };

    int reachedExit = 0;
    int playerX = 3, playerY = 2;
    int mummyPositions[10][2] = {{16, 3}, {34, 8}, {3, 13}};
    int numMummies = 3; 

    do {
	    system("cls");
	    displayMap(map, 20, 100);
	
	    char move = _getch();
	    int newPlayerX = playerX, newPlayerY = playerY;
	    switch (move) {
	        case 'W':
	        case 'w': {
	            newPlayerY = playerY - 1;
	            break;
	        }
	        case 'A':
	        case 'a': {
	            newPlayerX = playerX - 1;
	            break;
	        }
	        case 'S':
	        case 's': {
	            newPlayerY = playerY + 1;
	            break;
	        }
	        case 'D':
	        case 'd': {
	            newPlayerX = playerX + 1;
	            break;
	        }
	    }
	    
	    if(move == 13){
			system("cls");
			loseDisplay();
	    	return;
		}
	    
	    for (int i = 0; i < numMummies; i++) {
            if (newPlayerX == mummyPositions[i][0] && newPlayerY == mummyPositions[i][1]) {
                system("cls");
				loseDisplay();
                return;
            }
        }

        if (map[newPlayerY][newPlayerX] != '#') {
            map[playerY][playerX] = ' ';
            playerX = newPlayerX;
            playerY = newPlayerY;
            if (map[playerY][playerX] == 'O') {
                reachedExit = 1;
            }
            map[playerY][playerX] = 'P';
        }
	
	    // Handle mummies' movement
	    for (int i = 0 ; i < numMummies ; i++) {
		    int mummyX = mummyPositions[i][0];
		    int mummyY = mummyPositions[i][1];
		    int random = rand() % 4;
		    
		    if (random == 0) {
		        // Pathfinding
		        if (playerX < mummyX && map[mummyY][mummyX - 1] == ' ') {
		            mummyX--;
		        } else if (playerX > mummyX && map[mummyY][mummyX + 1] == ' ') {
		            mummyX++;
		        } else if (playerY < mummyY && map[mummyY - 1][mummyX] == ' ') {
		            mummyY--;
		        } else if (playerY > mummyY && map[mummyY + 1][mummyX] == ' ') {
		            mummyY++;
		        } else {
		            random = randomDirection();
		            if (random == 0 && mummyX > 0 && map[mummyY][mummyX - 1] == ' ') {
		                mummyX--;
		            } else if (random == 1 && mummyX < (cols - 1) && map[mummyY][mummyX + 1] == ' ') {
		                mummyX++;
		            } else if (random == 2 && mummyY > 0 && map[mummyY - 1][mummyX] == ' ') {
		                mummyY--;
		            } else if (random == 3 && mummyY < (rows - 1) && map[mummyY + 1][mummyX] == ' ') {
		                mummyY++;
		            }
		        }
			} else if (random < 4 && random != 0) {
			    // Random Movement
			    random = randomDirection();
			    if (random == 0 && mummyX > 0 && map[mummyY][mummyX - 1] == ' ') {
			        mummyX--;
			    } else if (random == 1 && mummyX < (cols - 1) && map[mummyY][mummyX + 1] == ' ') {
			        mummyX++;
			    } else if (random == 2 && mummyY > 0 && map[mummyY - 1][mummyX] == ' ') {
			        mummyY--;
			    } else if (random == 3 && mummyY < (rows - 1) && map[mummyY + 1][mummyX] == ' ') {
			        mummyY++;
			    }
			}
		    // Mummy's Movement Updated
		    map[mummyPositions[i][1]][mummyPositions[i][0]] = ' ';
		    mummyPositions[i][0] = mummyX;
		    mummyPositions[i][1] = mummyY;
		    map[mummyY][mummyX] = 'l';
		}
	} while (!reachedExit);
	
	if (reachedExit == 1) {
	    system("cls");
	    winDisplay();
	}
}

void playMediumGame() {
    char map[20][100] = {
        "######################################",
        "#                 O                  #",
        "#                ###       #         #",
        "#                   l                #",
        "#                     ####           #",
        "#                                    #   W  S  A  D   to  move",
        "#                #              l    #",
        "#    ##             #                #",
        "#       #                            #   LEGENDS",
        "#       # l       # # #              #   ------------------------------",
        "#                                    #   P  player",
        "#                #                   #   l  mummy",
        "#                #                   #   O  escape",
        "#                                    #",
        "#        ##                          #",
        "#            #                    ####   Press ENTER to exit",
        "#       l  #                 #     P #",
        "#                 #          #       #",
        "######################################"
    };
    int reachedExit = 0;
    int playerX = 35, playerY = 16;
    int mummyPositions[10][2] = {{20, 3}, {32, 6}, {10, 9}, {8,16}};
    int numMummies = 4; 

    do {
	    system("cls");
	    displayMap(map, 20, 100);
	
	    char move = _getch();
	    int newPlayerX = playerX, newPlayerY = playerY;
	    switch (move) {
	        case 'W':
	        case 'w': {
	            newPlayerY = playerY - 1;
	            break;
	        }
	        case 'A':
	        case 'a': {
	            newPlayerX = playerX - 1;
	            break;
	        }
	        case 'S':
	        case 's': {
	            newPlayerY = playerY + 1;
	            break;
	        }
	        case 'D':
	        case 'd': {
	            newPlayerX = playerX + 1;
	            break;
	        }
	    }
	    
	    if(move == 13){
			system("cls");
			loseDisplay();
	    	return;
		}
	    
	    for (int i = 0; i < numMummies; i++) {
            if (newPlayerX == mummyPositions[i][0] && newPlayerY == mummyPositions[i][1]) {
                system("cls");
				loseDisplay();
                return;
            }
        }
		
		// Collision Check
        if (map[newPlayerY][newPlayerX] != '#') {
            map[playerY][playerX] = ' ';
            playerX = newPlayerX;
            playerY = newPlayerY;
            if (map[playerY][playerX] == 'O') {
                reachedExit = 1;
            }
            map[playerY][playerX] = 'P';
        }

	    for (int i = 0 ; i < numMummies ; i++) {
		    int mummyX = mummyPositions[i][0];
		    int mummyY = mummyPositions[i][1];
		    int random = rand() % 2;
		    
		    if (random == 0) {
		        // Pathfinding
		        if (playerX < mummyX && map[mummyY][mummyX - 1] == ' ') {
		            mummyX--;
		        } else if (playerX > mummyX && map[mummyY][mummyX + 1] == ' ') {
		            mummyX++;
		        } else if (playerY < mummyY && map[mummyY - 1][mummyX] == ' ') {
		            mummyY--;
		        } else if (playerY > mummyY && map[mummyY + 1][mummyX] == ' ') {
		            mummyY++;
		        } else {
		            random = randomDirection();
		            if (random == 0 && mummyX > 0 && map[mummyY][mummyX - 1] == ' ') {
		                mummyX--;
		            } else if (random == 1 && mummyX < (cols - 1) && map[mummyY][mummyX + 1] == ' ') {
		                mummyX++;
		            } else if (random == 2 && mummyY > 0 && map[mummyY - 1][mummyX] == ' ') {
		                mummyY--;
		            } else if (random == 3 && mummyY < (rows - 1) && map[mummyY + 1][mummyX] == ' ') {
		                mummyY++;
		            }
		        }
			} else if (random == 1 && random != 0) {
			    // Random Movement
			    random = randomDirection();
			    if (random == 0 && mummyX > 0 && map[mummyY][mummyX - 1] == ' ') {
			        mummyX--;
			    } else if (random == 1 && mummyX < (cols - 1) && map[mummyY][mummyX + 1] == ' ') {
			        mummyX++;
			    } else if (random == 2 && mummyY > 0 && map[mummyY - 1][mummyX] == ' ') {
			        mummyY--;
			    } else if (random == 3 && mummyY < (rows - 1) && map[mummyY + 1][mummyX] == ' ') {
			        mummyY++;
			    }
			}
		    // Mummy's Movement Updated
		    map[mummyPositions[i][1]][mummyPositions[i][0]] = ' ';
		    mummyPositions[i][0] = mummyX;
		    mummyPositions[i][1] = mummyY;
		    map[mummyY][mummyX] = 'l';
		}
	} while (!reachedExit);
	
	if (reachedExit == 1) {
	    system("cls");
	    winDisplay();
	}
}

void playHardGame() {
    char map[20][100] = {
        "######################################",
        "#                               P    #",
        "#                    #               #",
        "#       #                    ####### #",
        "#                  #                 #",
        "#      # ######   l          ###     #   W  S  A  D   to  move",
        "#      #                     #     l #",
        "#      #           ####              #",
        "#                          ##        #   LEGENDS",
        "#               ### l                #   ------------------------------",
        "#     l   ##            #      l     #   P  player",
        "#         ##          # #            #   l  mummy",
        "#               #####                #   o  escape",
        "#    ###                ############ #",
        "#    ###    l     ###         l      #",
        "#    ###              #         #### #   Press ENTER to exit",
        "#     l               #       #   O  #",
        "#                    l               #",
        "######################################"
    };
    int reachedExit = 0;
    int playerX = 32, playerY = 1;
    int mummyPositions[10][2] = {{18, 5}, {35, 6}, {20, 9}, {6,10}, {31, 10}, {12, 14}, {30, 14}, {6,16}, {21,17}};
    int numMummies = 9; 

    do {
	    system("cls");
	    displayMap(map, 20, 100);
	
	    char move = _getch();
	    int newPlayerX = playerX, newPlayerY = playerY;
	    switch (move) {
	        case 'W':
	        case 'w': {
	            newPlayerY = playerY - 1;
	            break;
	        }
	        case 'A':
	        case 'a': {
	            newPlayerX = playerX - 1;
	            break;
	        }
	        case 'S':
	        case 's': {
	            newPlayerY = playerY + 1;
	            break;
	        }
	        case 'D':
	        case 'd': {
	            newPlayerX = playerX + 1;
	            break;
	        }
	    }
	    
	    if(move == 13){
			system("cls");
			loseDisplay();
	    	return;
		}
	    
	    for (int i = 0; i < numMummies; i++) {
            if (newPlayerX == mummyPositions[i][0] && newPlayerY == mummyPositions[i][1]) {
                system("cls");
				loseDisplay();
                return;
            }
        }

        if (map[newPlayerY][newPlayerX] != '#') {
            map[playerY][playerX] = ' ';
            playerX = newPlayerX;
            playerY = newPlayerY;

            if (map[playerY][playerX] == 'O') {
                reachedExit = 1;
            }
            map[playerY][playerX] = 'P';
        }
	
	    for (int i = 0 ; i < numMummies ; i++) {
		    int mummyX = mummyPositions[i][0];
		    int mummyY = mummyPositions[i][1];
		    int random = rand() % 4;
		    
		    if (random < 4 && random != 0) {
		        // Pathfinding
		        if (playerX < mummyX && map[mummyY][mummyX - 1] == ' ') {
		            mummyX--;
		        } else if (playerX > mummyX && map[mummyY][mummyX + 1] == ' ') {
		            mummyX++;
		        } else if (playerY < mummyY && map[mummyY - 1][mummyX] == ' ') {
		            mummyY--;
		        } else if (playerY > mummyY && map[mummyY + 1][mummyX] == ' ') {
		            mummyY++;
		        } else {
		            random = randomDirection();
		            if (random == 0 && mummyX > 0 && map[mummyY][mummyX - 1] == ' ') {
		                mummyX--;
		            } else if (random == 1 && mummyX < (cols - 1) && map[mummyY][mummyX + 1] == ' ') {
		                mummyX++;
		            } else if (random == 2 && mummyY > 0 && map[mummyY - 1][mummyX] == ' ') {
		                mummyY--;
		            } else if (random == 3 && mummyY < (rows - 1) && map[mummyY + 1][mummyX] == ' ') {
		                mummyY++;
		            }
		        }
			} else if (random == 0) {
			    // Random Movement
				random = randomDirection();
			    if (random == 0 && mummyX > 0 && map[mummyY][mummyX - 1] == ' ') {
			        mummyX--;
			    } else if (random == 1 && mummyX < (cols - 1) && map[mummyY][mummyX + 1] == ' ') {
			        mummyX++;
			    } else if (random == 2 && mummyY > 0 && map[mummyY - 1][mummyX] == ' ') {
			        mummyY--;
			    } else if (random == 3 && mummyY < (rows - 1) && map[mummyY + 1][mummyX] == ' ') {
			        mummyY++;
			    }
			}
		    // Mummy's Position Updated
		    map[mummyPositions[i][1]][mummyPositions[i][0]] = ' ';
		    mummyPositions[i][0] = mummyX;
		    mummyPositions[i][1] = mummyY;
		    map[mummyY][mummyX] = 'l';
		}
	} while (!reachedExit);
	
	if (reachedExit == 1) {
	    system("cls");
	    winDisplay();
	}   
}

void displayMap(char map[20][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}
