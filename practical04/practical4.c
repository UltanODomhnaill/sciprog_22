#include <stdio.h>
#include <math.h>

// Create the degrees to radians function
float deg_to_rad(float theta)
{
    return M_PI * theta / 180.0;
}

//Create the trapezoidal rule function
float trap_rule(float a, float b, int N, float function_array[N + 1])
{
    float sum = function_array[0] + function_array[N];
    int i = 0;
    for (i = 1; i < N; i++)
    {
        sum += 2 * function_array[i];
        // sum = sum + 2*function_array[i]
    }
    return (b - a) * (sum) / (2 * N);
}

// Start the main block of code
int main(void)
{
    // Initialize Variables
    float start = 0; // Lower Limit of range
    float end = 60; // Upper Limit of range
    int N = 12; // Initialize step size
    float step_size = (end-start) / N; // Make a step size based on range limits
    float tan_arr[N + 1]; // Initialize the tan array
    int i = 0;
    // Use a loop to generate radian values, compute tan(x) and store in array
    for (i = 0; i <= N; i++)
    {
        tan_arr[i] = tan(deg_to_rad(step_size * i));
    }
    // Create variable for trapezoidal rule answer and print result
    float ans = trap_rule(deg_to_rad(start), deg_to_rad(end), N, tan_arr);
    printf("The answer is %f\n", ans);
    printf("the actual answer is %f\n", logf(2));

    return 0;
}

