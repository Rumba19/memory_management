def outer():
    x = 10
    def inner():
        print(x)
    return inner

f = outer()
f()
