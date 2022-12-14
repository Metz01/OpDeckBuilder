#ifndef CARD_W_H
#define CARD_W_H

#include <QLabel>
#include <QWidget>
#include "../models/card/Card.h"

class CardWidget : public QWidget
{
    Q_OBJECT
private:
    QLabel *artWork;
    Card *_card;

public:
    CardWidget(Card *card, QWidget *parent = 0);
    void refresh();
    std::string getInfo();
};

#endif