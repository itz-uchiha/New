// Encryption and Decryption

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char encrypt(char ch, int key) {
    if (ch >= 'a' && ch <= 'z') {
        return ((ch - 'a' + key) % 26) + 'a';
    }
    return ch;
}

char decrypt(char ch, int key) {
    if (ch >= 'a' && ch <= 'z') {
        return ((ch - 'a' - key + 26) % 26) + 'a';
    }
    return ch;
}

int main() {
    char message[100];
    int key;

    printf("Enter a sentence (lowercase letters only): ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';  // Remove newline

    printf("Enter key (number to shift): ");
    scanf("%d", &key);

    // Encrypt
    for (int i = 0; message[i] != '\0'; i++) {
        message[i] = encrypt(message[i], key);
    }
    printf("Encrypted: %s\n", message);

    // Decrypt
    for (int i = 0; message[i] != '\0'; i++) {
        message[i] = decrypt(message[i], key);
    }
    printf("Decrypted: %s\n", message);

    return 0;
}

