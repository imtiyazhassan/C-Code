using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
  
namespace Task1
{
    public class Product
    {
        private string name;
        private double price;
        private string description;
        private string color;


        public Product() : this("Ram",3000)
        {

        }

        public Product(string name, double price)
        {
            this.name = name;
            if (price < 1000)
                price = 1001;
            else
                this.price = price;
        }

        public Product (string color)
        {
            this.color = color;
        }


        public string Name { get; set; }
        public double Price { get; set; }
        public string Description { get; set; }
        public string Color { get; set; }


        public void show(string name, double price)
        {
            name = Name;
            price = Price;
            Console.WriteLine(name);
            Console.WriteLine(price);
        }

        public void Show()
        {
            
            Console.WriteLine(Name);
            Console.WriteLine("Product Price:{0}", Price);
        }
    }
}
