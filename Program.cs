using System;

namespace MetodosConParametros
{
    public class MetodosConParametros
    {
        public static void Main(string[] args)
        {
            while (true)
            {
                Console.WriteLine("-----------");
                string primerNumero = Console.ReadLine();
            if (double.TryParse(primerNumero,out double primer_Numero))
            {
                Suma( primer_Numero , 0);
                Console.WriteLine("+ ");
                string segundoNumero = Console.ReadLine();
                if (double.TryParse(segundoNumero,out double segundo_Numero))
                {
                    Console.WriteLine("=");
                    Suma(primer_Numero , segundo_Numero);
                }
                else
                {
                    Console.WriteLine("Valor no procesable");
                }
            }
            else
            {
                Console.WriteLine("Valor no procesable");
            } 
            }
           
        }
        public static void Suma( double numero1 , double numero2)
        {
            double resultado;
            resultado = numero1 + numero2;
            if (numero1 > 0 && numero2 > 0)
            {
                Console.WriteLine(resultado);
            }
        }
    }
}
