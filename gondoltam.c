#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main(int argc, char *argv[]) {
    int level = 1;
	if (argc > 1) {
		if (strcmp(argv[1], "-L") == 0) {
			if (strcmp(argv[2], "medium") == 0) {
                level = 2;
			}
			else if (strcmp(argv[2], "hard") == 0) {
                level = 3;
			}
		}
		else if (strcmp(argv[1], "-l") == 0) {
			int arg2;
			sscanf (argv[2],"%d",&arg2);
			level = arg2;
		}
		else if (strcmp(argv[1], "--help") == 0) {
            printf("A -L kapcsolóval az 'easy', 'medium', 'hard' szavakkal állíthatod a szintet\npl: 'gondoltam -L hard'\nA -l kapcsolóval pedig számokkal tudod állítani a nehézséget\npl: 'gondoltam -l 2'\nAz alapértelmezett szint a könnyű!\n");
            return 1;
		}
	}
    int i;
    srand(time(NULL));
    int rand1 = rand() % (level * 20);
    int rand2 = rand() % (level * 15);
    int rand3 = rand() % (level * 10);
    int rand4 = rand() % (level * 15);
    int eredmeny = (rand1 - rand2) * rand3 + rand4;
    printf("Gondoltam egy számra, kivontam belőle %i-t, megszoroztam %i-vel, hozzáadtam %i-t, és %i-t kaptam.\n", rand2, rand3, rand4, eredmeny);
    int x;
    printf("Melyik az a szam? ");
    scanf("%d", &x);
	if (x == rand1) {
        printf("Helyes!\n");
	} else { printf("Nem jó\nA helyes válasz a %i lett volna!\n", rand1); }
    
    return 0;
}