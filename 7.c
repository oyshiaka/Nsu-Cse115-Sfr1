#include<stdio.h>
//#include<math.h>

int main ()
{
    int i;
    int my_array[100];
    char name[20];
    double bigval[5*200];
    int a[27], b[10], c[76];

    int n[5] = { 1, 2, 3, 4, 5 }; // {0} { 1, 2, 3 }
	// n = { 1, 2, 3, 4, 5 }; // wrong. Declaration and definition should be in the same line.
    for (i=0; i< 5;i++)
        printf("%d\n", n[i]);
    printf("i=%d contains %d\n", i, n[i]); // garbage

//    int n=10;
//    printf("Enter the size of the array: \n");
//    scanf("%d", &n);
//    int arr[n];
//    for(int i=0; i<n; i++)
//        arr[i] = (int) (rand()%100); //i+1; [0, RAND_MAX) 32767
//    printf("The array elements are: ");
//    for(int i=0; i<n; i++)
//        printf("%d ", arr[i]);
//    printf("\n\n");

    /* Reverse printing*/
//    printf("Reverse printing\n");
//    for(int i=n-1; i>=0; i--)
//        printf("%d ", arr[i]);

    /* Pick a random element */
//    int random_element = (int) (rand()%n);
//    printf("\nA random index is %d and its content is %d\n", random_element, arr[random_element]);

    /* Average of n numbers*/
//    float sum=0;
//    for(int i=0; i<n; i++)
//        sum += arr[i];
//    printf("The average is %f\n", sum/n);

    /* MAX of n numbers*/
//    int max=arr[0];
//    for(int i=1; i<n; i++)
//    {
//        if (max < arr[i])
//            max = arr[i];
//    }
//    printf("The max element is %d\n", max); // can you print the max index also

    /* left shift of array element */
//    int temp=arr[0];
//    for(int i=1; i<n; i++)
//        arr[i-1] = arr[i];
//    arr[n-1] = temp;
//    printf("After left shifting the array elements are: ");
//    for(int i=0; i<n; i++)
//        printf("%d ", arr[i]);
//    printf("\n\n");

    /* Search an element from an array */
//    int value = 69;
//    for(int i=0; i<n; i++)
//    {
//        if (arr[i] == value)
//            printf("The value %d is found at idex %d\n", value, i);
//    }
//    printf("Can you print on found and not found\n");

    /* Printing each digit of a number */
//    int number = 4532, index = 0, digit, count = 0;
//    while (number > 0)
//    {
//        digit = number % 10;
//        arr[count++] = digit;
//        number = number/10;
//    }
//    for(int i=count-1; i>=0; i--)
//        printf("%d ", arr[i]);

}
