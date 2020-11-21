using System;
using System.Collections.Generic;

namespace LuoguCode
{
    class P1042
    {
        static void Main(string[] args)
        {
            var competitions = new List<char>();

            while (true)
            {
                char c = (char)Console.Read();
                if (c == 'E')
                {
                    break;
                }
                else if (c == 'W' || c == 'L')
                {
                    competitions.Add(c);
                }
            }

            var win = 0;
            var lose = 0;
            foreach (var c in competitions)
            {
                if (c == 'W')
                {
                    win++;
                }
                else if (c == 'L')
                {
                    lose++;
                }

                if ((win >= 11 || lose >= 11) && (Math.Abs(win - lose) >= 2))
                {
                    Console.WriteLine($"{win}:{lose}");
                    win = 0;
                    lose = 0;
                }
            }

            Console.WriteLine($"{win}:{lose}");
            win = 0;
            lose = 0;

            Console.WriteLine();

            foreach (var c in competitions)
            {
                if (c == 'W')
                {
                    win++;
                }
                else if (c == 'L')
                {
                    lose++;
                }

                if ((win >= 21 || lose >= 21) && (Math.Abs(win - lose) >= 2))
                {
                    Console.WriteLine($"{win}:{lose}");
                    win = 0;
                    lose = 0;
                }
            }
            if (win + lose != 0)
            {
                Console.WriteLine($"{win}:{lose}");
            }
            if (competitions.Count == 0)
            {
                Console.WriteLine("0:0");
            }
        }
    }
}