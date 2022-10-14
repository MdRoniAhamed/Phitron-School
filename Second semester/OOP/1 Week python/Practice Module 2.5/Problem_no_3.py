
st = input('>Player 1: ')
st2 = input('>Player2: ')

if st == 'rock' and st2 == 'paper':
    print('>Player 2 is the winner')

elif st == 'paper' and st2 == 'rock':
    print('>Player 1 is the winner')

elif st == 'rock' and st2 == 'scissor':
    print('>Player 1 is the winner')

elif st == 'scissor' and st2 == 'rock':
    print('>Player 2 is the winner')

elif st == 'paper' and st2 == 'scissor':
    print('>Player 2 is the winner')

elif st == 'scissor' and st2 == 'paper':
    print('>Player 1 is the winner')
