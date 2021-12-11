float penjumlahan(double x,double y)
{
    float tambah;
    tambah=x+y;
    return tambah;
}
float pengurangan(double x,double y)
{
    float kurang;
    kurang=x-y;
    return kurang;
}
float ratarata(double x,double y)
{
    float rata;
    rata=(x+y)/2;
    return rata;
}
float pembagian(double x,double y)
{
    float bagi;
    bagi=x/y;
    return bagi;
}
float sinus(double x)
{
    float sin;
    if (x==90)
    {
        sin=1;
    } else if (x>=1&&x<=89)
    {
        sin=x*0.017452406437284;
    } else if (x==180)
    {
        sin=0;
    } else if (x>91&&x<=179)
    {
        sin=x*0.017452406437284;
    } else if (x==270)
    {
        sin=-1;
    } else if (x>=181&&x<=269)
    {
        sin=x*0.017452406437284;
    } else if (x>=271&&x<=359)
    {
        sin=x*0.017452406437284;
    } else
    {
        sin=0;
    }

    return sin;
}
float cosinus(double x)
{
    float cos;
    if (x==90)
    {
        cos=0;
    } else if (x>=1&&x<=89)
    {
        cos=(x*3.14)/90;
    } else if (x==180)
    {
        cos=-1;
    } else if (x>91&&x<=179)
    {
        cos=(x*3.14)/180;
    } else if (x==270)
    {
        cos=0;
    } else if (x>=181&&x<=269)
    {
        cos=(x*3.14)/270;
    } else if (x>=271&&x<=359)
    {
        cos=(x*3.14)/360;
    } else
    {
        cos=1;
    }
    return cos;
}
float tangen(double x)
{
    float tan;
    if (x==90||x==270)
    {
        tan=0;
    }
    else
    {
        tan=(x/51.99);
    }
    return tan;
}
float pangkat(double x, double y)
{
    float i=1,hsl=1;
    for(i=1;i<=y;i++)
    {
        if (y==0)
        {
            return 1;
        } else
        {
          return x *pangkat(x,y-1);
        }
    }
    return hsl;
}
float akar(double x)
{
    if(x<0)
    {
        return 0;
    } if (x==0||x==1)
    {
        return x;
    }
    int l=1, u=x;
    int akars = (l+(u-l))/2;
    while(akars>x/akars || akars+1<=x/(akars+1))
    {
        if(akars> x/akars)
        {
            u=akars;

        } else
        {
            l=x;
        }
        akars=(l+(u-l))/2;
    }
    return akars;
}
