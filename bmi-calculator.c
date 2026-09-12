#include <stdio.h>
int main() {
    //intializing variables
   float weight, height, bmi;
   //taking input from user
   printf ("Enter your weight in kilograms: (kg)");
    scanf ("%f", &weight);
   printf ("Enter your height in meters: (m)");
    scanf ("%f", &height);
    // now calculating the BMI
    bmi = weight / (height * height);
    // displaying the bmi 
    printf ("your bmi is : %.2f", bmi);
    // now checking if user is underweight, normal, overweight or obese
    if (bmi < 18.5 )
    {
        printf ("\nyou are underweight ");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf ("\nyou are normal ");
    }
     else if(bmi >= 25 && bmi <= 29.9)
    {
        printf ("\nyou are overweight ");
    }
    else
    {
        printf ("\nyou are obese ");
    }
 return 0;

}
