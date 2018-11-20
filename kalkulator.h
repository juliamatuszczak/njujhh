#ifndef KALKULATOR_H
#define KALKULATOR_H

#include <QMainWindow>
/*
Klasa ta dostarcza swój własny layout, do którego można dodać menu, zadokowane widgety,
paski narzędzi i pasek statusu. QMainWindow ma centralną strefę,
która może być zajmowana przez dowolny widget. W naszym przypadku będzie to pole edycji tekstu.
*/
#include <QTextEdit> //biblioteka edytora tekstow
#include <QString> //biblioteka do mozliwosci wyswietlania znakow (abc) lub cyfr (123)
#include <math.h>   //obliczanie f tryg, poteg itd....
#include <fstream>  //biblioteka do mozliwosci zapisania wyniku w pliku tekstowym
#include <string>   //string uzywany przy zapisu do pliku, bo fstream plik przyjmuje tylko stringi a nie qstrinigi
#include <QLabel>   //do mijsca zerowego !

using namespace std;        //przestrzen nazw potrzebna do stringow, fstreamow

namespace Ui {      //ui odpowiada za tworzenie calego okna w ktorym pracujemy
class Kalkulator;
}

class Kalkulator : public QMainWindow       //klasa kalkulator dziedziczy po QMainWndow, dzieki temu mozemy uzywac
//wszystkich metod zwiazanych z tworzeniem przyciskow, labeli itp
{
    Q_OBJECT

public:
    explicit Kalkulator(QWidget *parent = 0);       //konstruktor klasy
    ~Kalkulator();              //destruktor

    QTextEdit *tekst;   //obiekt klasy QTextEdit
    QTextEdit *tekst2;   //obiekt klasy QTextEdit
    QString zlaczenie = ""; //zmienna pomocnicza do zlaczenia cyfr
    QString zlaczenie2 = "";
    QString nic = "";

    QString siedem = "7";
    QString osiem = "8";
    QString dziewiec = "9";
    QString cztery = "4";
    QString piec = "5";
    QString szesc = "6";
    QString jeden = "1";
    QString dwa = "2";
    QString trzy = "3";
    QString zero = "0";


    int operacja_arytmetyczna = 0;  //dodawanie/odejmowanie/mnozenie/dzielenue....
/*
    dodawanie : operacja_arytmetyczna = 1
    odejmowanie: operacja_arytmetyczna = 2
    mnozenie: operacja_arytmetyczna = 3
    dzielenie: operacja_arytmetyczna = 4
    sin: operacja_arytmetyczna = 5
    cos: operacja_arytmetyczna = 6
    tg: operacja_arytmetyczna = 7
    potegowanie: operacja_arytmetyczna = 8
    sqrt: operacja_arytmetyczna = 9
*/

    QTextEdit *a;
    QTextEdit *b;
    QTextEdit *c;
    QLabel *y;
    QLabel *x2;
    QLabel *x;

    QLabel *do_kwadratu;

double param, result;


    QLabel *okno_wyliczenia_miejsc_zerowych;

private slots:
    void on_cyfra7_clicked();

    void on_cyfra8_clicked();

    void on_cyfra9_clicked();




    void on_dodaj_clicked();

    void on_wynik_clicked();

    void on_cyfra4_clicked();

    void on_cyfra5_clicked();

    void on_cyfra6_clicked();

    void on_cyfra1_clicked();

    void on_cyfra2_clicked();

    void on_cyfra3_clicked();

    void on_cyfra0_clicked();

    void on_odejmowanie_clicked();

    void on_dzielenie_clicked();

    void on_wyczysc_clicked();

    void on_usunjedenznak_clicked();

    void on_mnozenie_clicked();

    void on_sinus_clicked();

    void on_cosinus_clicked();

    void on_tangens_clicked();

    void on_potegowanie_clicked();

    void on_pierwiastek_clicked();

    void on_kropka_clicked();

    void on_miejscezerowe_clicked();

    void on_wynik_2_clicked();

    void on_cofnij_do_kalkulator_clicked();

private:
    Ui::Kalkulator *ui;
};

#endif // KALKULATOR_H
