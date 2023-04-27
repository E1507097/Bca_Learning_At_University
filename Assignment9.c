//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1


  #define MAX_SIZE 100

int main()
{
    char name[MAX_SIZE];
    int freq[26] = {0}; // Array to store frequency of each letter
    
    printf("Enter your name: ");
    fgets(name, MAX_SIZE, stdin);
    
    int len = strlen(name);
    
    // Traverse through each character of the name
    for(int i = 0; i < len; i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            freq[name[i] - 'a']++; // Increment frequency of the corresponding letter
        }
        else if(name[i] >= 'A' && name[i] <= 'Z')
        {
            freq[name[i] - 'A']++; // Increment frequency of the corresponding letter
        }
    }
    
    // Display the frequency of each letter
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] != 0)
        {
            printf("%c - %d\n", 'a' + i, freq[i]);
        }
    }
  return 0;
}
