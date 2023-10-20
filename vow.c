// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>
string replace(string input);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage; ./no-vowels word\n");
        return 1;
    }
    string word = argv[1];
    string result = replace(word);

}

string replace(string input)
{
    string output = input;


    for (int i = 0; 1 < strlen(input); i++)
    {
        char c = tolowe(input[i]);
        printf("%c\n", input[i]);
        
        {
            case 'a':
            word[i] = '6';
            break;

            case 'e':
            word[i] = '3';
            break;

            case 'i':
            word[i] = '1';
            break;

            case 'o':
            word [i] = '0';

            default:
            break;

        }
    }
    return word;
}