#ifndef KATB_H
#define KATB_H

#include <QDialog>
#include <QString>
#include <vector>
namespace Ui {
class katb;
}

class katb : public QDialog
{
    Q_OBJECT

public:
    explicit katb(QWidget *parent = nullptr);
    ~katb();
    void loadQuestion();
    void showPoints();
    private slots:
    void on_PrzyciskC_clicked();

    void on_PrzyciskB_clicked();

    void on_PrzyciskA_clicked();

private:
    std::vector<QString>  questions_b {"Obowiązek korzystania z pasów bezpieczeństwa podczas jazdy samochodem osobowym wyposażonym w takie pasy dotyczy\nA.Tylko kierującego pojazdem\nB.Wszystkich przewożonych osób\nC.Tylko osób na przednich siedzeniach",
                               "Pojazd może być unieruchomiony przez zastosowanie urządzenia do blokowania kół, jeżeli pozostawiono go na miejscu, gdzie jest to zabronione i:\nA.Utrudnia ruch\nB.Zagraża bezpieczeństwu ruchu\nC.Nie utrudnia ruchu i nie zagraża jego bezpieczeństwu",
                               "Widząc zbliżający się pojazd uprzywilejowany, kierujący pojazdem powinien:\nA.Ułatwić mu przejazd\nB.Zatrzymać się - w każdej sytuacji\nC.Zjechać na chodnik lub pobocze - w każdej sytuacji",
                               "Kierujący pojazdem osobowym może przewozić osoby w liczbie\nA.Nie przekraczającej liczby miejsc określonych w dowodzie rejestracyjnym\nB.Większej o jeden od liczby określonej w dowodzie rejestracyjnym\nC.Niezależnej od liczby miejsc określonych w dowodzie rejestracyjnym",
                               "Rzeczywista masa całkowita przyczepy ciągniętej przez samochód osobowy\nA.Powinna być mniejsza co najmniej o 40% od rzeczywistej masy całkowitej tego samochodu\nB.Może przekraczać rzeczywistą masę całkowitą samochodu, jednak nie więcej niż o 40%\nC.Nie może przekraczać rzeczywistej masy całkowitej tego samochodu",
                               "Samochód osobowy podlega dodatkowemu badaniu technicznemu\nA.Na wniosek Policji w razie uzasadnionego przypuszczenia, że zagraża bezpieczeństwu ruchu lub narusza wymagania ochrony środowiska\nB.W przypadku montażu instalacji do zasilania gazem\nC.Przy każdej wymianie właściciela",
                               "Badanie techniczne pojazdu można przeprowadzić\nA.W dowolnej stacji kontroli pojazdów\nB.W stacji napraw autoryzowanej przez producenta pojazdu\nC.W dowolnym warsztacie samochodowym",
                               "Z obycia dodatkowego przeszkolenia, w celu zmniejszenia liczby punktów uzyskanych za naruszenie przepisów ruchu drogowego, może skorzystać\nA.Każdy kierowca\nB.Kierowca w okresie 1 roku od wydania po raz pierwszy prawa jazdy\nC.Kierowca w okresie przekraczającym 1 rok od dnia wydania po raz pierwszy prawo jazdy",
                               "Przy ruszaniu pod górkę, zbyt późne zwolneinie pedału sprzęgła w stosunku do zwolnienia hamulca może spowodować\nA.Stoczenie pojazdu\nB.Unieruchomienie silnika\nC.gwałtowne ruszenie pojazdu do przodu",
                               "Jeżeli zachodzi konieczność nagłego zatrzymania samochodu osobowego, to należy\nA.Natychmiast wcisnąć pedał hamulca roboczego\nB.Najpierw wcisnąć pedał sprzęgła, a następnie rozpocząć hamowanie pulsacyjne\nC.Wyłączyć silnik",
                               "Kierujący samochodem osobowym, w czasie znoszenia tyłu pojazdu w prawo, powinien przednie koła\nA.Pozostawić w dotychczasowym położeniu\nB.Skręcić w lewo, a następnie w prawo\nC.Skręcić w prawo, a następnie w lewo",
                               "Całkowita droga zatrzymania samochodu osobowego na suchej jezdni o nawierzchni bitumicznej, jadącego z prędkością 50kmh, mieści się w przedziale\nA.5-15m\nB.20-30m\nC.40-50m",
                               "W samochodzie osobowym z silnikiem benzynowym wyposażonym w katalizator, jako paliwo można stosować\nA.Dowolony rodzaj benzyny\nB.Wyłącznie benzynę bezołowiową\nC.Olej napędowy",
                               "Dokonywanie regularnych przeglądów technicznych pojazdu\nA.Jest konieczne, gdyż pozwala utrzymać pojazd we właściwej sprawności\nB.Nie jest konieczne\nC.Jest korzystne tylko w okresie objętym gwarancją",
                               "Lampki kontrolne informujące w czasie jazdy kierowcę o ważnym problemie technicznym są barwy\nA.Żółtej samochodowej\nB.Zielonej\nC.Czerwonej"};

    std::vector<QString>  answers_b {"B","C","A","A","C","A","A","C","A","A","C","B","B","A","C"};
    std::vector<int> oldquestion;
    int licznik_b=-1;
    int obecnePytanie_b;
    int punkty_b=0;
    Ui::katb *ui;
    void checkAnswer(QString answer);
};

#endif // KATB_H
