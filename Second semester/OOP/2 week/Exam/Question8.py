import pytest
def make_upper(txt):
    return txt.upper()
def make_capital(text):
    return text.capitalize()   
def make_lower(txt):
    return txt.lower()

txt = "hello how ARE YOU I Am fine. and you "
if __name__ == '__main__' :
    upper_txt = make_upper(txt)
    lower_txt = make_lower(txt)
    capitalize_txt = make_capital(txt)
    print(capitalize_txt)
    print(lower_txt)
    print(upper_txt)

def  test_script():
    tx = "hello"
    tx1 = "HELLO"
    tx2 = "Hello"
    assert tx == make_lower('Hello'), "text fail"
    assert tx1 == make_upper('Hello'), "text fail"
    assert tx2 == make_capital('hello'), "text fail"

test_script()