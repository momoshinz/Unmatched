#ifndef DECK_H
#define DECK_H
#include <vector>

using namespace std;

class Card;
class Deck
{
    private:
        vector<Card *> cards;

    public:
        Deck();
        ~Deck();

        void shuffle();

        Card *drawCard();

        void addCard(Card *card);

        int getSize() const;
        bool isEmpty() const;

        const vector<Card *> &getCards() const;

        void display() const;
        void addCopies(const Card &card, int count);
        
        static void DraculaDeck(Deck& deck);
        static void SherlockDeck(Deck& deck);
};

#endif