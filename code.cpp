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
    std::ofstream outf{ "primes.txt" };
    
    if (!outf)
    {
        std::cerr << "Uh oh, Sample.txt could not be opened for writing!\n";
        return 1;
    }
    
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
            primeCount++;
        }
    }
    
    outf << primeCount << "  " << primeSum << "\n";
    for (int k = 1; k <= 10; k++)
    {
        primeMax = (primeCount-1)%10;
        outf << primeList[primeMax] << " ";
        primeMax++;
        if(primeMax > 9)
            primeMax = 0;
    }
    return 0;
}
