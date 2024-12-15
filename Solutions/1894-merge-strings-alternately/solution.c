

char* mergeAlternately(char* word1, char* word2) {
    unsigned int mergeIndex = 0, wordIndex = 0;
    unsigned int mergeSize = strlen(word1) + strlen(word2);

    char* merged = malloc((mergeSize + 1) * sizeof(char));

    while((wordIndex < strlen(word1)) || (wordIndex < strlen(word2)))
    {
        if (wordIndex < strlen(word1)) {
            merged[mergeIndex] = word1[wordIndex];
            mergeIndex++;
        }

        if (wordIndex < strlen(word2)) {
            merged[mergeIndex] = word2[wordIndex];
            mergeIndex++;
        }

        wordIndex++;
    }

    merged[mergeIndex] = '\0';

    return merged;
}
