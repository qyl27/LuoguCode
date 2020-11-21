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
                var index = 0;
                if (article.IndexOf(word) - 1 >= 0
                    && article[article.IndexOf(word) - 1] == ' '
                    && article.IndexOf(word) + word.Length >= article.Length
                    && article[article.IndexOf(word) + word.Length] == ' ')
                {
                    index = article.IndexOf(word);
                }
                else
                {
                    // Fixme
                }

                Console.WriteLine($"{results.Count()} {index}");
            }
            else
            {
                Console.WriteLine("-1");
            }
        }
    }
}
