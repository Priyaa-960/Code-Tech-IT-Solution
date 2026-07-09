Quiz Application
#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Quiz Application =====\n");

    printf("\n1. What is the capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n2. C language was developed by?\n");
    printf("1. James Gosling\n2. Dennis Ritchie\n3. Bjarne Stroustrup\n4. Bill Gates\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n3. 5 + 7 = ?\n");
    printf("1. 10\n2. 12\n3. 14\n4. 15\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    if(score == 3)
        printf("Excellent!\n");
    else if(score == 2)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}
