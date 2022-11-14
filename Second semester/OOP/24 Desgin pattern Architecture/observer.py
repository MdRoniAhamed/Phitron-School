from tkinter.filedialog import SaveFileDialog


class GroupChat:
    def __init__(self) -> None:
        self.__observer = []
    
    def attach(self, observer):
        self.__observer.append(observer)
    
    def add_new_message(self, msg):
        self.notify(msg)

    def notify(self, msg):
        for observer in self.__observer:
            observer.update(msg)

class Observer:
    def __init__(self, name) -> None:
        self.name = name
    
    def update(self, msg):
        print(f"New message for {self.name} {msg}")


messenger = GroupChat()

abid = Observer('Abid')
navid = Observer('Sabid')
sabid = Observer('Nabil')

messenger.attach(abid)
messenger.attach(navid)
messenger.attach(sabid)

messenger.add_new_message("hey bro and sis")