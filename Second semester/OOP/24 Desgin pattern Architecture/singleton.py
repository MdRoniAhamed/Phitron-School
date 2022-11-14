from mimetypes import init


class Singleton:
    __instance = None
    def __init__(self) -> None:
        if Singleton.__instance is None:
            Singleton.__instance = self
        else:
            raise Exception ('This is Singleton. Already have an instance')

    @staticmethod
    def get_instance():
        if Singleton.__instance is None:
            Singleton()
        return Singleton.__instance


first = Singleton()
second = Singleton.get_instance
third = Singleton.get_instance

print(first)
print(second)
print(third)