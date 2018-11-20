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

//do miejsc zerowych (obiekty dynamicznie tworzone)
     a = new QTextEdit(ui->ramka2);
     a->setGeometry(QRect(0, 0, 0, 0));        //ustawianie polozenia edytora

     b = new QTextEdit(ui->ramka2);
     b->setGeometry(QRect(0, 0, 0, 0));

     c = new QTextEdit(ui->ramka2);
     c->setGeometry(QRect(0, 0, 0, 0));

     y = new QLabel(ui->ramka2);
     x2 = new QLabel(ui->ramka2);
     x = new QLabel(ui->ramka2);

     do_kwadratu = new QLabel(ui->ramka2);


     //okienko z wynikami dla miejsc zerowych funkcji kwadratowej
     okno_wyliczenia_miejsc_zerowych = new QLabel(ui->ramka2); // stworzenie edytora tekstu
     okno_wyliczenia_miejsc_zerowych->setGeometry(QRect(0, 0, 0, 0));        //ustawianie polozenia edytora

     ui->wynik_2->setGeometry(QRect(0, 0, 0, 0));

     ui->cofnij_do_kalkulator->setGeometry(QRect(0, 0, 0, 0));
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
    double wynik;
    double na_double1 = zlaczenie.toDouble();        //zamienienie string na double
    double na_double2 = zlaczenie2.toDouble();


        if (operacja_arytmetyczna == 1)
        {
            wynik = na_double1 + na_double2;
        }
        else if (operacja_arytmetyczna == 2)
        {
            wynik = na_double1 - na_double2;
        }
        else if (operacja_arytmetyczna == 3)
        {
            wynik = na_double1 * na_double2;
        }
        else if (operacja_arytmetyczna == 4)
        {
            wynik = na_double1 / na_double2;
        }
        else if (operacja_arytmetyczna == 5)
        {
            wynik = sin (na_double1*3.14/180);
        }
        else if (operacja_arytmetyczna == 6)
        {
            wynik = cos (na_double1*3.14/180);
        }
        else if (operacja_arytmetyczna == 7)
        {
            wynik = tan (na_double1);
        }
        else if (operacja_arytmetyczna == 8)
        {
            wynik = pow (na_double1, na_double2);
        }
        else if (operacja_arytmetyczna == 9)
        {
            wynik = sqrt (na_double1);      //pierwiastek
        }
        else
        {
            wynik = na_double1;
        }

    QString s = QString::number(wynik); //zamiana double na stringi


    tekst->setText(s); //wyswietlenie koncowego stringa ( wynik )
    tekst2->setText(s); //wyswietlenie koncowego stringa ( wynik )

    string s_plik_tekstowy = to_string(wynik);
    fstream plik;
    plik.open( "C:/Users/User/Documents/Kalkukator_test/wynik.txt", ios::out | ios::trunc );    //trunc odpowiada za
    //czyszczenie zawartosci pliku przed zapisem
    plik<<s_plik_tekstowy;      //zawartosc stringa zapisuje sie do pliktu txt (tekstowego)
    plik.close();
//koniec zapisu do pliku


    zlaczenie = s;
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
    tekst2->setText("");
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

void Kalkulator::on_kropka_clicked()
{
   if (operacja_arytmetyczna == 0)
   {
   zlaczenie = zlaczenie + ".";     //qstring, edytor tekstowy o to prosi
   tekst->setText(zlaczenie);
   }
   else
   {
       zlaczenie2 = zlaczenie2 + ".";
       tekst->setText(zlaczenie2);
   }
}

void Kalkulator::on_miejscezerowe_clicked()
{
    ui->ramka->hide();  //hide czyli ukryj, czyli ramka znika z pola widzenia
    ui->ramka2->show(); //pokaz ramke nr 2 ( ta od miejsca zerowego)

    ui->ramka2->setGeometry(85, 50, 511, 571);
    ui->wynik_2->setGeometry(QRect(30, 80, 300, 40));
    ui->cofnij_do_kalkulator->setGeometry(QRect(30, 340, 300, 40));

    y->setGeometry(QRect(35, 20, 50, 50));
    y->setAutoFillBackground(true);
    y->setStyleSheet("font: 18pt;");

    y->setText("y = ");     //
    y->raise();

    a->setGeometry(QRect(85, 30, 35, 35));
    a->setStyleSheet("font: 9pt;");

    x2->setGeometry(QRect(125, 33, 60, 24));
    x2->setAutoFillBackground(true);
    x2->setStyleSheet("font: 18pt;");
    x2->setText("x  + ");

    do_kwadratu->setGeometry(QRect(145, 23, 13, 13));
    do_kwadratu->setAutoFillBackground(true);
    do_kwadratu->setStyleSheet("font: 10pt;");
    do_kwadratu->setText("2");

    b->setGeometry(QRect(190, 30, 35, 35));
    b->setStyleSheet("font: 9pt;");

    x->setGeometry(QRect(230, 20,50, 50));
    x->setAutoFillBackground(true);
    x->setStyleSheet("font: 18pt;");
    x->setText("x + ");

    c->setGeometry(QRect(285, 30, 35, 35));
    c->setStyleSheet("font: 9pt;");
}

void Kalkulator::on_wynik_2_clicked()
{
    QString string_a = a->toPlainText();    //to co napisalam w qtextedit zamienia sie na string
    QString string_b = b->toPlainText();
    QString string_c = c->toPlainText();

    double string_a_na_double = string_a.toDouble();
    double string_b_na_double = string_b.toDouble();
    double string_c_na_double = string_c.toDouble();

    //liczenie delty
    double delta;

    delta = (string_b_na_double*string_b_na_double) - 4 * string_a_na_double * string_c_na_double;

    //liczenie miejsc zerowych

    double m_x0;
    double m_x1;
    double m_x2;

        if (delta > 0)
        {
            m_x1 = ( -string_b_na_double - sqrt(delta) ) / (2*string_a_na_double);
            m_x2 = ( -string_b_na_double + sqrt(delta) ) / (2*string_a_na_double);

        }
        else if(delta == 0)
        {
            m_x0 = (-string_b_na_double) / (2*string_a_na_double);
        }
        else
        {
            //brak miejsc zerowych
        }


    QString m_x0_na_string = QString::number(m_x0); //zamiana intow na stringi
    QString m_x1_na_string = QString::number(m_x1); //zamiana intow na stringi
    QString m_x2_na_string = QString::number(m_x2); //zamiana intow na stringi
    QString delta_na_string = QString::number(delta); //zamiana intow na stringi

    okno_wyliczenia_miejsc_zerowych->setGeometry(QRect(40, 150, 300, 150));
    okno_wyliczenia_miejsc_zerowych->setAutoFillBackground(true);
    okno_wyliczenia_miejsc_zerowych->setStyleSheet("font: 18pt;");

    if (delta>0)
    {
       okno_wyliczenia_miejsc_zerowych->setText("Δ = " + delta_na_string + "\nx1 = " + m_x1_na_string
                                                +"\nx2 = " + m_x2_na_string);
    }
    else if (delta == 0)
    {
        okno_wyliczenia_miejsc_zerowych->setText("Δ = " + delta_na_string + "\nx0 = " + m_x0_na_string);
    }
  else
    {
        okno_wyliczenia_miejsc_zerowych->setText("Brak miejsc zerowych.\nDelta<0");
    }
}

void Kalkulator::on_cofnij_do_kalkulator_clicked()
{
    ui->ramka2->hide();
    ui->ramka->show();
}
