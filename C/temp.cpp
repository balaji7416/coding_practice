#include<stdio.h>

int main() {
    char array[100];
    int vowel_count = 0, consonent_count = 0, alpha_count = 0, digit_count = 0, special_count = 0, space_count = 0;

    printf("Enter a word or sentence here: ");
    fgets(array, sizeof(array), stdin);

    char vowel[] = {'a', 'e', 'i', 'o', 'u'};

    for(int i = 0; array[i] != '\0'; i++) {
        if((array[i] >= 'a' && array[i] <= 'z') || (array[i] >= 'A' && array[i] <= 'Z')) {
            alpha_count += 1;  // Count alphabets

            // Convert to lowercase for easier comparison
            char ch = (array[i] >= 'A' && array[i] <= 'Z') ? array[i] + 32 : array[i];

            // Check if the character is a vowel
            int is_vowel = 0;
            for(int j = 0; j < 5; j++) {
                if(ch == vowel[j]) {
                    is_vowel = 1;
                    break;
                }
            }

            // Update vowel and consonant counts
            if(is_vowel)
                vowel_count += 1;
            else
                consonent_count += 1;
        }
        else if(array[i] >= '0' && array[i] <= '9') {
            digit_count += 1;  // Count digits
        }
        else if(array[i] == ' ') {
            space_count += 1;  // Count spaces
        }
        else {
            special_count += 1;  // Count special characters, excluding spaces
        }
    }

    // Output the counts
    printf("No. of alphabets: %d\n", alpha_count);
    printf("    No. of consonants: %d\n", consonent_count);
    printf("    No. of vowels: %d\n", vowel_count);
    printf("No. of digits: %d\n", digit_count);
    printf("No. of special characters: %d\n", special_count);
    printf("No. of spaces: %d\n", space_count);

    return 0;
}

