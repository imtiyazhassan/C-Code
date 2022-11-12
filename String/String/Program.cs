Console.WriteLine("Hello, World!");

string firstname = "Imtiyaz Hassan";
string lastname = "Ratul";
int age = 24;

string str = ""+firstname+" "+lastname+" and i am "+age+" ";

Console.WriteLine(str);
Console.WriteLine("{0} {1} and I am {2}",firstname, lastname, age);

Console.WriteLine("String Interpolation Better way of concate the string");
Console.WriteLine($"{firstname} {lastname} and i am {age}");

string str1 = $"{firstname} {lastname} and i am {age}";
Console.WriteLine(str1);

string joinstr = string.Concat(firstname, lastname);
Console.WriteLine(joinstr);

//verbatim string 
string s = @"This is a verbatim string \n that willn't create a new line.";
Console.WriteLine(s);

//Escaping Char
string ch;
ch = "Hello! \"What's up\"....";
Console.WriteLine(ch);

//length in string
string a;
int length;
a = "Hello From Microsoft";
length =  a.Length;
Console.WriteLine("String Length is : "+ length);

//concating the string;
string a1 = "c# ";
string b = "programming";
Console.WriteLine("Upper Case: "+       b.ToUpper());


bool res = str1.Equals(b);
Console.WriteLine("Compare Two String : {0}",res);

Console.WriteLine(b.IndexOf("r"));
Console.WriteLine("Insert in index : "+b.Insert(0,"Hey "));
Console.WriteLine("Insert in index : "+a1.Insert(0,"Welcome To "));

Console.WriteLine("remove string : " + b.Remove(4));

Console.WriteLine("Replace String : "+b.Replace('g', 'G'));
Console.WriteLine("Substring : "+a.Substring(1,4));
Console.WriteLine(b.ToCharArray());
Console.WriteLine(a.Trim(' '));