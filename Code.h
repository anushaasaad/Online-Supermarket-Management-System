#pragma once
#ifndef CODE_H
#define CODE_H
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
class Customer
{
    string cust_name;
    string CNIC;
    string address;
    string email;
    string mobno;
public:
    Customer()
    {
    }
    Customer(string n, string cnic, string add, string em, string mob)
    {
        cust_name = n;
        CNIC = cnic;
        address = add;
        email = em;
        mobno = mob;
    }
    void writedetails()
    {
        fstream file;
        file.open("Customer History.dat", ios::out | ios::binary | ios::app);
        file.write((char*)this, sizeof(*this));
        file.close();
    }
    
};
class Item
{
protected:
    char ID[5];
    int stock;
    int cost;
    static int bill;
public:
    void UpdateBill(int b)
    {
        bill = bill + b;
    }
    int GetBill()
    {
        return bill; 
    }
     char* getID()  
    {
        return &ID[0];
    }

};
class Apple : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("APP01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Apple()
    {}
    Apple(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    }; 
    int getcost()
    {
        return cost; 
    }
    int getstock()
    {
        return stock; 
    }
    void updatestock(int s)
    {
        stock = s; 
    }
    void updatecost(int c)
    {
        cost = c; 
    }

};
class Potato : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("POT01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Potato()
    {}
    Potato(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;

    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Shampoo : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("SHA01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Shampoo()
    {}
    Shampoo(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Toothpaste : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("PAS01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Toothpaste()
    {}
    Toothpaste(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s; 
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Lentils : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("LEN01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Lentils()
    {}
    Lentils(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Rice : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("RIC01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Rice()
    {}
    Rice(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Oil : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("OIL01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Oil()
    {}
    Oil(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Flour : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("FLO01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Flour()
    {}
    Flour(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Egg : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("EGG01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Egg()
    {}
    Egg(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};

class Butter : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("BUT01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Butter()
    {}
    Butter(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Cheese : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("CHE01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Cheese()
    {}
    Cheese(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Banana : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("BAN01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Banana()
    {}
    Banana(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock; 
    }

};
class Carrots : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("CAR01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Carrots()
    {}
    Carrots(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Soap : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("SOA01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Soap()
    {}
    Soap(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Toothbrush : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("BRU01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Toothbrush()
    {}
    Toothbrush(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }
};
class Chicken : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("CHI01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Chicken()
    {}
    Chicken(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }

};
class Milk : public Item
{
public:
    void writeuser()
    {
        fstream fp;
        fp.open("MIL01.dat", ios::out | ios::binary);
        fp.write((char*)this, sizeof(*this));
        fp.close();
    }
    Milk()
    {}
    Milk(string id, int s, int c)
    {
        for (int i = 0; i < 5; i++)
            ID[i] = id[i];
        stock = s;
        cost = c;
    }
    void decrementstock()
    {
        stock = stock - 1;
    };
    int getcost()
    {
        return cost;
    }
    void updatestock(int s)
    {
        stock = s;
    }
    void updatecost(int c)
    {
        cost = c;
    }
    int getstock()
    {
        return stock;
    }

};
#endif

