#include <iostream>
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main()
{
    int primeCount = 0;
    int primeSum = 0;
    int primeList[10];
    for (int n = 2; i <= 1000; i++)
    {
        bool primeness = isPrime(n);
        if(primeness)
        {
            primeList[n%10] = n;
            primeSum += n;
            primecount++;
        }
    }
    return 0;
}
