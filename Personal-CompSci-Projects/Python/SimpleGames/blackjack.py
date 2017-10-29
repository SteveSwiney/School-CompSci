# Steven Swiney
# BlackJack

import math
import random
import sys

def blackjack(player, dealer):

    print
    print("Welcome Player, cards are being shuffled")
    print
    print("Cards are shuffled.")
    print(deck)
    print
    print
    print
    first_hand(player, dealer)
    print
    print
    checksum(player, dealer)
    print
    print
    hitORstand(player, dealer)



def first_hand(player, dealer):
    player = 0
    dealer = 0
    for i in range(2):
        random.shuffle(deck)
        x = deck[i]
        deck.pop(i)
        print
        print("Single Card Value : ")
        print
        print(x)
        player = x + player
    for j in range(2):
        random.shuffle(deck)
        y = deck[j]
        deck.pop(j)
        print
        print("Dealer's Single Card is :  ")
        print
        print(y)
        dealer = y + dealer
        print

    print("Total Card Sum is : ")
    print
    print(player)
    print
    if y == 10 or y == 11 and dealer != 21:
        print("Dealer does not have BlackJack : ")
        print
        print(dealer)
        print
    if dealer == 21:
        print("Dealer has BlackJack, you lose")
        print
        print
    return player, dealer



def hitORstand(player, dealer):

    while player < 21 or dealer < 21:
        print
        hit = None
        if player > 21:
            print("You Bust")
            print
            print
            break
        elif dealer > 21:
            print("Dealer busted, you win!")
            print
            print
            break
        elif player < 21 or dealer < 21 and hit == 1:
            print("Would you like to hit or stay? (1 or 0)")
            print
            print
            hit = input()
            print
            print
            if hit == 1:
                for i in range(1):
                    random.shuffle(deck)
                    print(deck)
                    print
                    x = deck[i]
                    deck.pop(i)
                    print(x)
                    print("Your card's value is ")
                    print
                    player = x + player
                    print(player)
            elif hit == 0:
                if dealer < 17:
                    for j in range(1):
                        random.shuffle(deck)
                        print(deck)
                        print
                        y = deck[j]
                        deck.pop(j)
                        print("Dealer's turn")
                        print
                        dealer = y+dealer
                        print("Dealer's sum: ")
                        print
                        print(dealer)
                        checksum(player, dealer)
                        if dealer > 17:
                            break
                elif dealer < 21 and player < 21 and hit == 0:
                    checksum(player, dealer)
                    break
        elif hit == 0 and player < 21:
            checksum(player, dealer)
            break

    return player, dealer


def checksum(player, dealer):
    if player or dealer == 21:        # Function to check for winners
        if player == 21:
            print
            print("You got blackjack")
        elif dealer == 21:
            print("Dealer won, sorry, see score below")
            print
            print(dealer)
    if player > 21:             # Check for busts
        print("You Bust")
        print
    elif dealer > 21:
        print("Dealer busted, you win!")
        print
    elif player > 21 and dealer > 21:
        print("Dealer and player both bust")
        print
    elif player < 21 and dealer < 21 and hit == 0:
        print
        if player > dealer:
            print("You won!")
            print
        elif player < dealer:
            print("You lost")
            print
        elif player == dealer:
            print("PUSH, tie game")
            print
        else:
            print("Invalid Option")
            print

    return player, dealer

def exit():
    print
    print
    print
    print("Thanks for playing")
    print
    print
    print
    return

A = 1
J = 10
K = 10
Q = 10
choice = 1
#cash = random.randrange(500,2000)

deck = [A, A, A, A,
        2,2,2,2,
        3,3,3,3,
        4,4,4,4,
        5,5,5,5,
        6,6,6,6,
        7,7,7,7,
        8,8,8,8,
        9,9,9,9,
        10,10,10,10,
        J, J, J, J,
        Q, Q, Q, Q,
        K, K, K, K]

while choice == 1:
    print
    print
    print(" @@  BlackJack  @@ ")
    print("___________________")
    print("1.  Play")
    print("0.  Exit")
    print
    print("Please choose an option")
    print
    choice = input()
    random.shuffle(deck)
    player = 0
    dealer = 0
    hit = None
    if choice == 1:
        blackjack(player, dealer)
    elif choice == 0:
        exit()
    else:
        print("Invalid Option")
        choice = 1
    print
