using System;
using System.Collections.Generic;
using System.Linq;

namespace LuoguCode
{
    class P1308
    {
        static void Main(string[] args)
        {
            var word = Console.ReadLine().ToLower();
            var article = Console.ReadLine().ToLower();

            var array = article.Split(" ");
            var list = new List<string>(array);

            var results = from l in list
                          where l == word
                          select l;
            if (results.Count() > 0)
            {
                Console.WriteLine($"{results.Count()} {article.IndexOf(word)}");
            }
            else
            {
                Console.WriteLine("-1");
            }
        }
    }
}
