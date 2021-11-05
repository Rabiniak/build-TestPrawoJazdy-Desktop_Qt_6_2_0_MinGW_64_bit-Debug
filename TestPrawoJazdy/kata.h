#ifndef KATA_H
#define KATA_H
#include <QMainWindow>
#include <QDialog>
#include <QString>
#include <vector>
namespace Ui {
class kata;
}

class kata : public QDialog
{
    Q_OBJECT

public:
    void showPoints();
    explicit kata(QWidget *parent = nullptr);
    ~kata();
void loadQuestion();
private slots:
void on_PrzyciskC_clicked();

void on_PrzyciskB_clicked();

void on_PrzyciskA_clicked();

private:
std::vector<QString>  questions {"Które z wymienionych świateł stanowi obowiązkowe wyposażenie motocykla?\nA.tylne trójkątne\nB.tylne inne niż trójkątne\nC.boczne",
                           "W jaki sposób będziesz wiózł dziesięcioletnie dziecko dwumiejscowym motocyklem?\nA.w kasku ochronnym, na siedzeniu pasażera\nB.przed sobą, na zbiorniku paliwa\nC.Między sobą a innym dorosłym pasażerem motocyka",
                           "Jaki minimalny odstęp powinien być zachowany między kolumnami motorowerów\nA.100 metrów\nB.200 metróW\nC.500 metrów",
                           "Na co, przede wszystkim, zwrócisz uwagę podczas tankowania motocykla?\nA.Aby nie napełnić więcej niż 3/4 pojemności zbiornika\nB.Aby nie rozlać benzyny na gorący silnik lub rozgrzane elementy układu wydechowego\nC.Aby silnik motocykla był wyłączony",
                           "Czy u poszkodowanego, który omyłkowo połknął substancję żrącą, należy wywołać wymioty ?\nA.Tak, jak najszybciej\nB.Nie, w żadnym przypadku\nC.Tak, ale tylko w przypadku gdy substancja żrąca była mocno rozcieńczona",
                           "Jedziesz z prędkością 80 km/h. Jaka pozycja zapewni Ci optymalny tor jazdy po zakręcie?\nA.Na środku drogi, z częściowym przekroczeniem widocznej linii\nB.Przy linii rozdzielającej pasy ruchu - na prawej połowie jezdni\nC.Przy prawej krawędzi jezdni",
                           "Jak często należy obracać poszkodowanego nieurazowego na drugi bok po ułożeniu go na pozycji bezpiecznej?\nA.co 60 minut\nB.co 30 minut\nC.co 15 minut",
                           "Jaka maksymalna liczba motocykli ma prawo jechać w zorganizowanej kolumnie?\nA.10\nB.15\nC.20 ",
                           "Czy jadąc autostradą i nie wykonując żadnych manewrów powinieneś obserwować drogę za motocyklem?\nA.Nie, nie ma takiej potrzeby\nB.Tak, obserwując ją w lusterkach.\nC.Tak, odwracając głowę, żeby obserwować ją bezpośrednio",
                           "Co powinieneś zrobić, jeżeli ofiara wypadku po kilku minutach odzyskała przytomność i chce iść do domu?\nA.Podać jej coś do picia i środki przeciwbólowe\nB.Namawiać ją do pozostania, bacznie obserwować i wezwać pomoc medyczną\nC.Pozwolić jej odejść do domu, zalecając wizytę u lekarza.",
                           "Na czym polega właściwe telefoniczne wezwanie pomocy do wypadku drogowego ?\nA.Na poinformowaniu jedynie o miejscu wypadku\nB.Na upewnieniu się, że operator przyjął całą informacje o wypadku\nC.Na poinformowaniu operatora jedynie o rodzaju zdarzenia oraz liczbie poszkodowanych osób",
                           "Jak powinieneś postąpić w sytuacji, gdy po upadku jednośladu, poszkodowany ma uraz głowy z widocznym krwawym wyciekiem z nosa lub ucha?\nA.Unieruchomić głowę i kręgosłup szyjny i założyć opatrunek osłaniający\nB.Nałożyć opatrunki uciskowe na miejsca krwawiące\nC.Nie dotykać poszkodowanego",
                           "Co w zasadniczy sposób decyduje o długości drogi hamowania motocykla?\nA.Czas reakcji kierującego\nB.System kontroli trakcji\nC.Rodzaj nawierzchni, po której porusza się pojazd",
                           "Z jaką prędkością masz prawo kierować motocyklem po drodze ekspresowej dwujezdniowej?\nA.105kmh\nB.125kmh\nC.145kmh",
                           "Czy kierując motocyklem, niewyposażonym fabrycznie w pasy bezpieczeństwa,masz prawo przewozić pasażera bez kasku ochronnego?\nA.Tak, na tylnym siedzeniu motocykla\nB.Tak, na bocznym wózku\nC.Nie"
                          };
std::vector<QString>  answers {"B", "A","B","B","B","B","B","A","B","B","B","A","C","A","C"};
std::vector<int> oldquestion;
int licznik=-1;
int obecnePytanie;
int punkty=0;
    Ui::kata *ui;
void checkAnswer(QString answer);
};

#endif // KATA_H
