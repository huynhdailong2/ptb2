float a, b, c, delta, x1, x2;
if (a == 0){
    if (b == 0){
        if (c == 0){
            Console.WriteLine("Phuong trinh vo so nghiem");
        }else{
            Console.WriteLine("Phuong trinh vo nghiem");
        }
    }else{
        Console.WriteLine("Phuong trinh co 1 nghiem: x = {0}", (-c / b));
    }
}else{
    delta = b * b - 4 * a * c;
    if (delta > 0){
        x1 = (float)((-b + Math.Sqrt(delta)) / (2 * a));
        x2 = (float)((-b - Math.Sqrt(delta)) / (2 * a));
        Console.WriteLine("Phuong trinh co 2 nghiem la: x1 = {0} và x2 = {1}", x1, x2);
    }else if (delta == 0){
        x = (-b / (2 * a));
        Console.WriteLine("Phuong trinh co nghiem kep la: x1 = x2 = {0} ", x);
    }else{
        Console.WriteLine("Phuong trinh vo nghiem");
    }
}