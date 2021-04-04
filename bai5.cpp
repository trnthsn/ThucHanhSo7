void print(const Complex &c)
{
    if (c.a == 0 && c.b == 0)
    {
        cout << 0;
        cout << endl;
        return;
    }
    else if (c.a == 0 || c.b == 0)
    {
        if (c.a == 0)
        {
            if (c.b == 1)
                cout << "i" << endl;
            else
                cout << "-" << "i" << endl;
        }
        else
            cout << c.a << endl;
        return;
    }
    else if (c.b == 1 || c.b == -1)
    {
        if (c.b == 1)
            cout << c.a << "+" << "i" << endl;
        else
            cout << c.a << "-" << "i" << endl;
        return;
    }
    if (c.b > 0)
        cout << c.a << "+" << c.b << "i" << endl;
    else if (c.b < 0)
        cout << c.a << c.b << "i" << endl;
}

int compare(const Complex &c1, const Complex &c2)
{
    if (c1.a * c1.a + c1.b * c1.b == c2.a * c2.a + c2.b * c2.b)
        return 0;
    if (c1.a * c1.a + c1.b * c1.b > c2.a * c2.a + c2.b * c2.b)
        return 1;
    if (c1.a * c1.a + c1.b * c1.b < c2.a * c2.a + c2.b * c2.b)
        return -1;
}

Complex add(const Complex &c1, const Complex &c2)
{
    Complex temp = {c1.a + c2.a, c1.b + c2.b};
    return temp;
}
