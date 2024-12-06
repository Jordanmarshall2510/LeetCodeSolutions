int scoreOfString(char* s) {
    unsigned int score = 0;

    for (size_t i = 0; (i < strlen(s)) && (s[i + 1] != 0); i++) {
        score += abs(s[i] - s[i + 1]);
    }

    return score;
}
