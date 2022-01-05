float a, b, c, delta, x1, x2;
if (a == 0){
    if (b == 0){
        if (c == 0){
            cout << "Phuong trinh vo so nghiem" << endl;
        }else{
            cout << "Phuong trinh vo nghiem" << endl;
        }
    }else{
        cout << "Phuong trinh co 1 nghiem: x = " << -c / b << endl;
    }
}else{
    delta = b * b - 4 * a * c;
    if (delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Nghiem thu nhat x1 = " << x1 << endl;
        cout << "Nghiem thu hai x2 = " << x2 << endl;
    }else if (delta == 0){
        x = (-b / (2 * a));
        cout << "Phuong trinh co nghiem kep: x1 = x2 = " x << endl;
    }else{
        cout << "Phuong trinh vo nghiem" << endl;
    }
}