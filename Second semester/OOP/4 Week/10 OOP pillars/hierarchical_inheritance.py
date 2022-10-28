class Employee:
    def __init__(self, name, id, salary, position) -> None:
        self.name = name
        self.id = id
        self.salary = salary
        self.position = position


class developer(Employee):
    def __init__(self, name, id, salary, position, tech, focus):
        self.tech = tech
        self.area_of_work = focus
        super().__init__(name, id, salary, position)


class Testing(Employee):
    pass


class sales(Employee):
    pass


class TechLead(Employee):
    def __init__(self, name, id, salary, position, team):
        self.team = team
        super().__init__(name, id, salary, position)
