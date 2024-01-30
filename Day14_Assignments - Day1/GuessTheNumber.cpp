#include <iostream>
using namespace std;
// Forward declaration of guess API.
int guess(int num);

int guessNumber(int n)
{
    int start = 1, end = n, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int pos = guess(mid);
        if (pos == 0)
            return mid;
        if (pos == -1)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

// Implementation of guess function (replace this with the actual implementation)
int guess(int num)
{
    // Example: Assume the picked number is 6
    int pickedNumber = 7;
    if (num < pickedNumber)
        return 1; // num is lower than the picked number
    else if (num > pickedNumber)
        return -1; // num is higher than the picked number
    else
        return 0; // num is equal to the picked number
}

int main()
{
    // Example usage
    int pickedNumber = 6;                // You can change this to any desired picked number
    int guessedNumber = guessNumber(10); // You can change the range accordingly
    if (guessedNumber == pickedNumber)
        cout << "Congratulations! You guessed the correct number: " << guessedNumber << endl;
    else
        cout << "Oops! Wrong guess. The correct number was: " << pickedNumber << endl;

    return 0;
}
