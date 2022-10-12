
// C++ program to find
// factorial of given number
#include <iostream>
using namespace std;

// Function to find factorial
// of given number
unsigned int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

long int factorial_loop(int x){
    if(x < 0){
        return -1;
    }
    else if(x == 0){
        return 1;
    }
    else{
        long int ans = 1;
        int n = x;
        while(n != 0){
            ans = ans*n;
            n--;
        }
        return ans;
    }
}

// Driver code
int main()
{
    int num = 5;
    cout << "Factorial of "
         << num << " is " << factorial(num) << endl;
    return 0;
}
