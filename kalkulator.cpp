#include "kalkulator.h"
#include "ui_kalkulator.h"

Kalkulator::Kalkulator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Kalkulator)
{
    ui->setupUi(this);  //okienko



    tekst = new QTextEdit(ui->ramka); // stworzenie edytora tekstu
    tekst->setGeometry(QRect(35, 20, 400, 50));        //ustawianie polozenia edytora

    tekst2 = new QTextEdit(ui->ramka); // stworzenie edytora tekstu
    tekst2->setGeometry(QRect(35, 90, 400, 30));        //ustawianie polozenia edytora



}

Kalkulator::~Kalkulator()
{
    delete ui;
}

void Kalkulator::on_cyfra7_clicked() //nie zwraca nic
{

    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + siedem; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + siedem; // zlepienie 2 liczby
        tekst->setText(zlaczenie2);
    }

}

void Kalkulator::on_cyfra8_clicked()
{
    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + osiem; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + osiem; // do zlepania cyfr
        tekst->setText(zlaczenie2);
    }
}

void Kalkulator::on_cyfra9_clicked()
{
    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + dziewiec; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + dziewiec; // zlepienie 2 liczby
        tekst->setText(zlaczenie2);
    }

}

void Kalkulator::on_cyfra4_clicked()
{

    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + cztery; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + cztery; // zlepienie 2 liczby
        tekst->setText(zlaczenie2);
    }


}

void Kalkulator::on_cyfra5_clicked()

{


    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + piec; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + piec; // zlepienie 2 liczby
        tekst->setText(zlaczenie2);
    }
}

void Kalkulator::on_cyfra6_clicked()

{

    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + szesc; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + szesc; // zlepienie 2 liczby
        tekst->setText(zlaczenie2);
    }

}


void Kalkulator::on_cyfra1_clicked()

{

    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + jeden; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + jeden; // zlepienie 2 liczby
        tekst->setText(zlaczenie2);
    }

}

void Kalkulator::on_cyfra2_clicked()

{

    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + dwa; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + dwa; // zlepienie 2 liczby
        tekst->setText(zlaczenie2);
    }

}

void Kalkulator::on_cyfra3_clicked()

{
    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + trzy; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + trzy; // zlepienie 2 liczby
        tekst->setText(zlaczenie2);
    }
}

void Kalkulator::on_cyfra0_clicked()

{

    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie + zero; // do zlepania cyfr
    tekst->setText(zlaczenie);
    }
    else
    {
        zlaczenie2 = zlaczenie2 + zero; // zlepienie 2 liczby
        tekst->setText(zlaczenie2);
    }

}



void Kalkulator::on_dodaj_clicked()
{
    operacja_arytmetyczna = 1;
}

void Kalkulator::on_wynik_clicked()
{
    int wynik;
    int na_int1 = zlaczenie.toInt();        //zamienienie string na int
    int na_int2 = zlaczenie2.toInt();


    if (operacja_arytmetyczna == 1)
    {

        wynik = na_int1 + na_int2;
        QString s = QString::number(wynik); //zamiana intow na stringi

        tekst->setText(s); //wyswietlenie koncowego stringa ( wynik )
        tekst2->setText(s); //wyswietlenie koncowego stringa ( wynik )

        zlaczenie = s;

    }
    else if (operacja_arytmetyczna == 2)
    {

        wynik = na_int1 - na_int2;
        QString s = QString::number(wynik); //zamiana intow na stringi

        tekst->setText(s); //wyswietlenie koncowego stringa ( wynik )
        tekst2->setText(s); //wyswietlenie koncowego stringa ( wynik )

        zlaczenie = s;
    }
    else if (operacja_arytmetyczna == 3)
    {

        wynik = na_int1 * na_int2;
        QString s = QString::number(wynik); //zamiana intow na stringi

        tekst->setText(s); //wyswietlenie koncowego stringa ( wynik )
        tekst2->setText(s); //wyswietlenie koncowego stringa ( wynik )

        zlaczenie = s;
    }
    else if (operacja_arytmetyczna == 4)
    {
        wynik = na_int1 / na_int2;
        QString s = QString::number(wynik); //zamiana intow na stringi

        tekst->setText(s); //wyswietlenie koncowego stringa ( wynik )
        tekst2->setText(s); //wyswietlenie koncowego stringa ( wynik )

        zlaczenie = s;

    }
    else if (operacja_arytmetyczna == 5)
    {
        double na_double = zlaczenie.toDouble();

        result = sin (na_double*3.14/180);
        QString s = QString::number(result); //zamiana intow na stringi

        tekst->setText(s + " stopni"); //wyswietlenie koncowego stringa ( wynik )
        tekst2->setText(s); //wyswietlenie koncowego stringa ( wynik )

        zlaczenie = s;
    }
    else if (operacja_arytmetyczna == 6)
    {
        double na_double = zlaczenie.toDouble();

        result = cos (na_double*3.14/180);
        QString s = QString::number(result); //zamiana intow na stringi

        tekst->setText(s + " stopni"); //wyswietlenie koncowego stringa ( wynik )
        tekst2->setText(s); //wyswietlenie koncowego stringa ( wynik )

        zlaczenie = s;
    }
    else if (operacja_arytmetyczna == 7)
    {
        double na_double = zlaczenie.toDouble();


        QString s = QString::number(result); //zamiana intow na stringi

        tekst->setText(s + " stopni"); //wyswietlenie koncowego stringa ( wynik )
        tekst2->setText(s); //wyswietlenie koncowego stringa ( wynik )

        zlaczenie = s;
    }
    else if (operacja_arytmetyczna == 9)
    {
        double na_double = zlaczenie.toDouble();

        result = sqrt (na_double);
        QString s = QString::number(result); //zamiana intow na stringi

        tekst->setText(s); //wyswietlenie koncowego stringa ( wynik )
        tekst2->setText(s); //wyswietlenie koncowego stringa ( wynik )

        zlaczenie = s;
    }



    //QString s = QString::number(wynik); //zamiana intow na stringi



    wynik = 0;


    zlaczenie2 = "";
}





void Kalkulator::on_odejmowanie_clicked()
{
    operacja_arytmetyczna = 2;
}

void Kalkulator::on_mnozenie_clicked()
{
    operacja_arytmetyczna = 3;
}


void Kalkulator::on_dzielenie_clicked()
{
    operacja_arytmetyczna = 4;
}

void Kalkulator::on_wyczysc_clicked()
{
    operacja_arytmetyczna = 0;
     zlaczenie = "";
     zlaczenie2 = "";
    tekst->setText("");

}

void Kalkulator::on_usunjedenznak_clicked()
{
    if (operacja_arytmetyczna == 0)
    {
    zlaczenie = zlaczenie.left(zlaczenie.length() - 1); //usuniecie ostatniego wyrazu
    tekst->setText(zlaczenie);
    }
    else
    {
    zlaczenie2 = zlaczenie2.left(zlaczenie2.length() - 1);
    tekst->setText(zlaczenie2);
    }

}


void Kalkulator::on_sinus_clicked()
{

    operacja_arytmetyczna = 5;
}

void Kalkulator::on_cosinus_clicked()
{
    operacja_arytmetyczna = 6;
}

void Kalkulator::on_tangens_clicked()
{
    operacja_arytmetyczna = 7;
}

void Kalkulator::on_potegowanie_clicked()
{
    operacja_arytmetyczna = 8;
}

void Kalkulator::on_pierwiastek_clicked()
{
    operacja_arytmetyczna = 9;
}
