#include <stdio.h>

/* Prototypes of the functions. */
void printArray(int array[], int n);
void withRecursion(int sourceArray[], int targetArray[], int sourceSize, int targetSize);
void withIteration(int sourceArray[], int targetArray[], int sourceSize, int targetSize);
void copyArray(int sourceArray[], int targetArray[], int size);
void printResult(int array[]);

int main() {
    int n;
    printf("Enter the size >> ");
    scanf("%d", &n);
    int array[n]; 
    
    int i;
    for(i=0; i<n; i++)
        array[i] = i+1;

    int newArray[n/2]; // The size of new array's (which'll contain needed elements of source array) will be always half of the source array's.
    
    printf("\nTesting Recursive Function:\n");
    printArray(array, n); 
    withRecursion(array, newArray, n, n/2); // Testing recursive function.
    printf("Testing Iteration Function:\n");
    printArray(array, n); 
    withIteration(array, newArray, n, n/2); // Testing iteration function.
    
    return 0;
}
void withRecursion(int sourceArray[], int targetArray[], int sourceSize, int targetSize) {
    static int numberOfCalls = 0;
    if (sourceSize != 1) { // Checks base condition
    
        if (numberOfCalls%2 == 0) { // Removes Right to Left, copies the needed array elements to corresponding indexes.
            int i, j;
            for(i=0, j=1; i<targetSize && j<sourceSize; i++, j+=2)
                targetArray[i] = sourceArray[j];
        } else { // Removes Left to Right, copies the needed array elements to corresponding indexes.
            int i, j;
            for(i=targetSize-1, j=sourceSize-2; i>=0 && j>=0; i--, j-=2) 
                targetArray[i] = sourceArray[j];
        }
        numberOfCalls++;
        printArray(targetArray, targetSize);
        int targetArray2[targetSize/2]; // Created new array with the size half of the targetArray, in next iteration this one will be target.
        withRecursion(targetArray, targetArray2, targetSize, targetSize/2);
        
    } else { // Prints result
        printResult(sourceArray);
    }
        
}
void withIteration(int sourceArray[], int targetArray[], int sourceSize, int targetSize) {
    int count;
    for(count=0; sourceSize!=1; count++, targetSize/=2) {
        int newSourceArray[sourceSize], newTargetArray[targetSize];
        if(count == 0) {
            copyArray(sourceArray, newSourceArray, sourceSize);
            copyArray(targetArray, newTargetArray, targetSize);
        }
        if (count%2 == 0) { // Removes Right to Left, copies the needed array elements to corresponding indexes.
            int i, j;
            for(i=0, j=1; i<targetSize && j<sourceSize; i++, j+=2)
                newTargetArray[i] = newSourceArray[j];
        } else { // Removes Left to Right, copies the needed array elements to corresponding indexes.
            int i, j;
            for(i=targetSize-1, j=sourceSize-2; i>=0 && j>=0; i--, j-=2) 
                newTargetArray[i] = newSourceArray[j];
        }
        printArray(newTargetArray, targetSize);    
        
        sourceSize/=2;
        if(sourceSize==1)
            printResult(newTargetArray);
    }
    
}

/* Copies the array. */
void copyArray(int sourceArray[], int targetArray[], int size) {
    int i;
    for(i=0; i<size; i++)
        targetArray[i] = sourceArray[i];
}

/* Prints the content of array. */
void printArray(int array[], int n) {
    printf("Array >> [");
    int i;
    for(i=0; i<n; i++) 
        if (i == n-1) 
            printf("%d]\n", array[i]);
        else
            printf("%d, ", array[i]);
}

/* Finds and prints the result. */
void printResult(int array[]) {
    printf("Output >> %d\n\n", array[0]);
}