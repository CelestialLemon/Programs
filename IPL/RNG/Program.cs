using System;
using System.IO;

namespace Random_Number_Generator
{
    class Program
    {
        static void Main(string[] args)
        {
            int randomNumber;
            Random myRandomObject = new Random();
            StreamWriter fileWriter = new StreamWriter("E:\\Programs\\IPL\\RandomNumbers.txt");
            for (int i = 0; i < 100; i++)
            {
                randomNumber = myRandomObject.Next(1, 101);
                fileWriter.WriteLine(randomNumber);

            }

            fileWriter.Close();
            Console.WriteLine("Random numbers generated");

        }
    }
}
