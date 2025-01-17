﻿using System;
using System.Collections.Generic;
using System.Text;
using System.Text.Json;

namespace Order_Accounting_System
{
    public class ProductsReader : BaseModelReader
    {
        public ProductsReader(string filename) : base(filename)
        {
        }

        public IEnumerable<Product> ReadAll()
        {
            if (IsOpened) Close();
            Product c;
            while ((c = ReadNext()) != null)
                yield return c;
        }

        public Product ReadNext()
        {
            if (!IsOpened) Open();
            var s = ReadLine();
            if (s == null)
                return null;
            return JsonSerializer.Deserialize<Product>(s);
        }
    }
}
