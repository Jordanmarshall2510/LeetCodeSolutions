/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** returnArray = calloc(n, sizeof(*returnArray));

    for (size_t i = 1; i <= n; i++) {
        if (((i % 3) == 0) && ((i % 5) == 0)) {
            returnArray[i - 1] = malloc(9 * sizeof(char));
            strcpy(returnArray[i - 1], "FizzBuzz");
        } else if ((i % 3) == 0) {
            returnArray[i - 1] = malloc(5 * sizeof(char));
            strcpy(returnArray[i - 1], "Fizz");
        } else if ((i % 5) == 0) {
            returnArray[i - 1] = malloc(5 * sizeof(char));
            strcpy(returnArray[i - 1], "Buzz");
        } else {
            returnArray[i - 1] = malloc(6 * sizeof(char));
            sprintf(returnArray[i - 1], "%d", i);
        }
    }

    *returnSize = n;

    return returnArray;
}
