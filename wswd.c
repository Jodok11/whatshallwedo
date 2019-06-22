#include <stdio.h>

int main(int argc, char *argv[]){
    char *p;
    int randomNum = strtol(argv[1], &p, 10);

    switch (randomNum)
    {
        case 1:
            printf("Overcooked zocken");
            break;
    
        case 2:
            printf("Disc Jam zocken");
            break;

        case 3:
            printf("Starwhal zocken");
            break;
        case 4:
            printf("Rocket League zocken");
            break;

        case 5:
            printf("Borderlands zocken");
            break;

        case 6:
            printf("Zug um Zug zocken");
            break;

        case 7:
            printf("Hidden Agenda zocken");
            break;
        
        case 8:
            printf("Fifa zocken");
            break;
        
        case 9:
            printf("Jassen");
            break;

        case 10:
            printf("Kartenspiel The Game zocken");
            break;

        case 11:
            printf("Blackjack zocken");
            break;
        default:
            break;
    }
}