#include<iostream>
using namespace std;

class Book
{
public:

    int bookID; 
    string bookName;
    string authorName;

    void getBookData()
    {
        cout << "Enter Book ID : ";
        cin >> bookID;

        cout << "Enter Book Name : ";
        cin >> bookName;

        cout << "Enter Author Name : ";
        cin >> authorName;
    }

    void displayBookData()
    {
        cout << "\nBook ID : " << bookID << endl;

        cout << "Book Name : " << bookName << endl;

        cout << "Author Name : " << authorName << endl;
    }
};


class Price : public Book
{
public:

    int price;
    int quantity;
    int total;

    void getPriceData()
    {
        cout << "\nEnter Price : ";
        cin >> price;

        cout << "Enter Quantity : ";
        cin >> quantity;
    }

    void calculatePrice()
    {
        total = price * quantity;
    }

    void displayPrice()
    {
        cout << "\nPrice : " << price << endl;

        cout << "Quantity : " << quantity << endl;

        cout << "Total Price : " << total << endl;
    }
};


class Stock : public Book
{
public:

    int totalBooks;
    int issuedBooks;
    int remainingBooks;

    void getStockData()
    {
        cout << "\nEnter Total Books : ";
        cin >> totalBooks;

        cout << "Enter Issued Books : ";
        cin >> issuedBooks;
    }

    void calculateStock()
    {
        remainingBooks = totalBooks - issuedBooks;
    }

    void displayStock()
    {
        cout << "\nTotal Books : "
             << totalBooks << endl;

        cout << "Issued Books : "
             << issuedBooks << endl;

        cout << "Remaining Books : "
             << remainingBooks << endl;
    }
};


class Member : public Book
{
public:

    int memberID;
    string memberName;

    void getMemberData()
    {
        cout << "\nEnter Member ID : ";
        cin >> memberID;

        cout << "Enter Member Name : ";
        cin >> memberName;
    }

    void displayMember()
    {
        cout << "\nMember ID : "
             << memberID << endl;

        cout << "Member Name : "
             << memberName << endl;
    }
};


class Fine : public Book
{
public:

    int lateDays;
    int fine;

    void getFineData()
    {
        cout << "\nEnter Late Days : ";
        cin >> lateDays;
    }

    void calculateFine()
    {
        fine = lateDays * 10;
    }

    void displayFine()
    {
        cout << "\nLate Days : "
             << lateDays << endl;

        cout << "Fine : "
             << fine << endl;
    }
};


int main()
{
    Price p;

    Stock s;

    Member m;

    Fine f;

    
    p.getBookData();

    
    p.getPriceData();

    p.calculatePrice();


    s.getStockData();

    s.calculateStock();


    m.getMemberData();

    
    f.getFineData();

    f.calculateFine();

    
    cout << "\n\nBook Details";

    p.displayBookData();

    cout << "\nPrice Details";

    p.displayPrice();

    cout << "\nStock Details";

    s.displayStock();

    cout << "\nMember Details";

    m.displayMember();

    cout << "\nFine Details"; 

    f.displayFine();

    return 0;
}
