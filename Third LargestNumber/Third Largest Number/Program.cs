
int i, n;
n = int.Parse(Console.ReadLine());
int[] arr = new int[n];


//string s = Console.ReadLine();
//string[] strarr = s.Split(' ');
for (i = 0; i < n; i += 1)
{
    //arr[i] = int.Parse(strarr[i]);
    arr[i] = int.Parse(Console.ReadLine());
}

//int [] arr = { 44,11,22,33,55 };


int largest = 0, secondLargest , thirdLargest ;


for (i = 0; i < arr.Length; i++)
{
    if (arr[i] > largest)
    {
        secondLargest = largest;
        largest = arr[i];

    }
}
secondLargest = int.MinValue;
for (i = 0; i < arr.Length; i++)
{
     if (arr[i] > secondLargest && arr[i] < largest)
    {
        thirdLargest = secondLargest;
        //Console.WriteLine("3rd largest:  " + thirdLargest);
        secondLargest = arr[i];

    }
}

thirdLargest = int.MinValue;

for (i = 0; i < arr.Length; i++)
{ 
     if (arr[i] > thirdLargest && arr[i] <secondLargest)
    {
        thirdLargest = arr[i];
    }
}

Console.WriteLine();

Console.WriteLine("Largest : " + largest);
Console.WriteLine("second Largest : " + secondLargest);
Console.WriteLine("Third Largest : " + thirdLargest);
