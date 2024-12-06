char* longestCommonPrefix(char** strs, int strsSize) {
    char* prefix = calloc(200, sizeof(char));
    unsigned int counter = 0;

    for (size_t i = 0; i < strlen(strs[0]); i++) {
        for (size_t j = 1; j < strsSize; j++) {
            if (strs[0][i] != strs[j][i]) {
                return prefix;
            }
        }

        prefix[counter] = strs[0][i];
        counter++;
    }

    return prefix;
}
