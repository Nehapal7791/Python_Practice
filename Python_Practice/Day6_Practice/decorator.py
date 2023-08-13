"""example 1"""
def main_welcome(func):
    def sub_welcome():
        print("welcome")
        func()
        print("Hii.!")
    return sub_welcome

@main_welcome
def channel_name():
    print("this is decorator function")

channel_name()


"""example 2"""
def deco_result(result_function):
    def distinction(marks):
        for m in marks:
            if m>=75:
                print("Distinction")
        result_function(marks)
    return distinction


@deco_result
def result(marks):
    for m in marks:
        if m>=33:
            pass
        else:
            print("fail")
            break
    else:
        print("pass")
result([35,36,40,90,55,90])


