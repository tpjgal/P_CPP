#pragma once
using namespace System;
public ref class CLR_Method
{
    array<unsigned int>^ Cards;
    Random^ randomGenerator;


    enum class Suit
    {
        Clubs = 0, Diamonds, Hearts, Spades
    };


    enum class Card
    {
        Ace = 0, Deuce, Trey, Four, Five, Six, Seven,
        Eight, Nine, Ten, Jack, Queen, King
    };

    /// <summary>
    /// Constructor. 
    /// </summary>
    CLR_Method()
    {
        randomGenerator = gcnew Random();
        Cards = gcnew array<unsigned int>(52);
        for (unsigned int u = 0; u < 52; ++u)
        {
            Cards[u] = u;
        }
    }

    /// <summary>
    /// Non return with argument Method.
    /// </summary>
    /// <param name="u"></param>
    /// <param name="v"></param>
    void Swap(unsigned int% u, unsigned int% v)
    {
        unsigned int tmp;
        tmp = u;
        u = v;
        v = tmp;
    }

    /// <summary>
    /// Non return without argument Method.
    /// </summary>
    void Shuffle()
    {
        for (unsigned int u = 52; u > 0; --u)
        {
            Swap(Cards[u - 1], Cards[RandomCard(u)]);
        }
    }

    /// <summary>
    /// Return type with argument Method.
    /// </summary>
    /// <param name="Max"></param>
    /// <returns></returns>
    unsigned int RandomCard(unsigned int Max)
    {
        return(unsigned int)((double)Max * randomGenerator->NextDouble());
    }

    /// <summary>
    ///  return type with argument Method.
    /// </summary>
    /// <param name="u"></param>
    /// <returns></returns>
    String^ CardToString(unsigned int u)
    {
        Suit s = (Suit)(Cards[u] / 13);
        Card c = (Card)(Cards[u] % 13);
        return c.ToString() + " of " + s.ToString();
    }
public:
    static void Main()
    {
        CLR_Method^ clrMethod = gcnew CLR_Method();

        /// <summary>
        ///  calling method. 
        /// </summary>
        clrMethod->Shuffle();
        for (unsigned int u = 0; u < 5; ++u)
        {
            Console::WriteLine(clrMethod->CardToString(u));
        }
       // Console::ReadLine();
    }
};