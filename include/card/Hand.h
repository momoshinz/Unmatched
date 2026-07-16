#ifndef HAND_H
#define HAND_H
#include <vector>

using namespace std;

class Card;
class Hand
{
    private:
        vector<Card *> cards;

    public:
        Hand();
        ~Hand() = default;

        void addCard(Card *card);

        Card *removeCard(int index);

        Card *getCard(int index) const;

        bool isEmpty() const;
        int getSize() const;

        const vector<Card *> &getCards() const;
        void display() const;
};

#endif