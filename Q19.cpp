#include <iostream>
using namespace std;
void scanArray(char arr[], int n);
int countAlphabets(char arr[], int n);
int main()
{
    /* Q19. Scan array of 6 characters. Count alphabets in array.
       Use of function for each task expected. */

    char arr[6];

    cout << "Enter 6 characters:" << endl;
    scanArray(arr, 6);

    int result = countAlphabets(arr, 6);

    cout << "Number of alphabets = " << result << endl;

    return 0;
}
void scanArray(char arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int countAlphabets(char arr[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
        {
            count++;
        }
    }

    return count;
}

