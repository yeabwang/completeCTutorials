#include <stdio.h>
#define NUMOFJUDGES 10

int main(void)
{
    int scores[NUMOFJUDGES];           
    int average, sum = 0, maxScore, minScore;
    int numValidScores = 0;
    int excludedMax = 0, excludedMin = 0;

    
    for (int i = 0; i < NUMOFJUDGES; i++) {
        if (scanf("%d", &scores[i]) == 1)
        {
          // Ensure scores are valid (between 0 and 100)
          if (scores[i] < 0 || scores[i] > 100) {
          printf("Invalid score entered. Exiting...\n");
          return 1;  // Exiting if an invalid score is entered (not between 0 and 100)
          
        }
        }
    }

    // Initialize min and max to the first score
    minScore = maxScore = scores[0];

    // Find the minimum and maximum scores
    for (int i = 1; i < NUMOFJUDGES; i++) {
        if (scores[i] < minScore) {
            minScore = scores[i];
        } 
        if (scores[i] > maxScore) {
            maxScore = scores[i];
        }
    }

    // Coping the other scores to another array we created and calculate the sum
    // If we already removed the min and max value, we are skipping it so that we can avoid duplicate inputs

    for (int i = 0; i < NUMOFJUDGES; i++) {
        if (scores[i] == minScore && excludedMin == 0) {
            excludedMin = 1; 
        }
        else if (scores[i] == maxScore && excludedMax == 0) {
            excludedMax = 1; 
        }
        else {
            sum += scores[i]; //caluclating the sum
            numValidScores++;
        }
    }

    // Calculate average
    if (numValidScores > 0) {
        average = sum / numValidScores;
    }

    printf("Canceled Max Score:%d\nCanceled Min Score:%d\nAverage Score:%d\n",maxScore,minScore,average);
    
    return 0;
}