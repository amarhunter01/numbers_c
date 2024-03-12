#include <stdio.h>

int main(){
    //0 before number is octal and 0x is hexdecimal
    //%d outputs number in decimal
    //o and x for outputs in octal and hexdecimal
    //# for adding 0 and 0x;
    //numbers for specifying digits must start with 0 
    // int x = 0231;
    // int y = 0x23A3;
    // printf("x: %d\ny: %d\n", x, y);
    // printf("x: %o\ny: %x\n", x, y);
    // printf("x: %#o\ny: %#x\n", x, y);
    // printf("x: %#010o\ny: %#010x\n", x, y);

    //float short decimal and double long decimal 
    //C ignores second statemnt if first is true
    // int i = 1, j = 1;
    // int check = (i || ++j);
    // printf("i: %d\nj: %d\ncheck: %d\n", i, j, check);

    //Can be used for every operator, same as i = i + j
    // int i = 2;
    // int j = 3;
    // i += j; 
    // printf("%d", i)

    //stateman ? true : false
    // int i = 4;
    // int j = 5;
    // i>j ? printf("i is bigger\n") : printf("j is bigger\n");

    //implicit and explicit conversion
    //a will be  0.000 because its int/int
    //1.2 in print statemant tells 1 total numbers and 2 digit numbers
    // int x = 4;
    // int y = 5;
    // int i = 'a' + 1;
    // int c1 = 'a' + 1;
    // char c2 = (char) i+1;
    // float a = x/y;
    // float b = (float) x/y;
    // printf("i: %d\nc1: %c\nc2: %c\nx/y=%f\nIn float x/y= %1.2f\n", i, c1, c2, a, b);

    //x might lose data because 22 is considered int while y won't
    // F for float
    // float x = 10F error can't use it with whole number
    // long long x = 22;
    // long long y = 22LL;
    // printf("x: %llu\nsizeof: %lu\ny: %llu\nsizeof: %lu\n", x, sizeof(x), y, sizeof(y));

    //unsigned if %u behavior undefined
    //if %d and ~x will make it negative and add -1
    // unsigned x = -20;
    // printf("%u\n", ~x);
    // printf("%d\n", ~x);

    //operations with bits
    //& for logic operator and on every bit in numbers
    //| for logic operator or on every bit in numbers
    //^ for logic operator exclusive or on every bit in numbers
    //~ for complement
    // << for shl
    // >> for shr
    //these operator are faster
    // int a = 4;
    // int b = 3;
    // a = a<<1;
    // int check = a&b;
    // printf("a: %d\ncheck: %d\n", a, check);

    //parentheses x is set to last thing from parentheses
    // int x, y;
    // x = (y = 2, 3);
    // x = (x<5 ? y++ : y--, 7);
    // printf("x: %d\ny: %d\n", x, y);

    //signed and unsigned
    // signed int x = -10;
    // unsigned int y = 10;
    // signed char c = 98;
    // unsigned char cu = 98;
    // printf("x: %d\ny: %d\nc: %c\ncu: %c\n", x, y, c, cu);

    //switch needs break for every line except default
    //(x%100) returns last to numbers 432 => 32 then dividing by 10 will give 32/10 = 3
    //x%100 can be used to set which number is needed and then divied by necessary amount
    // int x; 
    // printf("Enter number: "); 
    // scanf("%d", &x);
    // switch((x%100)/10){
    //     case 0:{
    //         printf("0\n");
    //         break;
    //     }
    //     case 1:{
    //         printf("1\n");
    //         break;
    //     }
    //     case 3: printf("3\n"); break;
    //     default:
    //         printf("Not first 3\n");
    // }

    //do while guarantees to pass at least once
    // int i = 0;
    // int x, y = 0;
    // scanf("%d", &x);
    // do {
    //     y += i;
    //     i++;
    // } while(i<=x);

    // printf("%d\n", y);

    //sintax for for loop
    //increments at the end
    //calls at the end so ++i doesn't change anything
    // int x, y=0;
    // scanf("%d", &x);
    // for(int i=0; i<=x; i++){
    //     y  += i;
    //     printf("%d\n", i);
    // }
    // printf("%d\n", y);
    
    //args are read from right to left
    // int i = 1;
    // printf("First i: %d\nSecond i: %d\n", i, i += 1);
    


}

