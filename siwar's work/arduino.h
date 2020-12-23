#ifndef ARDUINO_H
#define ARDUINO_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
class Arduino
{
public: //methode de la classe Arduino
    Arduino();
    int connect_arduino();//permet de connecter le PC a Arduino
    int close_arduino();//permet de fermer la connexion
    int write_to_arduino(QByteArray);//envoyer des donnee vers arduino
    QByteArray read_from_arduino();//recevoir des donnee de la carte arduino
    void write_to_arduino( const char*);
    QSerialPort* getserial();//accesseur
    QString getarduino_port_name();
private:
    QSerialPort * serial;
    static const quint16 arduino_uno_vendor_id=9825;
    static const quint16 arduino_uno_producy_id=67;
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data;//contenant les donnee lues a partir d'Arduino
};

#endif // ARDUINO_H
