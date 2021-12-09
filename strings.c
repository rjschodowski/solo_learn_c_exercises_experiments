#include <stdio.h>

int main() {
    char str1[23] = "hello, I am Jared.";
    char str2[] = "world";  /* size 6 */
    char str3[10000] = "I am going to be a very, very, veeeeeeerrrry loooooong string to see just how far this will go. \nThe purpose is to test my hypothesis that by leaving the array brackets blank,\n I can type a string for a very, veeeeeeeeeerrrrrrrrryyyyy loooooong time without any issues. Otherwise, \n if I am wrong, then I will get some kind of error message. I just want to see for the heck of it. \n What is going to happen once I end this ongoing string of nonsense and click run for this to compile and execute? \nMaybe I am stalling. Maybe I am just trying to see if this whole\n very long text will print. Ok, here goes nothing.........";
    char str4[] = "Welp, I guess that worked in the previous string experiment. Yass!!!";
    char str5[3] = "He";
    printf("str1 is: %s\n str2 is: %s\n str3 is: %s\n str4 is: %s\n str 5 is: %s", str1, str2, str3, str4, str5);
    
    return 0;
}