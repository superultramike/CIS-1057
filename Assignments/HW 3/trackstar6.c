/*
    Takes track data and converts time to FPS (feet per sec) and MPS (meters per sec)
*/
/*
    Pseudocode Code

    Vars:
        raceMin, raceSec, totalSecs, FPS, MPS
    Equations:
        FPS = 5280 / totalSecs
            "if they can travel 5280 ft (1 mile) in just 232 secs, how far do they travel in just 1 sec?" (solve with proportions)
        MPS = 3282 / totalSecs
            "if they can travel 3282 ft (1 kilometer) in just 232 secs, how far do they travel in just 1 sec?" (solve with proportions)

    1: Allow input of runners of 1 MILE
        1.1: Minutes then seconds
    2: Combine input to one value
        2.1: Multiply Minutes by 60 then add to seconds
    3: Convert single value to fps (feet per sec)
        3.1: 1 Mile (5280 ft) divide by total secs
    4: Convert single value to MPS (meters per sec)
        4.1: 1 kiloM (3282 ft) divide by total secs
    5: Display final result
        5.1: Based on your race time of (display original time) you ran (FPS time) feet per sec and (MPS time) meters per sec
*/
#include <stdio.h>

int main() {

    double raceMin, raceSecs, totalSecs, FPS, MPS; // INPUTS AND OUTPUTS

    printf("How many minutes was your race time: "); // ASKS USER FOR MINS FOR RACE
    scanf("%lf", &raceMin); // STORES DATA

    printf("How many secs was your race time: "); // ASKS USER FOR SECS FOR RACE
    scanf("%lf", &raceSecs); // STORES DATA

    totalSecs = (raceMin * 60) + raceSecs; // CONVERTS ALL RACE VALUES TO ONE VALUE

    FPS = 5280 / totalSecs; // EQUATES FEET PER SECOND BY USING CONVERTED VALUE ABOVE
    MPS = 3282 / totalSecs; // EQUATES METERS PER SECOND BY USING CONVERTED VALUE ABOVE

    printf("\nBased on your total race time of %.0lf minutes and %.2lf seconds, \nYou ran %.2lf feet per second (FPS) and %.2lf meters per second (MPS)\n", raceMin, raceSecs, FPS, MPS); // DISPLAYS FINAL MESSAGE ALL GIVEN INFO

    return 0;
}
