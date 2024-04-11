#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.14
#define SAYHI sayHello()

typedef unsigned int POSITIVE;

void double_second(int *, int);

int find_max(int *, int, int *);

void show_array(int *a,int n){
    int i = 0;
    printf("Start of array\n");
    while (i<n) {
        printf("%d ", a[i]);
        i++;
    }
    printf("\nEnd of array\n");

}

void show_2d_array(int a[][4], int n, int m){
    int i = 0;
    int j;
    printf("Start of array\n");
    while (i<=n) {
        j = 0;
        while(j<=m){
            printf("%d ", a[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("End of array\n");

}

void sayHello(){
    printf("Kept you, waiting, huh\n");
}

void show_2d_array_p(int (*x)[50], int n, int m);

void passed_function();

void called_function(void (*)());

int brute_force(int *, int, int);

int binary_search_r(int *, int, int, int);

int binary_search(int *, int, int, int);

void selection_sort_v2(int *, int);

void bubble_sort(int *, int);

void insertion_sort(int *, int);

void selection_sort(int *, int);

int main(){
    // //0 before number is octal and 0x is hexdecimal
    // //%d outputs number in decimal
    // //o and x for outputs in octal and hexdecimal
    // //# for adding 0 and 0x;
    // //numbers for specifying digits must start with 0 
    // int x = 0231;
    // int y = 0x23A3;
    // printf("x: %d\ny: %d\n", x, y);
    // printf("x: %o\ny: %x\n", x, y);
    // printf("x: %#o\ny: %#x\n", x, y);
    // printf("x: %#010o\ny: %#010x\n", x, y);

    // //float short decimal and double long decimal 
    // //C ignores second statemnt if first is true
    // int i = 1, j = 1;
    // int check = (i || ++j);
    // printf("i: %d\nj: %d\ncheck: %d\n", i, j, check);

    // //Can be used for every operator, same as i = i + j
    // int i = 2;
    // int j = 3;
    // i += j; 
    // printf("%d", i)

    // //stateman ? true : false
    // int i = 4;
    // int j = 5;
    // i>j ? printf("i is bigger\n") : printf("j is bigger\n");

    // //implicit and explicit conversion
    // //a will be  0.000 because its int/int
    // //1.2 in print statemant tells 1 total numbers and 2 digit numbers
    // int x = 4;
    // int y = 5;
    // int i = 'a' + 1;
    // int c1 = 'a' + 1;
    // char c2 = (char) i+1;
    // float a = x/y;
    // float b = (float) x/y;
    // printf("i: %d\nc1: %c\nc2: %c\nx/y=%f\nIn float x/y= %1.2f\n", i, c1, c2, a, b);

    // //x might lose data because 22 is considered int while y won't
    // // F for float
    // // float x = 10F error can't use it with whole number
    // long long x = 22;
    // long long y = 22LL;
    // printf("x: %llu\nsizeof: %lu\ny: %llu\nsizeof: %lu\n", x, sizeof(x), y, sizeof(y));

    // //unsigned if %u behavior undefined
    // //if %d and ~x will make it negative and add -1
    // unsigned x = -20;
    // printf("%u\n", ~x);
    // printf("%d\n", ~x);

    // //operations with bits
    // //& for logic operator and on every bit in numbers
    // //| for logic operator or on every bit in numbers
    // //^ for logic operator exclusive or on every bit in numbers
    // //~ for complement
    // // << for shl
    // // >> for shr
    // //these operator are faster
    // int a = 4;
    // int b = 3;
    // a = a<<1;
    // int check = a&b;
    // printf("a: %d\ncheck: %d\n", a, check);

    // //parentheses x is set to last thing from parentheses
    // int x, y;
    // x = (y = 2, 3);
    // x = (x<5 ? y++ : y--, 7);
    // printf("x: %d\ny: %d\n", x, y);

    // // signed and unsigned
    // signed int x = -10;
    // unsigned int y = 10;
    // signed char c = 98;
    // unsigned char cu = 98;
    // printf("x: %d\ny: %d\nc: %c\ncu: %c\n", x, y, c, cu);

    // //switch needs break for every line except default when last
    // //(x%100) returns last to numbers 432 => 32 then dividing by 10 will give 32/10 = 3
    // //x%100 can be used to set which number is needed and then divied by necessary amount
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

    // //do while guarantees to pass at least once
    // int i = 0;
    // int x, y = 0;
    // scanf("%d", &x);
    // do {
    //     y += i;
    //     i++;
    // } while(i<=x);

    // printf("%d\n", y);

    // //sintax for for loop
    // //increments at the end
    // // calls at the end so ++i doesn't change anything ?
    // int x, y=0;
    // scanf("%d", &x);
    // for(int i=0; i<=x; i++){
    //     y  += i;
    //     printf("%d\n", i);
    // }
    // printf("%d\n", y);
    
    // //args are read from right to left prob works with i++
    // int i = 1;
    // printf("First i: %d\nSecond i: %d\n", i, i += 1);

    // //pointers
    // int x = 20;
    // int *p = &x;

    // printf("p: %p\n", (void *) p);

    // *p = 30;
    // printf("x: %d\n", x);

    // //arrays
    // int a[50] = {20, 12, 2, 3};
    // show_array(a, 3);
    // //numbers after are ignored
    // int b[3] = {31, 23, 3, 1, 2};
    // show_array(b, 3);
    // //c knows that is 4 is needed for a row
    // int c[][4] = { 2, 4, 2, 4, 5, 2, 1, 2, 1};
    // show_2d_array(&c, 2, 3);
    // int d[3] = {2, 3, 4};
    // int len = sizeof(d)/sizeof(d[0]);
    // printf("%d\n", len);
    // printf("%d\n", d[len-1]);
    // // also works with &d[0]
    // int *p = d;
    // printf("%d\n", *(p+2));

    // //goto to avoid
    // int i=0;
    // lab: printf("%d\n", i);
    // if(i<5){
    //     i++;
    //     goto lab;
    // }
    // printf("end\n");

    // //fgets will put '\0' on 9 as last index
    // char s[10];
    // fgets(s, sizeof(s), stdin);
    // puts(s);

    // //getch() doesn't put extra chars in buffer 
    // char c;
    // c = getch();
    // putch(c);

    // //string copy
    // char s1[10], s2[10];
    // fgets(s1, sizeof(s1), stdin);
    // strcpy(s2, s1);
    // printf("\ns1: ");
    // puts(s1);
    // printf("\ns2: ");
    // puts(s2);

    // //one to other
    // //fgets() adds new line
    // //sscanf() formats it
    // char s1[10], s2[10], s3[10];
    // printf("Enter first string: ");
    // fgets(s1, sizeof(s1), stdin);
    // printf("Enter second string: ");
    // fgets(s2, sizeof(s2), stdin);
    // sscanf(s1, "%s", s1);
    // sscanf(s2, "%s", s2);
    // strcat(s1, s2); 
    // puts(s1);
    
    // //literals? they can't be changed
    // char *p = "Test";
    // puts(p);

    // //convert to number function atol() is for long and atof() is for float
    // char s[20];
    // printf("Enter string:\n");
    // fgets(s, sizeof(s), stdin);
    // sscanf(s, "%s", s);

    // int i = atoi(s);
    // printf("i: %d\n", i);

    // //function should be declared at the start and add code at the bottom
    // //it need type of variables and pointers
    // //pointers to array in function
    // int x[50] = {0, 1, 2, 3, 4, 5, 6, 10, 20, 30};
    // int n = 10;
    // int i_max;
    
    // //calling a function with refrence but it is not needed but it still give error
    // double_second(x, n);
    // show_array(x, n);

    // int max = find_max(x, n, &i_max);

    // printf("\nmax: %d\ni_max: %d\n", max, i_max);
    
    // //passed function with pointer to other function 
    // //pay attetion to declaretion fun( int *()() ) and fun( int (*fun2) )
    // //it can work with and without & when calling
    // called_function(passed_function);

    // //2d arrays in function and in the main should have the same n and should be passed only a pointer
    // printf("Enter array:\n");
    // int x[50][50];
    // int n = 2;
    // for(int i = 0; i < 2; i++)
    //     for(int j = 0; j < n; j++){
    //         printf("x[%d][%d]: ", i, j);
    //         scanf("%d", &x[i][j]);

    //     }
    // show_2d_array_p(x, n, n);

    // //for searching and sorting
    int x_s[] = {3, 6, 9, 10, 11, 20, 34};
    int n_s = sizeof(x_s)/sizeof(x_s[1]);
    int x_u[] = {3, 4, 2, 3, 7, 10, 9, 45, 11, 56, 23, 20, 21};
    int n_u = sizeof(x_u)/sizeof(x_u[1]);
    int s = 10;


    // //brute force
    // int i = brute_force(x_s, n_s, s);

    //binary search
    // int i = binary_search_r(x_s, n_s, 0, s);

    // if(i < 0){
    //     printf("Element isn't found\n");
    // }else{
    //     printf("Element is on the index: %d\n", i);
    // }

    //selection sort 
    // selection_sort(x_u, n_u);

    // // selection sort v2
    // selection_sort_v2(x_u, n_u);

    // // bubble sort
    // bubble_sort(x_u, n_u);

    // // insertion sort
    // insertion_sort(x_u, n_u);

    // show_array(x_u, n_u);

    //const remove const and look what is on the right side ??
    // int k = 0;
    // const int i = 0;
    // int j = 4;
    // const int *j ; // const on variable

    // int * const k; // const on pointer

    // // const * const i; // const on pointer and variable
    // POSITIVE i = 1;
    // printf("%d", i);

    //#define puts said value where the name is and for PIPI should put 3.143.14
    // printf("%1.2f\n", PI);
    // SAYHI;

    return 0;   
}

void show_2d_array_p(int (*x)[50], int n, int m){
    printf("Start of array\n");
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++)
            printf("%d ", x[i][j]);
        printf("\n");
    }
    printf("End of array\n");

}


void double_second(int *x, int n){
    for(int i = 0; i<n; i += 2)
        x[i] *= 2;
}

int find_max(int *x, int n, int *i_max){
    int max = x[0];
    *i_max = 0;
    for(int i = 1; i<n; i++)
        if(x[i]>max){
            max = x[i];
            *i_max = i;

        }
    return max;
}

void called_function(void (*fun)()){
    printf("I am called function\n");
    fun();
}

void passed_function(){
    printf("I am passed function\n");
}

int brute_force(int *x, int n, int s ){
    for(int i = 0; i<n; i++)
        if(x[i]==s)
            return i;
    return -1;
}

int binary_search_r(int *x, int n, int i, int s){
    if(i>n)
        return -1;
    if(x[(n-i)/2]== s)
        return (n-i)/2;
    if(x[(n-i)/2] < s)
        return binary_search_r(x, n, (n-i)/2+1, s);
    if(x[(n-i)/2] > s)
        return binary_search_r(x, (n-i)/2-1, i, s);
    return -2;
}

int binary_search(int *x, int n, int i, int s){
    while(i<=n)
        if(x[(n-i)/2]==s)
            return (n-i)/2;
        else if(x[(n-i)/2]<s)
            i = (n-i)/2 + 1;
        else if(x[(n-i)/2]>s)
            n = (n - i)/2 - 1;
    
    return -1;
}

void selection_sort_v2(int *x, int n){
    int h, k, min;
    for(int i = 0; i<n-1; i++){
        k = i;
        min = x[i];
        for(int j = i + 1; j<n; j++)
            if(x[j]<min){
                k = j;
                min = x[j];
            }
        h = x[i];
        x[i] = x[k];
        x[k] = h;

    }
}

void bubble_sort(int *x, int n){
    int ind = 1, h;
    for(int i = 0; i<n-1 && ind == 1; i++){
        ind = 0;
        for(int j = 0; j<n-i-1; j++){
            if(x[j]>x[j+1]){
                ind = 1;
                h = x[j];
                x[j] = x[j+1];
                x[j+1] = h;
            }
        }
    }
}

void insertion_sort(int *x, int n){
    int temp;
    for (int i = 1; i<n;i++)
        for(int j = i - 1; j>-1; j--)
            if(x[j]>x[j+1]){
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
}

void selection_sort(int *x, int n){
    int temp;
    for(int i = 0; i<n-1;i++)
        for(int j = i; j<n; j++)
            if(x[i]>x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
}