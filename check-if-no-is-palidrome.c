#include <stdio.h>
int main(){
    //intializing integers 
    int num, temp, remainder, reversed = 0;
    //taking input integer from user
    printf("Enter an integer: ");
    scanf("%d", &num);
    //store original num
    temp = num; 
    while (temp != 0 ){
        remainder = temp % 10; //get last digit
        reversed = reversed * 10 + remainder; //build reversed number
        temp /= 10; //remove last digit 
    }
    if (num == reversed)
    printf ("%d is a palindrome.\n", num);
    else 
    printf("%d is not a palindrome.\n", num);
    return 0;
}
