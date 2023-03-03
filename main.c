#include <stdio.h>
void coordinates(double x, double y);

int main() {
    //Code for Problem 1
    int end = 1000;
    int sum;
    int temp = 0;
    while(temp != end)
    {
        printf("Input temp: ");
        scanf("%d", &temp);
        sum += temp;
    }
    double avg = (sum - 1000) / 10.0;
    printf("Average temp: %f\n", avg);
    //Code for Problem 2
    coordinates(4.0, 4.0);

}
void coordinates(double x, double y)
{
    if(x == 0.0 && y == 0.0)
    {
        printf("(%0.1f, %0.1f) is the origin\n", x, y);
    }
    else if(x == 0.0)
    {
        printf("(%0.1f, %0.1f) is on the y axis\n", x, y);
    }
    else if(y == 0.0)
    {
        printf("(%0.1f, %0.1f) is on the x axis\n", x, y);
    }
    else if(x > 0.0 && y > 0.0)
    {
        printf("(%0.1f, %0.1f) is in quadrant I\n", x, y);
    }
    else if(x < 0.0 && y > 0.0)
    {
        printf("(%0.1f, %0.1f) is in quadrant II\n", x, y);
    }
    else if(x < 0.0 && y < 0.0)
    {
        printf("(%0.1f, %0.1f) is in quadrant III\n", x, y);
    }
    else
    {
        printf("(%0.1f, %0.1f) is in quadrant IV\n", x, y);
    }
}
