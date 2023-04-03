using System;
using System.Runtime.InteropServices;

namespace ConverterLib
{
    [ComVisible(true)]
    public class Math
    {
        public int Add(int x, int y)
        {
            return x + y;
        }

        public int Subtract(int x, int y)
        {
            return x - y;
        }
    }
}
