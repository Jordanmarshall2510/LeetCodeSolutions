int titleToNumber(char* columnTitle){
    int col = 0;

    for(size_t i = 0; i < strlen(columnTitle); i++){
        col *= 26;
        col += (columnTitle[i] - 'A') + 1;
    }

    return col;
}
