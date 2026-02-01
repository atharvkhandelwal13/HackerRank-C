#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // Declare variables ("Make the boxes")
    char ch;
    char s[100];
    char sen[100];

    // Read Input
    // Read a single character
    scanf("%c", &ch);
    
    // Read a word (Stop at space or newline)
    // Note: %s automatically skips leading whitespace/newlines
    scanf("%s", s);
    
    // CRITICAL STEP: Eat the leftover "\n" (Enter key)
    // The previous scanf stopped at the newline but left it in the buffer.
    // If we don't clear it, the next scanf will read it and stop immediately.
    scanf("\n");
    
    // Read the full sentence (Read until newline)
    scanf("%[^\n]%*c", sen);

    // Print Output
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}
