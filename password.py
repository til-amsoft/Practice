import random
import string
import math
import re

def password_gen(length=random.randint(20,64),  fraction=0.1, chars="ALL"):
    password=""
    password += random.choice(string.ascii_lowercase)
    password += random.choice(string.ascii_uppercase)
    for i in range(math.ceil(length*fraction)):
        password += random.choice("!\"£$%^&*()#@")
    while len(password)<length:
        password += random.choice(string.ascii_letters)
    pass_list=list(password)
    random.shuffle(pass_list)
    final_pass = "".join(pass_list)
    return final_pass

def password_test(length,  fraction, chars="ALL"):
    password=password_gen(length, chars, fraction)
    length_check = len(password)==length
    specials = "[!\"£$%^&*()#@]{1}"
    fraction_check = len(re.findall(specials,password)>=length*fraction
    lower_check = len(re.findall("[a-z]{1}",password))>=1
    upper_check = len(re.findall("[A-Z]{1}",password))>=1
    if length_check and fraction_check and lower_check and upper_check:
        print("Successful Password Generation")
        return True
    else"
        print("Password Generation Failed")
        return False

password_test(20, 0.1)