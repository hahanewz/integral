#include<stdio.h>
#include<math.h>

/* Define function here */
#define f(x) (x-(pow(x,x)*log(x)))

int main()
{
    int quit = 0;
    while(!quit)
    {
        float integration=0.0, stepSize, k, subInterval;
        int i;
        float lower = 0;
        float upper = exp(0.56714);
        printf("f(x)=(x-(pow(x,x)*log(x)))\n");
        printf("Enter number of sub intervals: ");
        scanf("%f", &subInterval);

 /* Calculation */
 /* Finding step size */
        stepSize = (upper)/subInterval;

 /* Finding Integration Value */
        integration = f(upper);
        for(i=1; i<= subInterval-1; i++)
            {
            k = i*stepSize;
            integration = integration + 2 * (f(k));
            }
        integration = integration * stepSize/2;
        printf("\nRequired value of integration is: %.3f", integration);
        scanf("%d", quit);
    }
    return 0;
}