using System;
using System.Linq;

namespace LuoguCode
{
    class P1553
    {
        static void Main(string[] args)
        {
            var num = Console.ReadLine();
            var fin = string.Empty;

            if (num.Contains("."))
            {
                var arr = num.Split(".");
                fin = Reverse(arr[0]) + "." + Reverse(arr[1], true);
            }
            else if (num.Contains("/"))
            {
                var arr = num.Split("/");
                fin = Reverse(arr[0]) + "/" + Reverse(arr[1]);
            }
            else if (num.Contains("%"))
            {
                fin = Reverse(num.Replace("%", "")) + "%";
            }
            else
            {
                fin = Reverse(num);
            }

            Console.WriteLine(fin);
        }

        private static string Reverse(string str, bool lastZero = false)
        {
            var chars = str.Reverse();
            var result = new string(chars.ToArray());
            while (result.StartsWith("0"))
            {
                result = result.Remove(0, 1);
            }
            if (lastZero)
            {
                while (result.EndsWith("0"))
                {
                    result = result.Remove(result.Length - 1, 1);
                }
            }
            if (result == "")
            {
                result = "0";
            }
            return result;
        }
    }
}
