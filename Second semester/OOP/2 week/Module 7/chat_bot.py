""" Chatbot.
    Steps:
    1. imput/ Listen
    2. Process/decide
    3. output/talkback
"""
greet_words = ['hi','hello','yo','hey']
bye_words = ['bye', 'tata', 'hasta la vista']
bad_words = ['dog', 'pocha']

def listen():
    return input("Say something: ")

def decide(command):
    command = command.lower()
    broken_word = command.split(" ")
    # print(broken_word)
    for word in broken_word:
        if word in greet_words:
            talkback("Hi man")
            break
        
        elif word in bye_words:
            talkback("Tata bye bye")
            break
        elif word in bad_words:
            talkback("You are a bad guy.Behave yourself!")
            break

def talkback(response):
    print(response)
while True:
    command = listen()
    if command == 'exit':
        break
    decide(command)