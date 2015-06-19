using System;
using System.ComponentModel;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.ComTypes;
using System.Reflection;
using System.Collections.Generic;
using System.Linq;
using System.Text;


namespace LB3_Csharp_Client
{
    class Program
    {
        static void Main(string[] args)
        {
            Type comType = Type.GetTypeFromProgID("Lb3_AutoSvr.CoMyMath.1");
            object comObj = Activator.CreateInstance(comType);
            
            //набор передаваемых параметров
            object[] param = new object[2];
            param[0] = 100;
            param[1] = 22;
            // вызываемый метод
            double result = 0;
            result = (double)comType.InvokeMember("Fun91", BindingFlags.InvokeMethod, null, comObj, param);
            Console.WriteLine("Fun91>> {0}", result);

            //набор передаваемых параметров
            object[] param1 = new object[3];
            param1[0] = 100;
            param1[1] = 22;
            param1[2] = 100;
            // вызываемый метод
            int res = 0;
            res = (int)comType.InvokeMember("Fun92", BindingFlags.InvokeMethod, null, comObj, param1);
            Console.WriteLine("Fun92>> {0}", res);

            //набор передаваемых параметров
            object[] param2 = new object[1];
            param2[0] = 100;
            // вызываемый метод
            result = 0;
            result = (double)comType.InvokeMember("Fun93", BindingFlags.InvokeMethod, null, comObj, param2);
            Console.WriteLine("Fun93>> {0}", result);
            Console.ReadKey();

        }
    }
}
