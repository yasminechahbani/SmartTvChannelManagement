#ifndef ULTRASONICSENSOR_H
#define ULTRASONICSENSOR_H

#include <QObject>
#include <QTimer>
#include <QSerialPort>
#include <QDebug>

class UltrasonicSensor : public QObject
{
    Q_OBJECT
public:
    explicit UltrasonicSensor(QObject *parent = nullptr);

signals:
    void distanceChanged(double distance);

public slots:
    void startReading();
    void stopReading();

private slots:
    void readData();

private:
    QTimer *timer;
    QSerialPort *serial;
};

#endif
