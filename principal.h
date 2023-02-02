#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QPainter>
#include <QFileDialog>
#include <QMessageBox>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

protected:
    void paintEvent(QPaintEvent* event)override;

private slots:
    void on_actionGuardar_triggered();
    void on_inNota1_valueChanged(int arg1);
    void on_inNota2_valueChanged(int arg1);
    void on_inNota3_valueChanged(int arg1);


    void on_actionNuevo_triggered();




    void on_inNota1_textChanged(const QString &arg1);

private:
    Ui::Principal *ui;
    QPixmap lienzo;

    void dibujar();
    void promediar();
    int getAlto (int valor);
};
#endif // PRINCIPAL_H
