bool isPalindrome(int x) {
    if(x < 0)
    {
        return false;
    }

    char* numString = malloc(100 * sizeof(char));
    sprintf(numString, "%d", x);
    unsigned int len = strlen(numString);
    
    for(unsigned int i = 0; i < len; i++)
    {
        if(numString[i] != numString[(len - 1)-i])
        {
            return false;
        }
    } 

    return true;
}
