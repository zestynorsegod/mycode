//A simple game of hangman.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_WORD_LEN 9
#define NUM_OF_WORDS 49

int main() {

//Title screen.
	printf("\n\nHANGMAN\n");
	printf("      _________ \n");
	printf("     |         |\n");
	printf("     |         |\n");
	printf("    {_}        |\n");
	printf("               |\n");
	printf("               |\n");
	printf("               |\n");
	printf("               |\n");
	printf("      _________|___\n\n\n");

//Wordpool.
    time_t seed1;
	seed1 = time(NULL);
    
	srand(seed1);
	int pick = rand()%49;

    char wordpool[NUM_OF_WORDS][MAX_WORD_LEN] = {"mouse", "criticism", "misery", "rider", "premature", "hip", "refuse", "mind", "recover", "secular", "amputate", "mug", "wagon", "pain", "manage", "rise", "ideology", "main", "scene", "on", "sector", "clue", "stem", "parachute", "merchant", "grant", "economics", "channel", "harvest", "rumor", "knife", "means", "surgeon", "career", "bond", "punish", "expand", "pot", "white", "soak", "rare", "habit", "suffering", "labour", "shadow", "offender", "advocate", "stroll", "nonsense"};


//Game logic.

    char guess[2];
    int k = 0;

    size_t length;
    length = strlen(wordpool[pick]);

	char word[MAX_WORD_LEN]; strcpy(word, wordpool[pick]);
    char current[MAX_WORD_LEN]; strcpy(current, wordpool[pick]);

    //Begin encrypt...
    char enc[] = "_________";
    int chval = 0;
	do {
			current[chval] = enc[chval];
			chval++;
	} while(chval <= length - 1);
    //End encrypt

	int loopbreak = 1;
    while (loopbreak != 0) {
		printf("Guess a letter:%s\n", current);
		fflush(stdout);
		scanf("%1s", guess);
		printf("\n");
		k = 0;
			while (k < length) {		
					if (guess[0] == word[k]) {
						current[k] = word[k];
						k++;
					}
				    else {k++; 
					}
			}
		loopbreak = strcmp(word, current);
    }
	printf("Word is: %s\n", word);
	printf("You Win.\n");
return(0);
}
