# Moje-projekty
Projekty studenckie 
sing System.Diagnostics.CodeAnalysis;

static bool CzyJestPierwsza(int x)
{

    if (x <= 1)
    {
        return false;

    }
    for (int i = 2; i <= Math.Sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}


static int IloscLiczbP(int a, int b )
{
    for (int i = a; i <= b; i++)

    {
        int ilosc = 0;


        if (CzyJestPierwsza(i))
        {
            ilosc++;
            Console.WriteLine(" Ilosc liczb pierwszych w podanym przedziale wynosi : {0}  ", ilosc);
        }

        return ilosc;

    }

}


Int32 a, b;

Console.WriteLine("Podaj liczbe z zakresu A do B");

Console.WriteLine("Podaj A: ");
a = int.Parse(Console.ReadLine());

Console.WriteLine("Podaj B: ");
b = int.Parse(Console.ReadLine());


int ilosc = IloscLiczbP(a, b);
Console.WriteLine(" Ilosc liczb pierwszych w podanym przedziale wynosi : {0}  ", ilosc);
