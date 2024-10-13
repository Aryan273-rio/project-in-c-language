#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int randomNumber = (rand() % 100) + 1;

    int Guess_no;
    int no_of_guesses =0;
        
    while(Guess_no != randomNumber){
        printf("Guess a random number between 1 and 100: \n");
        scanf("%d", &Guess_no);

        if(randomNumber==Guess_no){
            printf("Your guess %d is correct!\n",Guess_no);
            no_of_guesses+=1;
            printf("The number of guesses taken is %d\n",no_of_guesses);   
            break;
        }
        else if(randomNumber<Guess_no){
            printf("Please guess a lower number!\n");
            no_of_guesses+=1;
        }

        else if(Guess_no<randomNumber){
            printf("Please guess a higher number!\n");
            no_of_guesses+=1;
        }
    
    }

    return 0;
}
