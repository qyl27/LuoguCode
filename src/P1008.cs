using System;
using System.Collections.Generic;

namespace LuoguCode
{
    class P1008
    {
        public static void Main(string[] args)
        {
            List<Tuple<int, int, int>> list = new List<Tuple<int, int, int>>();
            int[] numbers = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

            foreach (var n in numbers)
            {
                foreach (var o in numbers)
                {
                    if (o == n)
                    {
                        continue;
                    }

                    foreach (var p in numbers)
                    {
                        if (p == o || p == n)
                        {
                            continue;
                        }

                        foreach (var q in numbers)
                        {
                            if (q == p || q == o || q == n)
                            {
                                continue;
                            }

                            foreach (var r in numbers)
                            {
                                if (r == q || r == p || r == o || r == n)
                                {
                                    continue;
                                }

                                foreach (var s in numbers)
                                {
                                    if (s == r || s == q || s == p || s == o || s == n)
                                    {
                                        continue;
                                    }

                                    foreach (var t in numbers)
                                    {
                                        if (t == s || t == r || t == q || t == p || t == o || t == n)
                                        {
                                            continue;
                                        }

                                        foreach (var u in numbers)
                                        {
                                            if (u == t || u == s || u == r || u == q || u == p || u == o || u == n)
                                            {
                                                continue;
                                            }

                                            foreach (var v in numbers)
                                            {
                                                if (v == u || v == t || v == s || v == r || v == q || v == p || v == o || v == n)
                                                {
                                                    continue;
                                                }

                                                list.Add(new Tuple<int, int, int>(n * 100 + o * 10 + p, q * 100 + r * 10 + s, t * 100 + u * 10 + v));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

            foreach (var l in list)
            {
                if (l.Item1 * 2 == l.Item2 && l.Item1 + l.Item2 == l.Item3)
                {
                    Console.WriteLine($"{l.Item1} {l.Item2} {l.Item3}");
                }
            }
        }
    }
}
