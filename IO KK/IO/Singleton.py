class Singleton:
    dzialania = []

    @classmethod
    def logger(cls, x, op, y, w):
        dzialanie = f"{x} {op} {y} = {w}"
        cls.dzialania.append(dzialanie)

    @staticmethod
    def getInstance():
        return Singleton

    @classmethod
    def getDzialania(cls):
        return cls.dzialania


operations = {
    1: lambda x, y: x + y,
    2: lambda x, y: x - y,
    3: lambda x, y: x * y,
    4: lambda x, y: x / y if y != 0 else None
}

while True:
    wybor = int(input("Co robisz:\n1. Dodaje\n2. Odejmuje\n3. Mnoze\
        \n4. Dziele\n5. Wyjdz\nWybor:"))

    if wybor == 5:
        for e in Singleton.getDzialania():
            print(e)
        break

    if wybor not in operations:
        print("Zla opcja!")
        continue

    x = int(input("Podaj x: "))
    y = int(input("Podaj y: "))
    w = operations[wybor](x, y)

    if w is None:
        print("NIE DZIELIMY PRZEZ 0!")
    else:
        print(f"Wynik to: {w}")
        Singleton.logger(x, "+-*/"[wybor-1], y, w)
