using System;

class PrimeNumbers
{
    static void Main(string[] args)
    {
        Console.Write("Enter the starting number: ");
        int start = int.Parse(Console.ReadLine());

        Console.Write("Enter the ending number: ");
        int end = int.Parse(Console.ReadLine());

        Console.WriteLine($"Prime numbers between {start} and {end}:");
        
        for (int num = start; num <= end; num++)
        {
            if (IsPrime(num))
            {
                Console.WriteLine(num);
            }
        }
    }

    static bool IsPrime(int number)
    {
        if (number <= 1)
        {
            return false; // Numbers less than 2 are not prime
        }

        for (int i = 2; i <= Math.Sqrt(number); i++)
        {
            if (number % i == 0)
            {
                return false; // Divisible by a number other than 1 and itself
            }
        }

        return true; // Number is prime
    }
}
