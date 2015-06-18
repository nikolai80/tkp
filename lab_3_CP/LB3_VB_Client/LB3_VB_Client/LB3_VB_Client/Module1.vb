Module Module1

    Sub Main()
        Dim obj As Object
        Dim i As Long
        Dim Result As Long
        Dim Start As DateTime = DateTime.Now
        ' Создание объекта с указанным ProgId
        obj = CreateObject("Lb3_AutoSvr.CoMyMath.1")
        'Result = obj.Fun91()
        Result = obj.Fun91(10, 22)
        For i = 1 To 5
            Result += obj.Fun91(10, 22)
            Console.WriteLine("Fun91>> iteration:{1} result:{0}", Result, i)
        Next
        Result = obj.Fun92(10, 22, 33)
        For i = 1 To 5
            Result += obj.Fun92(10, 22, 33)
            Console.WriteLine("Fun92>> iteration:{1} result:{0}", Result, i)
        Next
        Result = obj.Fun93(10)
        For i = 1 To 5
            Result += obj.Fun93(10)
            Console.WriteLine("Fun93>> iteration:{1} result:{0}", Result, i)
        Next
        obj = Nothing
        Console.ReadKey()
    End Sub

End Module
