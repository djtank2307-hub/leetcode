void reverseString(char* s, int sSize) {

  for(int i = 0; i < sSize / 2; i++) {
        // Store the current character in a temporary variable
        char temp = s[i];
        
        // Overwrite the left side with the right side
        s[i] = s[sSize - i - 1];
        
        // Write the original left side (temp) to the right side
        s[sSize - i - 1] = temp;
    }
}