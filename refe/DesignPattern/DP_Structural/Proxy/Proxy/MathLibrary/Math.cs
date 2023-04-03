using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace MathLibrary
{
    public interface BaseMath
    {
        int Add(int x, int y);
        int Subtract(int x, int y);
    }
    public class Math : BaseMath
    {
       // [ComVisible(true)]
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
