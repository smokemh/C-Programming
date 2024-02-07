//  (Enforcing Privacy with Cryptography) The explosive growth of Internet communications and data storage on Internet-connected computers has greatly increased privacy concerns. The field of cryptography is concerned with coding data to make it difficult (and hopefully—with the most advanced schemes—impossible) for unauthorized users to read. In this exercise you’ll investigate a simple scheme for encrypting and decrypting data. A company that wants to send data over the Internet has asked you to write a program that will encrypt it so that it may be transmitted more securely. All the data is transmitted as four-digit integers. Your application should read a four-digit integer entered by the user and encrypt it as follows: Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10. Then swap the first digit with the third, and swap the second digit with the fourth. Then print the encrypted integer. Write a separate application that inputs an encrypted four-digit integer and decrypts it (by reversing the encryption scheme) to form the original number. [Optional reading project: Research “public key cryptography” in general and the PGP (Pretty Good Privacy) specific public key scheme. You may also want to investigate the RSA scheme, which is widely used in industrial-strength applications.]

////////////////////////////
//  Encryption Program    //
////////////////////////////

#include <stdio.h>

int encrypt(int);

int main()
{
    int originalNum, encryptedNum;

    printf("Enter a four-digit integer: ");
    scanf("%d", &originalNum);

    encryptedNum = encrypt(originalNum);

    printf("Encrypted integer: %04d\n", encryptedNum);

    return 0;
}

int encrypt(int num)
{
    int encrypted = 0;
    int digits[4];

    // Split into digits and encrypt
    for (int i = 3; i >= 0; i--)
    {
        digits[i] = (num % 10 + 7) % 10;
        num /= 10;
    }

    // Swap the digits
    encrypted = digits[2] * 1000 + digits[3] * 100 + digits[0] * 10 + digits[1];

    return encrypted;
}

////////////////////////////
//  Decryption Program    //
////////////////////////////

#include <stdio.h>

int decrypt(int);

int main()
{
    int encryptedNum, decryptedNum;

    printf("Enter an encrypted four-digit integer: ");
    scanf("%d", &encryptedNum);

    decryptedNum = decrypt(encryptedNum);

    printf("Decrypted integer: %04d\n", decryptedNum);

    return 0;
}

int decrypt(int num)
{
    int decrypted = 0;
    int digits[4];

    // Split into digits
    for (int i = 3; i >= 0; i--)
    {
        digits[i] = num % 10;
        num /= 10;
    }

    // Decrypt the digits: Reverse the encryption logic
    for (int i = 0; i < 4; i++)
    {
        digits[i] = (digits[i] + 3) % 10; // Reverse of adding 7 and modulo 10
    }

    // Swap the digits back
    decrypted = digits[2] * 1000 + digits[3] * 100 + digits[0] * 10 + digits[1];

    return decrypted;
}

// How It Works

// Encryption:
// Each digit of the input number is replaced with (digit + 7) % 10.The first digit is swapped with the third, and the second digit is swapped with the fourth to get the encrypted number.

// Decryption:
// The process reverses the encryption steps. Since (digit + 7) % 10 is used for encryption, and we need to reverse this, we use (digit + 3) % 10 for decryption. This works because adding 3 undoes the original addition of 7 when considering modulo 10 arithmetic (since 10 - 7 = 3). Digits are swapped back to their original positions.