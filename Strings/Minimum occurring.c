#include <stdio.h>
#define size 100
#define chars 255

int IndexOf(char *str, char letter);

int main() {
    char str[size];
    printf("Enter a string: ");
    gets(str);
    int freq[chars];
    for(int i=0;i<chars;i++){
        freq[i]=0;
    }
    int i=0;
    while(str[i] != '\0')
    {
        int ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
    int min =0;
    for(int i=0;i<chars;i++){
        if(freq[i] != 0)
        {
            if(freq[min] == 0 || freq[i] < freq[min])
                min = i;
        }
    }
    printf("'%c' occurs %d times", min, freq[min]);
    return 0;
}
