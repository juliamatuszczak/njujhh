#ifndef KALKULATOR_H
#define KALKULATOR_H

#include <QMainWindow>
#include <QTextEdit> //biblioteka edytora tekstow
#include <QString> //biblioteka do mozliwosci wyswietlania znakow (abc) lub cyfr (123)


namespace Ui {
class Kalkulator;
}

class Kalkulator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Kalkulator(QWidget *parent = 0);
    ~Kalkulator();

    QTextEdit *tekst;   //obiekt klasy QTextEdit
    QString zlaczenie = ""; //zmienna pomocnicza do zlaczenia cyfr
    QString zlaczenie2 = "";

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

*/




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

private:
    Ui::Kalkulator *ui;
};

#endif // KALKULATOR_H
